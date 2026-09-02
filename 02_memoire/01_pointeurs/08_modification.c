#include <stdio.h>

/*
** EXERCICE : Modifier plusieurs fois
**
** CONSIGNE :
**
** Déclarer :
**
**     int x = 10;
**     int *p = &x;
**
** Puis, en utilisant UNIQUEMENT le pointeur p,
** modifier successivement la valeur de x :
**
**     10 → 20
**     20 → 50
**     50 → 100
**     100 → 0
**
** Après chaque modification, afficher la valeur de x.
**
** Le programme doit donc afficher successivement :
**
**     10
**     20
**     50
**     100
**     0
**
** ⚠️ CONTRAINTE IMPORTANTE :
**
** Toutes les modifications doivent être faites
** avec le pointeur p.
**
** Tu ne dois PAS modifier directement x après
** sa déclaration.
**
** À TRAVAILLER :
**
** - pointeur
** - opérateur *
** - modification via un pointeur
** - printf()
** - suivre l'évolution d'une valeur en mémoire
**
** OBJECTIF FINAL :
**
** Comprendre qu'un même pointeur peut être utilisé
** plusieurs fois pour modifier la même variable.
**
** QUESTION À TE POSER :
**
** Pourquoi p continue-t-il à modifier x après
** plusieurs changements de valeur ?
*/

int main () {

     int x = 10;
     int *p = &x;

     *p = 20;
     printf("%d\n", x);

     *p = 50;
     printf("%d\n", x);

     *p = 100;
     printf("%d\n", x);

     *p = 0;
     printf("%d\n", x);



};