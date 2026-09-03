/*
** EXERCICE : Structure Etudiant
**
** OBJECTIF :
**
** Apprendre à créer une structure contenant plusieurs
** types de données différents :
**
** - chaîne de caractères
** - entier
** - nombre décimal
**
** CONSIGNE :
**
** 1. Créer une structure appelée `Etudiant` contenant :
**
**    - nom : tableau de 50 caractères
**    - age : entier
**    - moyenne : float
**
** 2. Dans `main`, créer une variable de type
**    `struct Etudiant`.
**
** 3. Donner les informations suivantes à l'étudiant :
**
**    Nom : Anthony
**    Age : 20
**    Moyenne : 15.5
**
** 4. Afficher toutes les informations de l'étudiant.
**
** AFFICHAGE ATTENDU :
**
**    Nom : Anthony
**    Age : 20
**    Moyenne : 15.50
**
** CONTRAINTES :
**
** - Utiliser `struct Etudiant`.
** - Utiliser l'opérateur `.` pour accéder aux champs.
** - Utiliser `printf`.
** - Utiliser le bon format pour chaque type :
**
**      char[]  → %s
**      int     → %d
**      float   → %f
**
** - Ne pas utiliser de pointeur.
** - Ne pas utiliser malloc.
**
** QUESTIONS À TE POSER :
**
** 1. Combien de champs possède la structure ?
**
** 2. Quel est le type de chaque champ ?
**
** 3. Comment accéder au nom ?
**
**      etudiant.nom
**
** 4. Comment accéder à l'âge ?
**
**      etudiant.age
**
** 5. Comment accéder à la moyenne ?
**
**      etudiant.moyenne
**
** 6. Pourquoi utilise-t-on `%s` pour le nom,
**    `%d` pour l'âge et `%f` pour la moyenne ?
**
** BONUS :
**
** Afficher la moyenne avec exactement 2 chiffres après
** la virgule.
**
** Exemple :
**
**      Moyenne : 15.50
**
** BONUS 2 :
**
** Modifier la moyenne après sa création puis afficher
** l'ancienne et la nouvelle moyenne.
**
** RAPPEL :
**
** Une structure peut contenir plusieurs types différents :
**
**    struct Etudiant
**          │
**          ├── nom       → char[]
**          ├── age       → int
**          └── moyenne   → float
**
** Pour accéder à un champ :
**
**      nom_de_variable.nom_du_champ
**
** Exemple :
**
**      etudiant.age
**      etudiant.moyenne
*/