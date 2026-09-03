/*
** EXERCICE : Tableau de structures
**
** OBJECTIF :
**
** Apprendre à :
** - créer une structure
** - créer un tableau de structures
** - remplir plusieurs structures
** - parcourir un tableau de structures avec une boucle
** - accéder aux champs avec l'opérateur `.`
**
** CONSIGNE :
**
** 1. Créer une structure `Etudiant` contenant :
**
**    - nom : tableau de 50 caractères
**    - age : entier
**    - moyenne : float
**
** 2. Dans `main`, créer un tableau contenant exactement
**    5 étudiants.
**
** 3. Donner des informations différentes à chaque étudiant.
**
**    Exemple :
**
**    Etudiant 1 :
**      Nom : Alex
**      Age : 18
**      Moyenne : 14.5
**
**    Etudiant 2 :
**      Nom : Lucas
**      Age : 19
**      Moyenne : 12.0
**
**    Etudiant 3 :
**      Nom : Emma
**      Age : 20
**      Moyenne : 16.5
**
**    Etudiant 4 :
**      Nom : Thomas
**      Age : 18
**      Moyenne : 11.5
**
**    Etudiant 5 :
**      Nom : Sarah
**      Age : 21
**      Moyenne : 15.0
**
** 4. Utiliser une boucle pour parcourir les 5 étudiants.
**
** 5. Afficher pour chaque étudiant :
**
**    - son numéro
**    - son nom
**    - son âge
**    - sa moyenne
**
** AFFICHAGE ATTENDU :
**
**    Etudiant 1 : Alex - 18 ans - 14.5
**    Etudiant 2 : Lucas - 19 ans - 12.0
**    Etudiant 3 : Emma - 20 ans - 16.5
**    Etudiant 4 : Thomas - 18 ans - 11.5
**    Etudiant 5 : Sarah - 21 ans - 15.0
**
** CONTRAINTES :
**
** - Utiliser `struct Etudiant`.
** - Créer un tableau de exactement 5 étudiants.
** - Utiliser une boucle pour l'affichage.
** - Utiliser l'opérateur `.` pour accéder aux champs.
** - Ne pas utiliser de pointeur.
** - Ne pas utiliser malloc.
**
** QUESTIONS À TE POSER :
**
** 1. Comment déclarer un tableau de structures ?
**
** 2. Comment accéder au premier étudiant ?
**
**      etudiants[0]
**
** 3. Comment accéder au nom du premier étudiant ?
**
**      etudiants[0].nom
**
** 4. Comment accéder à l'âge du deuxième étudiant ?
**
**      etudiants[1].age
**
** 5. Comment accéder à la moyenne de l'étudiant
**    actuellement parcouru par la boucle ?
**
** 6. Pourquoi utilise-t-on une boucle plutôt que
**    5 `printf` différents ?
**
** BONUS :
**
** Afficher uniquement les étudiants ayant une moyenne
** supérieure ou égale à 10.
**
** BONUS 2 :
**
** Compter le nombre d'étudiants ayant une moyenne
** supérieure ou égale à 10.
**
** BONUS 3 :
**
** Afficher l'étudiant ayant la meilleure moyenne.
**
** RAPPEL :
**
** Une structure représente UN étudiant :
**
**    Etudiant
**       │
**       ├── nom
**       ├── age
**       └── moyenne
**
** Un tableau de structures représente PLUSIEURS étudiants :
**
**    etudiants
**       │
**       ├── [0] → nom / age / moyenne
**       ├── [1] → nom / age / moyenne
**       ├── [2] → nom / age / moyenne
**       ├── [3] → nom / age / moyenne
**       └── [4] → nom / age / moyenne
**
** Pour accéder à un champ :
**
**    etudiants[i].nom
**    etudiants[i].age
**    etudiants[i].moyenne
**
** MENTAL MODEL :
**
**    tableau → choisit l'étudiant
**    .       → choisit son champ
**
**    etudiants[i].age
**              │  │
**              │  └── champ
**              └───── étudiant
*/