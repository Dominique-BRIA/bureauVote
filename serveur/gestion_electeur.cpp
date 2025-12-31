#include <iostream>
#include <sqlite3.h>
#include <sstream>
#include <vector>
#include <cstring>
#include <arpa/inet.h>
#include <unistd.h>
#include <thread>
#include <mutex>
#include <algorithm>
#include "test.cpp"

mutex Mutex;

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
            demande_recharge(buffer);
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