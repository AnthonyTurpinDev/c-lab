#include <stdio.h>

/*
** EXERCICE : Modifier avec un pointeur
**
** CONSIGNE :
**
** Déclarer une variable entière :
**
**     int x = 10;
**
** Puis créer un pointeur qui contient l'adresse
** mémoire de x.
**
** Ensuite, utiliser UNIQUEMENT le pointeur pour
** modifier la valeur de x et lui donner :
**
**     50
**
** À la fin du programme, x doit valoir :
**
**     x = 50
**
** À TRAVAILLER :
**
** - déclaration d'un pointeur
** - opérateur &
** - opérateur *
** - modification d'une variable via un pointeur
**
** ⚠️ CONTRAINTE IMPORTANTE :
**
** La modification de x doit se faire avec le pointeur.
**
** Tu dois utiliser :
**
**     *p = 50;
**
** et non directement :
**
**     x = 50;
**
** 🔥 POINT IMPORTANT :
**
** Comprendre pourquoi :
**
**     *p = 50;
**
** modifie directement x.
**
** RAPPEL :
**
** p contient l'adresse de x.
**
** *p permet d'accéder à la valeur située
** à cette adresse.
**
** OBJECTIF FINAL :
**
** Comprendre qu'en modifiant *p, tu modifies
** directement la variable x située à cette adresse.
**
** QUESTION À TE POSER :
**
** Si p contient l'adresse de x, que modifies-tu
** réellement lorsque tu écris *p = 50 ?
*/

int main () {

    int x = 10;
    int *p = x;
    int p = 50; 

    printf("x =: %p\n", p);

};