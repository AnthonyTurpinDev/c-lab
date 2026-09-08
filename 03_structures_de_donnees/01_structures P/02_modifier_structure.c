/*
** EXERCICE : Modifier une structure
**
** OBJECTIF :
**
** Apprendre à :
** - déclarer une structure
** - créer une variable de type struct
** - initialiser ses champs
** - accéder aux champs avec `.`
** - modifier les champs d'une structure
** - afficher les valeurs avant et après modification
**
** CONSIGNE :
**
** 1. Créer une structure `Personne` contenant :
**
**    - nom : tableau de 50 caractères
**    - age : entier
**
** 2. Dans `main`, créer une personne appelée `personne`.
**
** 3. Initialiser ses informations :
**
**    Nom : Alex
**    Age : 18
**
** 4. Afficher les informations de la personne AVANT
**    la modification.
**
** 5. Modifier son nom pour :
**
**    Anthony
**
** 6. Modifier son âge pour :
**
**    20
**
** 7. Afficher les informations APRÈS la modification.
**
** AFFICHAGE ATTENDU :
**
**    --- AVANT ---
**    Nom : Alex
**    Age : 18
**
**    --- APRES ---
**    Nom : Anthony
**    Age : 20
**
** CONTRAINTES :
**
** - Utiliser `struct Personne`.
** - Utiliser l'opérateur `.` pour accéder aux champs.
** - Modifier directement les champs de la structure.
** - Utiliser `printf` pour l'affichage.
** - Ne pas utiliser de pointeur.
** - Ne pas utiliser `malloc`.
**
** QUESTIONS À TE POSER :
**
** 1. Comment modifier l'âge ?
**
**    personne.age = ...
**
** 2. Comment modifier le nom ?
**
**    Attention : un tableau de caractères ne se modifie
**    pas avec `=`.
**
** 3. Pourquoi peut-on faire :
**
**    personne.age = 20;
**
**    mais pas simplement :
**
**    personne.nom = "Anthony";
**
**
** BONUS :
**
** Créer une deuxième personne et modifier également
** ses informations.
**
** BONUS 2 :
**
** Afficher uniquement les informations qui ont changé.
**
** RAPPEL :
**
** L'opérateur `.` permet d'accéder à un champ
** d'une structure :
**
**    personne.age
**    personne.nom
**
** Une structure regroupe plusieurs informations
** dans une seule variable.
*/