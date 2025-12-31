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
Copier le code
Bash
sudo apt update && sudo apt upgrade
Installer les outils de base :
Copier le code
Bash
sudo apt install build-essential cmake git
🖥️ Installation du client Qt
Copier le code
Bash
sudo apt install qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools
Modules Qt utilisés côté client :
QtCore
QtGui
QtWidgets
QtNetwork
🧠 Installation du serveur C++
🔹 MySQL Server
Copier le code
Bash
sudo apt install mysql-server
Copier le code
Bash
sudo systemctl start mysql
🔹 Librairies MySQL pour C++
Choisis une seule méthode :
✅ Option recommandée — MySQL Connector/C++
Copier le code
Bash
sudo apt install libmysqlcppconn-dev
Utilisé par le serveur C++ pour se connecter à MySQL.
🔹 Configuration de la base de donnée
👉🏾cloner le projet
Copier le code
Bash
git clone https://github.com/votre-utilisateur/bureau-de-vote.git
cd bureau-de-vote
⚙️ Compilation et exécution
🔹 Compilation du serveur
Copier le code
Bash
cd server
mkdir build
cd build
cmake ..
make
./server
🔹 Compilation du client Qt
Copier le code
Bash
cd client
mkdir build
cd build
cmake ..
make
./client
Ou via Qt Creator.
🔌 Communication client–serveur

✅ Vérification
Le serveur démarre sans erreur
MySQL fonctionne
Le client se connecte au serveur
Les requêtes passent correctement
