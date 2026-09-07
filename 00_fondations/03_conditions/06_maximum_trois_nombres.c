#include <stdio.h>

/*
** EXERCICE : Maximum de trois nombres
**
** Demander à l'utilisateur de saisir trois nombres entiers.
**
** Le programme doit déterminer et afficher le plus grand
** des trois nombres.
**
** EXEMPLES :
**
** Entrée : 10 5 8
** Sortie : Le maximum est 10.
**
** Entrée : 3 15 7
** Sortie : Le maximum est 15.
**
** Entrée : 4 9 20
** Sortie : Le maximum est 20.
**
** Entrée : 7 7 7
** Sortie : Les trois nombres sont égaux.
**
** CONTRAINTES :
**
** - Utiliser des conditions if.
** - Comparer les trois nombres.
** - Stocker le maximum dans une variable.
** - Gérer le cas où plusieurs nombres sont égaux.
** - Afficher le maximum.
**
** OBJECTIF :
**
** S'entraîner à comparer plusieurs valeurs et à combiner
** plusieurs conditions en C.
*/


int maximum(int a, int b, int c)
{
    int max;

    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    return max;
}

int main(void)
{
    int a = 11;
    int b = 8;
    int c = 15;
    int max;

    max = maximum(a, b, c);

    printf("Le maximum est %d\n", max);

    return 0;
}