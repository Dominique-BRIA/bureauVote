#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //Creation du socket et connexion avec le serveur

    socket = new QTcpSocket();

    QString IPAddress = "127.0.0.1";
    socket->connectToHost(QHostAddress(IPAddress), 8080);
    QStringList messageList;

    if (socket->waitForConnected(-1))
    {
        //Vérification du nombre de bureau de vote ouvert

        if (socket->waitForReadyRead(-1))
        {
            data = socket->readAll();
            message = QString::fromUtf8(data);

        }
        if(message == "exit")
        {
            QMessageBox::warning(this,"Message du serveur","Bureau de vote limitée !");
            socket->close();

        }
        else if(message == "Connecte au serveur")
        {
            QMessageBox::information(this,"Message systeme","Socket (Client) is connected");
            ui->setupUi(this);
            ui->stackedWidget->setCurrentIndex(0);
        }


    }
    else
    {
        QMessageBox::warning(this,"Error systeme","Socket (Client) is not connected : " + socket->errorString());

    }

    // Connexion des signaux/slots

    connect(socket, &QTcpSocket::connected, this, &MainWindow::onConnected);

    connect(socket, &QTcpSocket::errorOccurred, this, &MainWindow::onErrorOccurred);

    connect(socket, &QTcpSocket::disconnected, this, &MainWindow::onDisconnected);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onConnected()
{
    QMessageBox::information(this, "Connexion", "Connecté au serveur !");
}

void MainWindow::onErrorOccurred(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError);
    QMessageBox::critical(this, "Erreur", socket->errorString());
}



void MainWindow::on_ConfirmButton_clicked()
{

    if (socket->state() == QAbstractSocket::ConnectedState)
    {
        //Recuperation des informations personnelles

        QString idcard = (ui->idcardEdit->text()).toUpper();
        QString nom = (ui->nomEdit->text()).toUpper();
        QString prenom = (ui->prenomEdit->text()).toUpper();
        QString idBureau = (ui->lineBureau->text()).toUpper();

        // Premiere verification des informations entrées

        if(!(idcard.startsWith('E') || idcard.startsWith('A')))
        {
            QMessageBox::warning(this, "Erreur", "Matricule incorrecte !");
            return;

        }
        if(idcard == "" || nom == "" || prenom == "" || idBureau == "")
        {
            QMessageBox::warning(this, "Erreur", "Tout les champs sont obligatoire");
            return;
        }

        // Envoie des information de l'électeur ou administrateur Format du message : idcard;nom;prenom;idBureau

        QString message = idcard + ";"  +  nom + ";"  + prenom + ";" + idBureau;

        //Envoi des informations personnelles pour vérification par le serveur

        socket->write(message.toUtf8());
        socket->flush();

        //Récupération de la conclusion de la vérification des informations par le serveur (maximun 2min)

        if (socket->waitForReadyRead(-1))
        {
            data = socket->readAll();
            message = QString::fromUtf8(data).trimmed();
        }
        else
        {
            QMessageBox::warning(this, "Error serveur ", "Echec de reception des informations !");

        }

        //Gerer lorsque c'est l'electeur qui souhaite se connecte

        if(idcard.startsWith('E'))
        {

            if(message == "Non inscrit")
            {
                QMessageBox::warning(this, "Tentatif de Fraude", "Electeur non inscrit sur les listes electorales");
            }

            else if(message == "Autorise a vote" )
            {
                ui->stackedWidget->setCurrentIndex(1);
                ui->label_bienvenue->setText("Bonjour M./Mme " + nom + " " + prenom);

            }
           else if(message == "Deja vote")
            {
                QMessageBox::warning(this, "Tentatif de Fraude Grave", "Vous avez deja vote !");

            }

        }

        //Gerer lorsque c'est l'administrateur qui souhaite se connecte

        else if(idcard.startsWith('A'))
        {
            if(message == "Non inscrit")
            {
                QMessageBox::warning(this,"Erreur","Matricule Administrateur incorrecte");
            }
            else
            {
                // Affichage des Voix des Candidat

                ui->bienvenueAdmin->setText("Bonjour M./Mme " + nom + " " + prenom);
                ui->stackedWidget->setCurrentIndex(2);
                QStringList listeVoix = message.split(";");
                ui->voix1->setText("Voix : " + listeVoix[0]);
                ui->voix2->setText("Voix : " + listeVoix[1]);
                ui->voix3->setText("Voix : " + listeVoix[2]);
                ui->voix4->setText("Voix : " + listeVoix[3]);
                ui->voix5->setText("Voix : " + listeVoix[4]);
                ui->voix6->setText("Voix : " + listeVoix[5]);
                ui->voix7->setText("Voix : " + listeVoix[6]);
                connect(socket, &QTcpSocket::readyRead, this, &MainWindow::raffraichir);

            }
        }

    }
    else
    {
        QMessageBox::warning(this, "Erreur", "Non connecté au serveur !");
    }

}


void MainWindow::onDisconnected()
{
    QMessageBox::information(this, "Deconnexion", "Deconnecte du serveur !");
}


void MainWindow::on_buttonVote_clicked()
{
    // initialisation du group de boutton

    group = new QButtonGroup(this);

    group->addButton(ui->C1, 1);
    group->addButton(ui->C2, 2);
    group->addButton(ui->C3, 3);
    group->addButton(ui->C4, 4);
    group->addButton(ui->C5, 5);
    group->addButton(ui->C6, 6);
    group->addButton(ui->C7, 7);


    // Récupérer le bouton coché

    choix = group->checkedId();

    if(choix < 0)
    {
        QMessageBox::information(this,"Vote Enregistrer","Bulletin vide ! Merci pour votre confiance");
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        socket->write(QString::number(choix).toUtf8());
        socket->flush();

        if (socket->waitForReadyRead(20000))
        {
            data = socket->readAll();
            message = QString::fromUtf8(data).trimmed();
        }
        if(message == "Vote reussi")
        {
            QMessageBox::information(this,"Vote Enregistrer","Vote du candidat N°" + QString::number(choix) + " Reussi. Merci pour votre confiance");
            ui->idcardEdit->setText("");
            ui->nomEdit->setText("");
            ui->prenomEdit->setText("");
            ui->stackedWidget->setCurrentIndex(0);


        }
        else
        {
            QMessageBox::warning(this,"Erreur d'enregistrement de vote","Veillez vous reconnectez");
        }

    }
}

//Slot exécuté lorsque l'administrateur clique sur déconnexion

void MainWindow::on_buttonDeconnexion_clicked()
{
    QString message = "exit";
    socket->write(message.toUtf8());
    socket->flush();
    ui->idcardEdit->setText("");
    ui->nomEdit->setText("");
    ui->prenomEdit->setText("");
    ui->stackedWidget->setCurrentIndex(0);

    //Deconnecter le signal

    disconnect(socket, &QTcpSocket::readyRead, this, &MainWindow::raffraichir);
}

void MainWindow::raffraichir()
{
    QByteArray newVote;
    QString allVote;
    newVote = socket->readAll();
    allVote = QString::fromUtf8(newVote);
    QStringList listeVoix = allVote.split(";");
    ui->voix1->setText("Voix : " + listeVoix[0]);
    ui->voix2->setText("Voix : " + listeVoix[1]);
    ui->voix3->setText("Voix : " + listeVoix[2]);
    ui->voix4->setText("Voix : " + listeVoix[3]);
    ui->voix5->setText("Voix : " + listeVoix[4]);
    ui->voix6->setText("Voix : " + listeVoix[5]);
    ui->voix7->setText("Voix : " + listeVoix[6]);

}

