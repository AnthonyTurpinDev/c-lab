#include <stdio.h>

/*
** EXERCICE : Adresse et valeur
**
** CONSIGNE :
**
** Déclarer :
**
**     int x = 25;
**     int *p = &x;
**
** Puis afficher :
**
**     Valeur de x :
**     Adresse de x :
**     Valeur de p :
**     Adresse de p :
**     Valeur pointée par p :
**
** À TRAVAILLER :
**
** - opérateur &
** - opérateur *
** - pointeur
** - adresse d'une variable
** - adresse d'un pointeur
** - format %p
**
** ⚠️ POINT IMPORTANT :
**
** Tu dois comprendre la différence entre :
**
**     p
**
** et :
**
**     &p
**
** RAPPEL :
**
**     p
**
** contient l'adresse de x.
**
**     *p
**
** permet d'accéder à la valeur de x.
**
**     &p
**
** correspond à l'adresse mémoire du pointeur p lui-même.
**
** Tu dois donc distinguer :
**
**     x   → valeur de x
**     &x  → adresse de x
**     p   → adresse stockée dans p
**     &p  → adresse de p
**     *p  → valeur située à l'adresse contenue dans p
**
** ⚠️ IMPORTANT :
**
** Les adresses affichées peuvent être différentes
** à chaque exécution. C'est normal.
**
** OBJECTIF FINAL :
**
** Comprendre qu'un pointeur est lui-même une variable
** qui possède :
**
**     - une valeur
**     - une adresse mémoire
**
** QUESTION À TE POSER :
**
** Si p contient l'adresse de x, alors où se trouve
** le pointeur p lui-même en mémoire ?
**
** Comment obtenir cette adresse ?
*/

int main () {

    int x = 25;
    int *p = &x;

    printf("Valeur de x :%d\n", x);
    printf("Adresse de x :%p\n", (void*)&x);
    printf("Valeur de p :%p\n", (void*)p);
    printf("Adresse de p :%p\n", (void*)&p);
    printf("Valeur pointée par p :%d\n", *p);

    return 0;
};