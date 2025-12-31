-- Adminer 5.3.0 MariaDB 11.8.3-MariaDB-1+b1 from Debian dump

SET NAMES utf8;
SET time_zone = '+00:00';
SET foreign_key_checks = 0;
SET sql_mode = 'NO_AUTO_VALUE_ON_ZERO';

SET NAMES utf8mb4;

CREATE DATABASE `Election` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_uca1400_ai_ci */;
USE `Election`;

CREATE TABLE `Administrateur` (
  `idAdministrateur` varchar(255) NOT NULL,
  `Nom` varchar(255) NOT NULL,
  `Prenom` varchar(255) NOT NULL,
  PRIMARY KEY (`idAdministrateur`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_uca1400_ai_ci;

INSERT INTO `Administrateur` (`idAdministrateur`, `Nom`, `Prenom`) VALUES
('A0001',	'BRIA',	'DOMINIQUE');

CREATE TABLE `Candidat` (
  `idCandidat` varchar(255) NOT NULL,
  `Nom` varchar(255) NOT NULL,
  `Prenom` varchar(255) NOT NULL,
  `Voix` int(11) NOT NULL,
  PRIMARY KEY (`idCandidat`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_uca1400_ai_ci;

INSERT INTO `Candidat` (`idCandidat`, `Nom`, `Prenom`, `Voix`) VALUES
('1',	'BRIA',	'DOMINIQUE',	0),
('2',	'BOKALI',	'FABRICE',	0),
('3',	'ASSOUMOU',	'TEDDY',	0),
('4',	'AZAMBOU',	'EMERIC',	0),
('5',	'DADJI',	'MAEL',	0),
('6',	'BOUEGNE',	'JULIO',	0),
('7',	'PEREZ',	'PEREZ',	0);

CREATE TABLE `Electeur` (
  `idElecteur` varchar(255) NOT NULL,
  `Nom` varchar(255) NOT NULL,
  `Prenom` varchar(255) NOT NULL,
  `Etat` int(11) NOT NULL,
  `idBureau` int(11) NOT NULL,
  PRIMARY KEY (`idElecteur`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_uca1400_ai_ci;

INSERT INTO `Electeur` (`idElecteur`, `Nom`, `Prenom`, `Etat`, `idBureau`) VALUES
('E0001',	'BRIA',	'DOMINIQUE',	1,	1);

-- 2025-12-31 01:17:02 UTC
