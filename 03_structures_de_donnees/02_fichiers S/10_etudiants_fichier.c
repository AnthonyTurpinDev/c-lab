/*
** EXERCICE : Enregistrer des étudiants dans un fichier
**
** OBJECTIF :
**
** Combiner les structures et la manipulation de fichiers.
**
** Tu vas devoir :
**
** - créer une structure Etudiant ;
** - créer plusieurs étudiants ;
** - écrire leurs informations dans un fichier ;
** - fermer le fichier ;
** - rouvrir le fichier en lecture ;
** - lire les étudiants ;
** - afficher leurs informations dans le terminal.
**
** ---------------------------------------------------------
**
** STRUCTURE À UTILISER :
**
**      struct Etudiant {
**          char nom[50];
**          int age;
**          float moyenne;
**      };
**
** ---------------------------------------------------------
**
** ÉTAPE 1 — CRÉER LES ÉTUDIANTS
**
** Dans main(), créer plusieurs étudiants.
**
** Exemple :
**
**      Anthony 20 14.5
**      Lucas   19 12.8
**      Thomas  21 15.2
**
** Tu peux utiliser un tableau de structures :
**
**      struct Etudiant etudiants[3];
**
** ---------------------------------------------------------
**
** ÉTAPE 2 — OUVRIR LE FICHIER
**
** Créer :
**
**      etudiants.txt
**
** Ouvrir le fichier en mode écriture "w".
**
** Vérifier que fopen() a réussi.
**
** ---------------------------------------------------------
**
** ÉTAPE 3 — ÉCRIRE LES ÉTUDIANTS
**
** Utiliser fprintf() pour enregistrer chaque étudiant.
**
** Format attendu dans le fichier :
**
**      Anthony 20 14.5
**      Lucas 19 12.8
**      Thomas 21 15.2
**
** Chaque étudiant doit être écrit sur une ligne différente.
**
** ---------------------------------------------------------
**
** ÉTAPE 4 — FERMER LE FICHIER
**
** Une fois tous les étudiants enregistrés :
**
**      fclose()
**
** ---------------------------------------------------------
**
** ÉTAPE 5 — ROUVRIR LE FICHIER
**
** Ouvrir "etudiants.txt" en mode lecture "r".
**
** Vérifier une nouvelle fois que fopen() a réussi.
**
** ---------------------------------------------------------
**
** ÉTAPE 6 — LIRE LES ÉTUDIANTS
**
** Utiliser une boucle avec fscanf() pour récupérer :
**
**      nom
**      age
**      moyenne
**
** dans une structure Etudiant.
**
** ---------------------------------------------------------
**
** ÉTAPE 7 — AFFICHER LES ÉTUDIANTS
**
** Pour chaque étudiant lu, afficher par exemple :
**
**      Nom : Anthony
**      Age : 20
**      Moyenne : 14.5
**
** Puis passer à l'étudiant suivant.
**
** ---------------------------------------------------------
**
** ÉTAPE 8 — FERMER LE FICHIER
**
** Après avoir terminé la lecture :
**
**      fclose()
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser une struct Etudiant.
** - Utiliser un tableau de structures.
** - Utiliser fopen().
** - Utiliser fprintf() pour écrire.
** - Utiliser fscanf() pour lire.
** - Utiliser une boucle.
** - Utiliser fclose().
** - Vérifier le retour de fopen().
** - Un étudiant par ligne dans le fichier.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Comment accéder au nom d'un étudiant ?
**
**      etudiants[i].nom
**
** 2. Comment accéder à son âge ?
**
**      etudiants[i].age
**
** 3. Comment accéder à sa moyenne ?
**
**      etudiants[i].moyenne
**
** 4. Quel format utiliser avec fprintf() pour :
**
**      char
**      int
**      float
**
** 5. Pourquoi fscanf() a-t-elle besoin de l'adresse
**    des variables ?
**
** 6. Pourquoi utiliser une boucle pour lire le fichier ?
**
** 7. Comment savoir quand il n'y a plus d'étudiant
**    à lire ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**        STRUCTURES
**             ↓
**     struct Etudiant
**             ↓
**      tableau d'étudiants
**             ↓
**          fopen("w")
**             ↓
**         fprintf()
**             ↓
**       etudiants.txt
**             ↓
**          fclose()
**
**             ↓
**
**          fopen("r")
**             ↓
**         fscanf()
**             ↓
**      struct Etudiant
**             ↓
**          printf()
**             ↓
**         fscanf()
**             ↓
**            ...
**             ↓
**          fclose()
**
** ---------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Tu dois être capable de comprendre ce chemin :
**
**      STRUCTURE
**         ↓
**      FICHIER
**         ↓
**      ÉCRITURE
**         ↓
**      LECTURE
**         ↓
**      STRUCTURE
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Demande à l'utilisateur combien d'étudiants il souhaite
** enregistrer.
**
** Puis remplis le tableau avec ses informations.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Après avoir relu le fichier, affiche uniquement les
** étudiants ayant une moyenne supérieure ou égale à 10.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Trouve et affiche l'étudiant ayant la meilleure moyenne.
**
** Exemple :
**
**      Meilleur étudiant : Thomas
**      Moyenne : 15.2
*/