#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QButtonGroup>
#include <QRadioButton>
#include <QStringList>
#include <QThread>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void onConnected();                // Signal quand la connexion est établie
    void onDisconnected();             // Signal quand le serveur se ferme
    void onErrorOccurred(QAbstractSocket::SocketError socketError);


    void on_ConfirmButton_clicked();

    void on_buttonVote_clicked();

    void on_buttonDeconnexion_clicked();


private:
    void raffraichir();
    Ui::MainWindow *ui;
    QTcpSocket *socket;                       // Objet pour la communication réseau
    QString message;
    QByteArray data;
    QButtonGroup* group;
    int choix;                               //Afin de recuperer le choix de l'electeur
    QThread *monThread = nullptr;

};

#endif // MAINWINDOW_H
