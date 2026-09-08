

/*
** EXERCICE : Vérifier plusieurs conditions simultanément
**
** Demander à l'utilisateur de saisir un nombre entier.
**
** Le programme doit vérifier plusieurs conditions sur ce nombre.
**
** CONDITIONS À TESTER :
**
** - Le nombre est positif.
** - Le nombre est pair.
** - Le nombre est supérieur à 10.
**
** Le programme doit afficher les résultats correspondants.
**
** EXEMPLE :
**
** Entrée : 24
**
** Sortie :
** Le nombre est positif.
** Le nombre est pair.
** Le nombre est supérieur à 10.
**
** AUTRE EXEMPLE :
**
** Entrée : -4
**
** Sortie :
** Le nombre n'est pas positif.
** Le nombre est pair.
** Le nombre n'est pas supérieur à 10.
**
** CONTRAINTES :
**
** - Utiliser les opérateurs logiques &&, || et !.
** - Utiliser plusieurs conditions.
** - Tester chaque condition correctement.
** - Ne pas utiliser une seule condition pour tout le programme.
**
** BONUS :
**
** Afficher un message spécifique si les trois conditions
** sont vraies simultanément.
**
** OBJECTIF :
**
** S'entraîner à combiner plusieurs conditions avec les
** opérateurs logiques en C.
*/

#include <stdio.h>

void tri(int number)
{
    if (number >= 0)
    {
        printf("Le nombre est positif.\n");
    }
    else
    {
        printf("Le nombre n'est pas positif.\n");
    }
}

void pair(int number)
{
    if (number % 2 == 0)
    {
        printf("Le nombre est pair.\n");
    }
    else
    {
        printf("Le nombre est impair.\n");
    }
}

void supp(int number)
{
    if (number > 10)
    {
        printf("Le nombre est supérieur à 10.\n");
    }
    else
    {
        printf("Le nombre n'est pas supérieur à 10.\n");
    }
}

int main(void)
{
    int number = 24;

    tri(number);
    pair(number);
    supp(number);

    return 0;
}