#include <stdio.h>

/*
** EXERCICE : Modifier une variable avec une fonction
**
** CONSIGNE :
**
** Créer une fonction :
**
**     void modify(int *n)
**
** Cette fonction doit modifier la valeur reçue
** afin de transformer :
**
**     10 → 100
**
** Dans la fonction main(), déclarer :
**
**     int x = 10;
**
** Puis appeler la fonction modify() en lui transmettant
** l'adresse de x.
**
** Après l'appel de la fonction, afficher la valeur de x.
**
** RÉSULTAT ATTENDU :
**
**     x = 100
**
** À TRAVAILLER :
**
** - fonctions
** - paramètres
** - pointeurs
** - adresse d'une variable
** - modification d'une variable dans une fonction
**
** ⚠️ POINT IMPORTANT :
**
** La fonction doit recevoir un pointeur :
**
**     void modify(int *n)
**
** À l'intérieur de la fonction, tu dois utiliser
** le pointeur pour modifier la variable.
**
** Dans main(), tu dois transmettre l'adresse de x.
**
** OBJECTIF FINAL :
**
** Comprendre comment un pointeur permet à une fonction
** de modifier directement une variable située dans main().
**
** QUESTION À TE POSER :
**
** Pourquoi la fonction modify() peut-elle modifier x
** alors qu'elle ne reçoit pas directement la valeur de x ?
*/
void modify(int *n)
{
    *n = 100;
}

int main(void)
{
    int x = 10;

    modify(&x);

    printf("x = %d\n", x);

    return 0;
}