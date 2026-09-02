#include <stdio.h>

/*
** EXERCICE : Doubler une valeur
**
** CONSIGNE :
**
** Créer une fonction :
**
**     void double_value(int *n)
**
** Cette fonction doit doubler la valeur reçue
** grâce au pointeur.
**
** Dans main(), déclarer :
**
**     int x = 25;
**
** Puis appeler la fonction double_value() en lui
** transmettant l'adresse de x.
**
** Après l'appel de la fonction, afficher la valeur de x.
**
** RÉSULTAT ATTENDU :
**
**     x = 50
**
** À TRAVAILLER :
**
** - fonctions
** - paramètres
** - pointeurs
** - opérateur &
** - opérateur *
** - modification d'une variable dans une fonction
**
** ⚠️ CONTRAINTE :
**
** La fonction doit modifier x à travers le pointeur.
**
** Tu ne dois pas faire directement dans main() :
**
**     x = 50;
**
** OBJECTIF FINAL :
**
** Comprendre comment utiliser un pointeur dans une
** fonction pour modifier la valeur d'une variable.
**
** QUESTION À TE POSER :
**
** Si n contient l'adresse de x, comment peux-tu
** accéder à la valeur de x pour la multiplier par 2 ?
*/

void double_value(int *n) {

    *n = *n* 2;
}
int main () {
    int x = 25;

    double_value(&x);

    printf("x = %d\n", x);

    return 0;
};
