/*
** EXERCICE : Structure Personne
**
** OBJECTIF :
**
** Découvrir les structures en C et apprendre à :
** - déclarer une struct
** - créer une variable de type struct
** - remplir ses champs
** - accéder aux champs avec l'opérateur `.`
** - afficher les informations
**
** CONSIGNE :
**
** 1. Créer une structure appelée `Personne` contenant :
**
**    - un nom : tableau de 50 caractères
**    - un âge : entier
**
** 2. Dans la fonction `main`, créer une variable
**    de type `struct Personne`.
**
** 3. Donner à cette personne :
**
**    nom = "Anthony"
**    age = 20
**
** 4. Afficher les informations avec `printf`.
**
** AFFICHAGE ATTENDU :
**
**    Nom : Anthony
**    Age : 20
**
** CONTRAINTES :
**
** - Utiliser une `struct`.
** - Utiliser l'opérateur `.` pour accéder aux champs.
** - Ne pas utiliser de pointeur pour cet exercice.
** - Ne pas utiliser de malloc.
**
** QUESTIONS À TE POSER :
**
** 1. Comment déclarer une structure ?
**
** 2. Comment créer une variable `Personne` ?
**
** 3. Comment accéder au champ `nom` ?
**
** 4. Comment accéder au champ `age` ?
**
** 5. Quelle est la différence entre :
**
**       personne.nom
**
**    et
**
**       personne.age
**
** BONUS :
**
** Créer une deuxième personne et afficher ses informations.
**
** Exemple :
**
**    Nom : Alice
**    Age : 22
**
** RAPPEL :
**
** Une structure permet de regrouper plusieurs informations
** différentes dans une seule variable.
**
**    Personne
**       |
**       +---- nom
**       |
**       +---- age
*/