#include <iostream>
#include <sqlite3.h>
#include <sstream>
#include <vector>
#include <cstring>
#include <arpa/inet.h>
#include <unistd.h>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <algorithm>
#include "header1.h"
#include "header2.h"

using namespace std;

mutex Mutex;

//Pour la gestion de raffraichissement de la page Admin

condition_variable cv;
vector <string> bufferVote;
string voteString = "";
bool attente_active = false;
chrono::time_point<chrono::steady_clock> temps_debut_attente;
int timer = 2000;                                               // timer(en ms) permet de contrôler l'attente du serveur avant de raffraichir la page adminitrateur

//Conserver l'adresse des admin afin de recharger leur page

vector <int> bufferAddressAdmin;
vector<thread::id> bufferIdAdmin;

void electeur_fonction(int electeur_socket, string idElecteur, string nom, string prenom, string idBureau)
{

    char buffer[2024] = {0};
    ssize_t bytes_received;

    //ZONE CRITIQUE : Le serveur doit accéder au base de donnée pour vérifier les informations sur l'electeur
        
        int verification;   

        {
            lock_guard<mutex> lock(Mutex);

            verification = verificationElecteur(idElecteur,nom,prenom,idBureau);
            
        }
        
        /*Déconnecter l'utilisateur s'il n'est pas dans la base de donnée 
        ou s'il a deja voté et Continuer si tout est correcte
        */

        if(verification == 0 || verification == 2){

            string sms = "Non inscrit";

            cout << sms << endl;

            send(electeur_socket,sms.c_str(),sms.size(),0);
            client_fonction(electeur_socket);
        }
        else if(verification == 3)
        {

        string sms = "Deja vote";

        cout << sms << endl;

        send(electeur_socket,sms.c_str(),sms.size(),0);
        client_fonction(electeur_socket);

        }
        else if(verification == 1)
        {

        //Choix du candidat

        string sms = "Autorise a vote";

        cout << sms << endl;

        send(electeur_socket,sms.c_str(),sms.size(),0);

        //Reception du vote buffer va contenir id du candidat qu'on souhaite voté

        bytes_received = recv(electeur_socket,buffer,sizeof(buffer),0);
        buffer[bytes_received] = '\0';

        if(bytes_received <= 0){
            close(electeur_socket);
            cpt++;
            return;
        }

        //ZONE CRITIQUE : Enregistrement du vote et deconnexion
       
        int cfm;

        {
            lock_guard<mutex> lock(Mutex);

            cfm  = executionVote(idElecteur,buffer);

        }

        if(cfm == 1){
            string sms = "Vote reussi";
            send(electeur_socket,sms.c_str(),sms.size(),0);
            demande_recharge();
            client_fonction(electeur_socket);         
        }
        else
        {
            string sms = "Vote non reussi";
            send(electeur_socket,sms.c_str(),sms.size(),0);
            client_fonction(electeur_socket);
        }

        }
}

void demande_recharge()
{
    unique_lock<mutex> lock(Mutex);

    if(!attente_active)
    {
        attente_active = true;
        temps_debut_attente = chrono::steady_clock::now();

        lock.unlock();
        this_thread::sleep_for(chrono::milliseconds(timer));
        lock.lock();

        recharge_admin();
        attente_active = false;
        cv.notify_all();

    }
    else
    {
        cv.wait(lock,[&]{ return !attente_active; });
    }
}

void recharge_admin()
{
    string sms;

    //Interroger en Lecture pas besoin de mutex

    sms = interrogerBD();

    // Envoie des voix des électeur sous la forme voix1;...voixn;

    for(auto admin_socket : bufferAddressAdmin)
    {
        send(admin_socket,sms.c_str(),sms.size(),0);
    }

}

void admin_fonction(int admin_socket,string idAdmin, string nom, string prenom)
{
    char buffer[2024] = {0};
    ssize_t bytes_received;

    int verification;    
        {    
            lock_guard<mutex> lock(Mutex);

            verification = verificationAdministrateur(idAdmin,nom,prenom);
    
        }
        
        cout << "Verification " << verification << endl;

        /*Déconnecter l'utilisateur s'il n'est pas dans la base de donnée 
        ou s'il a deja voté et Continuer si tout est correcte
        */

        if(verification == 0){

            string sms = "Non inscrit";
            send(admin_socket,sms.c_str(),sms.size(),0);
            client_fonction(admin_socket);
        }
        else if(verification == 1)
        {

        //Ajout de l'adresse de l'admin dans le buffer des adresses admin 
        // afin de les envoyer le rafraichissement en cas de vote 

        bufferAddressAdmin.push_back(admin_socket);
        bufferIdAdmin.push_back(this_thread::get_id());

        string sms;

        //Interroger en Lecture pas besoin de mutex

        sms = interrogerBD();

        // Envoie des voix des électeur sous la forme voix1;...voixn;

        send(admin_socket,sms.c_str(),sms.size(),0);

        memset(buffer, 0, sizeof(buffer));
    
        //Attend un signal pour déconnecter l'Administrateur

        bytes_received = recv(admin_socket,buffer,sizeof(buffer),0);
        
        if(bytes_received <= 0){
            close(admin_socket);
            cpt++;
            return;
        }
        
        int i = 0;

        for(auto id : bufferIdAdmin)
        {

            if(id == this_thread::get_id())
            {
                bufferAddressAdmin.erase(bufferAddressAdmin.begin() + i);
                bufferIdAdmin.erase(bufferIdAdmin.begin() + i);
                break;
            }
            i++;
        }

        client_fonction(admin_socket);

        }
}

void client_fonction(int client_socket)
{
    
    cout << "Debut d'échange" << endl;

    //Utiliser pour recevoir et envoyer des messages aux client

    char buffer[2024] = {0};
    ssize_t bytes_received;
    

    memset(buffer, 0, sizeof(buffer));
    bytes_received = read(client_socket,buffer,sizeof(buffer)-1);

    cout << buffer << endl;

    
    if(bytes_received <= 0){
        close(client_socket);
        cpt++;
        return;
    }

    string data(buffer);

    //Récupération des informations sur le client

    string idClient;
    string nom;
    string prenom;
    string idBureau;


    vector <string> info_recu;  //Tableau de stockage des information recu
    string info;                // Variable qui va contenir chaque information et le déplacé dans le tableau
    stringstream ss(data);
    
    // Détachement des informations de vérification de connexion

    while(getline(ss, info,';')) {info_recu.push_back(info);}

    // Stocker ces information dans des variables
  
    idClient = info_recu[0];
    nom = info_recu[1];
    prenom = info_recu[2];
    idBureau = info_recu[3];

    cout << info_recu[0] << endl;
    cout << info_recu[1] << endl;
    cout << info_recu[2] << endl;
    cout << info_recu[3] << endl;

    if(idClient[0] == 'E')
    
    {
        electeur_fonction(client_socket,idClient,nom,prenom,idBureau);
    }

    else if(idClient[0] == 'A')

    {
        admin_fonction(client_socket,idClient,nom,prenom);

    }
    else
    {
        cout << "Matricule incorrecte" << endl;
        client_fonction(client_socket);

    }

}