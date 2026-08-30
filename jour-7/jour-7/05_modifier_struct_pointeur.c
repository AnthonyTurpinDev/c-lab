/*
** EXERCICE : Modifier une structure avec un pointeur
**
** Utiliser une structure personne :
**
**     struct personne {
**         char *nom;
**         int age;
**     };
**
** Écrire une fonction qui reçoit un pointeur vers une personne
** et incrémente son âge de 1.
**
** PROTOTYPE POSSIBLE :
**
** void anniversaire(struct personne *p);
**
** EXEMPLE :
**
** Avant :
** Alice, 20 ans
**
** Après :
** Alice, 21 ans
**
** CONTRAINTES :
**
** - La fonction doit recevoir un pointeur vers la structure.
** - Modifier directement la structure originale.
** - Utiliser l'opérateur -> pour accéder aux membres.
** - La fonction doit retourner void.
** - Tester la fonction dans main().
**
** IMPORTANT :
**
** Comprendre la différence entre :
**
**     personne.age
**
** et :
**
**     p->age
**
** OBJECTIF :
**
** Comprendre comment modifier une structure directement
** grâce à un pointeur.
**
** BONUS :
**
** - Modifier plusieurs champs de la structure.
** - Créer une fonction permettant de modifier le nom.
*/