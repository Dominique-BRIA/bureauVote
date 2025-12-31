// Creation du serveur

#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <arpa/inet.h>
#include <unistd.h>
#include <thread>
#include "header1.h"


using namespace std;
vector <thread> threads;
int server_socket;
int client_socket;

int cpt = 3;
/*
void quit(){
    string message;
    while(true){
        getline(cin,message);
        if(message == "quit"){
            close(server_socket);
            close(client_socket);
            cout << "FIN CONNEXION" << endl;
            break;
        }else{
            cout << "Commande incorrecte" << endl;
        }
    }
}
*/
int main(){

    server_socket = socket(AF_INET,SOCK_STREAM,0);
    
    sockaddr_in server_addr{};
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    bind(server_socket,(sockaddr*)&server_addr,sizeof(server_addr));

    listen(server_socket,2);

    cout << "Serveur en écoute " << endl;

    while(true){
        sockaddr_in client_addr{};
        socklen_t addr_len = sizeof(client_addr);
        
        client_socket = accept(server_socket,(sockaddr*)&client_addr, &addr_len);
    
        if (cpt <= 0){
            string stopMessage = "exit;";
            send(client_socket,stopMessage.c_str(),stopMessage.size(),0);
            close(client_socket);
        }else{

            cout << "Connecte au serveur" << endl;

            cpt--;
            string confirmationSMS = "Connecte au serveur";
            send(client_socket,confirmationSMS.c_str(),confirmationSMS.size(),0);
            threads.emplace_back(client_fonction,client_socket);
            threads.back().detach();
        }
    }
    
}
