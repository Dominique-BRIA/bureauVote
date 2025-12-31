# bureauVote
Il s'agit d'un projet scolaire individuel de développement d'un bureau de vote numérique permettant aux électeurs de votés et au administrateurs de voir en temps réel les scores de chaque candidat.

🎯 Objectifs du projet

▪︎ Explorer la communication interprocessus via les sockets
▪︎ Explorer la synchronisation des threads (mutex, condition variable...)
▪︎ Etc...

⚙️ Fonctionnalités principales

▪︎ 🗳️ Système de vote (simulation ou réel selon le contexte)
▪︎ 📊 Comptage automatique des voix
▪︎ 📈 Affichage des résultats
▪︎ 🔐 Sécurisation basique des accès
🛠️ Technologies utilisées
Langage : C++ (serveur 100% C++ pur)
Framework : Qt (Application Client)

🚀 Installation (Linux)

🧩 Architecture du projet

🖥️ Client : Application Qt C++ (interface utilisateur)
🧠 Serveur : Application C++ (connexion MySQL, logique métier)
🗄️ Base de données : MySQL
🔌 Communication : Socket TCP

🛠️ Prérequis système

  - Mise à jour du syteme linux
    
Copier le Bash

sudo apt update && sudo apt upgrade

Installer les outils de base :

Copier le code Bash

sudo apt install build-essential cmake git

🖥️ Installation du client Qt

Copier le code Bash

sudo apt install qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools

Modules Qt utilisés côté client :

QtCore
QtGui
QtWidgets
QtNetwork

🌐 Installation d’Apache2

sudo apt install apache2

Vérification :

http://localhost

🗄️ Installation de MariaDB

sudo apt install mariadb-server mariadb-client
sudo mysql_secure_installation

🔧 Librairies MariaDB pour le serveur C++

sudo apt install libmariadb-dev

🗃️ Configuration de la base de données

sudo mariadb

👉🏾 Importez la base de donnée Election sur votre SGBD : Dans cette base de donnée il y'a des enregistrements d'un electeur (matricule : E0001; Nom : BRIA; Prenom : Dominique; idBureau : 1), des candidats et d'un administrateur(matricule : A0001; Nom : BRIA; Prenom : Dominique; idBureau : 1) pour le test dont vous pouviez modifier à votre guise tout en respectant la structure des matricules (commence par A pour les Administrateurs et par E pour les Electeurs)

👉🏾 Ouvrir le fichier gestion_bd.cpp situer dans le dossier Serveur, afin de modifier user_name et password par les information de votre SGBD de votre base de donnée

👉🏾 Cloner le projet

Copier le code Bash

git clone https://github.com/Dominique-BRIA/bureauVote.git
cd bureauVote


⚙️ Compilation et exécution

🔹 Compilation du serveur
   
Copier le code Bash

cd serveur
g++ serveur_version3.cpp gestion_utilisateur.cpp gestion_bd.cpp -o serveur -lmariadb
./server

🔹 Compilation du client Qt

- Ouvrir le projet dans Qt Creator et Run
- Rempli les informations d'un Electeur(matricule : E0001; Nom : BRIA; Prenom : Dominique; idBureau : 1) ou d'un administrateur (matricule : A0001; Nom : BRIA; Prenom : Dominique; idBureau : 1)

✅ Vérification
Le serveur démarre sans erreur
MySQL fonctionne
Le client se connecte au serveur
Les requêtes passent correctement

Attention : Lancer d'abord le serveur avant de lancer de l'application client, n'oubliez pas d'ouvrir le fichier gestion_bd.cpp situer dans le dossier serveur, afin de modifier user_name et password de votre SGBD
