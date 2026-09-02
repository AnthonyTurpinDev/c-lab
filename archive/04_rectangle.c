#include <stdio.h>

/*
** EXERCICE : Aire d'un rectangle
**
** CONSIGNE :
**
** Déclarer deux variables :
**
** - longueur contenant la valeur 10 ;
** - largeur contenant la valeur 5.
**
** Calculer l'aire du rectangle et stocker le résultat
** dans une variable.
**
** Puis afficher :
**
** Longueur : 10
** Largeur : 5
** Aire : 50
**
** FORMULE :
**
** Aire = longueur × largeur
**
** À TRAVAILLER :
**
** - variables
** - multiplication *
** - calcul
** - stockage d'un résultat
** - printf()
**
** CONTRAINTES :
**
** - Le résultat doit être calculé à partir de longueur
**   et largeur.
** - Ne pas écrire directement 50 comme résultat.
** - Afficher les trois valeurs.
**
** OBJECTIF FINAL :
**
** Comprendre comment utiliser des variables dans un calcul
** et afficher le résultat obtenu.
*/

int main () {

    int longeur = 10;
    int largeur = 5;
    int air = 10 * 5;

    printf("Longeur :%d\n", longeur);
    printf("largeur :%d\n", largeur);
    printf("air :%d\n", air);

    return 0; 
};
