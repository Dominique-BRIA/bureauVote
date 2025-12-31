#include <mysql/mysql.h>
#include <iostream>
#include <string>
#include <vector>
#include "header2.h"

using namespace std;

/* Configuration */

const char* user_name = "root";
const char* password = "555508";

MYSQL* conn;
MYSQL_ROW row;
MYSQL_RES* result;

int incrementationVoix(string idCandidat)
{
    conn = mysql_init(NULL);

   if(!mysql_real_connect(conn, "localhost", user_name, password,"Election",3306,NULL,0))
   {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      return 0;
   }
   

    string requete = "UPDATE Candidat SET Voix = Voix + 1  WHERE idCandidat = '" + idCandidat + "';";
   

   if(mysql_query(conn, requete.c_str()))
    {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      mysql_close(conn);
      return 0; 
    }

    mysql_close(conn);
    return 1;
}

// Permet de mettre l'etat de l'electeur à 1 après le vote (reussi)

int actualisationEtat(string idElecteur)
{
    conn = mysql_init(NULL);

    if(!mysql_real_connect(conn, "localhost", "root", "555508","Election",3306,NULL,0))
   {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      return 0;
   }

    string requete = "UPDATE Electeur SET Etat = 1  WHERE idElecteur = '" + idElecteur + "';";

    if(mysql_query(conn, requete.c_str()))
    {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      mysql_close(conn);
      return 0; 
    }

    mysql_close(conn);
    return 1;
}


int executionVote(string idElecteur, string idCandidat) {
    
    int retour = incrementationVoix(idCandidat);
    if(retour != 0)
    {
      actualisationEtat(idElecteur);
    }
    return retour;
}


string interrogerBD() {
    
    conn = mysql_init(NULL);

   if(!mysql_real_connect(conn, "localhost", "root", "555508","Election",3306,NULL,0))
   {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      return "0";
   }

    string requete = "SELECT * FROM Candidat";

    if(mysql_query(conn, requete.c_str()))
   {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      mysql_close(conn);
      return "0"; 
   }
    
   result = mysql_store_result(conn);

   //Tableau qui va contenir des voix de chaque électeur

   string voix = "";


   while((row = mysql_fetch_row(result)))
   {
      
      voix = voix + row[3] + ";";

   }
   
  //  cout << "Aucun resultat trouvé" << endl;
   

   mysql_free_result(result);
   mysql_close(conn);
   return voix;
}


// Fonction de vérification  Administrateur renvoie 1 si trouver sinon renvoi 0 et renvoi 2 si erreur



int verificationAdministrateur(string idAdministrateur, string Nom, string Prenom) {
    
    conn = mysql_init(NULL);

   if(!mysql_real_connect(conn, "localhost", "root", "555508","Election",3306,NULL,0))
   {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      return 2;
   }

    string requete = "SELECT * FROM Administrateur WHERE idAdministrateur = '" + idAdministrateur + "';";
    
    if(mysql_query(conn, requete.c_str()))
   {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      mysql_close(conn);
      return 2; 
   }

   result = mysql_store_result(conn);

    bool trouver = false;

   
    if(mysql_num_rows(result) == 0){

        //Aucun resultat trouver

        return 0;
    }
    else
    {
        while((row = mysql_fetch_row(result)))
        {
            if (idAdministrateur == row[0] && Nom == row[1] && Prenom == row[2]) 
            {
            trouver = true;
            return 1;
            }
        }
}

   mysql_free_result(result);
   mysql_close(conn);
   return trouver ? 1 : 0;
}


// Fonction de vérification  Electeur renvoie 1 si trouver 0 si non trouver et renvoi 2 si erreur 3 si deja voté


int verificationElecteur(string idElecteur, string Nom, string Prenom, string IdBureau) {
    
    conn = mysql_init(NULL);

   if(!mysql_real_connect(conn, "localhost", "root", "555508","Election",3306,NULL,0))
   {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      return 2;
   }

    string requete = "SELECT * FROM Electeur WHERE idElecteur = '" + idElecteur + "';";
    
    if(mysql_query(conn, requete.c_str()))
   {
      cerr << "Erreur : " << mysql_error(conn) << endl;
      mysql_close(conn);
      return 2; 
   }

   result = mysql_store_result(conn);

    int trouver = 0;


    while((row = mysql_fetch_row(result)))
   {
    if (idElecteur == string(row[0]) && Nom == string(row[1]) && Prenom == string(row[2]) && IdBureau == string(row[4]) && string(row[3]) == "0") {
        trouver = 1;
        return trouver;
    }
    if (idElecteur == string(row[0]) && Nom == string(row[1]) && Prenom == string(row[2]) && IdBureau == string(row[4]) && string(row[3]) == "1") {
      trouver = 3;
      return trouver;
   }

   }

   mysql_free_result(result);
   mysql_close(conn);
   return trouver;
}
