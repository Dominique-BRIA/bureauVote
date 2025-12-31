#ifndef HEADER2_H
#define HEADER2_H

#include <string>
using namespace std;

int incrementationVoix(string idCandidat);
int actualisationEtat(string idElecteur);
int executionVote(string idElecteur, string idCandidat);
string interrogerBD();
int verificationAdministrateur(string idAdministrateur, string Nom, string Prenom);
int verificationElecteur(string idElecteur, string Nom, string Prenom, string IdBureau);


#endif