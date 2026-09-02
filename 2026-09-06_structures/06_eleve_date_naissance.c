/*
** EXERCICE : Structure imbriquée
**
** Créer une structure date :
**
**     struct date {
**         int jour;
**         int mois;
**         int annee;
**     };
**
** Puis créer une structure eleve contenant :
**
** - un nom ;
** - une date de naissance.
**
** Exemple :
**
**     struct eleve {
**         char *nom;
**         struct date naissance;
**     };
**
** Le programme doit calculer et afficher l'âge d'un élève.
**
** EXEMPLE :
**
** Élève :
** Alice
**
** Date de naissance :
** 15/04/2005
**
** Date actuelle :
** 30/08/2026
**
** Résultat :
** Alice a 21 ans.
**
** CONTRAINTES :
**
** - Utiliser deux structures.
** - Imbriquer struct date dans struct eleve.
** - Créer un élève.
** - Stocker sa date de naissance.
** - Fournir une date actuelle au programme.
** - Calculer l'âge en tenant compte du mois et du jour.
** - Afficher le résultat.
**
** IMPORTANT :
**
** Ne pas simplement faire :
**
**     age = annee_actuelle - annee_naissance;
**
** Il faut vérifier si l'anniversaire a déjà eu lieu
** durant l'année actuelle.
**
** BONUS :
**
** - Créer une fonction calcul_age().
** - Créer une fonction afficher_eleve().
** - Utiliser un pointeur vers struct eleve.
**
** OBJECTIF :
**
** Comprendre les structures imbriquées et apprendre à
** organiser des données complexes avec plusieurs structures.
*/