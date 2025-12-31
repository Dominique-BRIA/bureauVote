#ifndef HEADER1_H
#define HEADER1_H

#include <string>
using namespace std;

extern int cpt;
void electeur_fonction(int electeur_socket, string idElecteur, string nom, string prenom, string idBureau);
void demande_recharge();
void recharge_admin();
void admin_fonction(int admin_socket,string idAdmin, string nom, string prenom);
void client_fonction(int client_socket);

#endif