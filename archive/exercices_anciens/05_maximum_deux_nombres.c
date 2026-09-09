#include <stdio.h>

/*
** EXERCICE : Maximum de deux nombres
**
** Demander à l'utilisateur de saisir deux nombres entiers.
**
** Le programme doit déterminer et afficher le plus grand
** des deux nombres.
**
** EXEMPLES :
**
** Entrée : 10 5
** Sortie : Le maximum est 10.
**
** Entrée : 3 8
** Sortie : Le maximum est 8.
**
** Entrée : 7 7
** Sortie : Les deux nombres sont égaux.
**
** CONTRAINTES :
**
** - Utiliser une condition if.
** - Comparer les deux nombres.
** - Gérer le cas où les deux nombres sont égaux.
** - Afficher le maximum.
**
** OBJECTIF :
**
** S'entraîner à comparer plusieurs valeurs et à utiliser
** les conditions en C.
*/


int main () {

    int a = 11;
    int b = 8;

    if (a >= b)
    {
        printf(" Le nombre superieur est %d\n", a);
    }
    else if (b <= a)
    {
        printf("Le nombre superieur est %d\n", b);
    }
    else
    {
        printf("Les deux nombres sont égaux. %d\n");
    }
    
    return 0;
    
    

};
