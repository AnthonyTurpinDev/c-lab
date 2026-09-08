/*
** EXERCICE : Année bissextile
**
** Demander à l'utilisateur de saisir une année entière.
**
** Le programme doit vérifier si cette année est bissextile.
**
** RÈGLE :
**
** Une année est bissextile si :
**
** - elle est divisible par 400 ;
** OU
** - elle est divisible par 4 ET n'est pas divisible par 100.
**
** EXEMPLES :
**
** Entrée : 2024
** Sortie : L'année est bissextile.
**
** Entrée : 2023
** Sortie : L'année n'est pas bissextile.
**
** Entrée : 2000
** Sortie : L'année est bissextile.
**
** Entrée : 1900
** Sortie : L'année n'est pas bissextile.
**
** CONTRAINTES :
**
** - Utiliser des conditions if / else.
** - Utiliser l'opérateur modulo %.
** - Vérifier les différentes règles de divisibilité.
** - Afficher si l'année est bissextile ou non.
**
** OBJECTIF :
**
** S'entraîner à combiner plusieurs conditions logiques
** et à utiliser l'opérateur modulo %.
*/

#include <stdio.h>

int main(void)
{
    int annee;

    printf("Entrez une annee : ");
    scanf("%d", &annee);

    if (annee % 400 == 0 || (annee % 4 == 0 && annee % 100 != 0))
    {
        printf("L'annee est bissextile.\n");
    }
    else
    {
        printf("L'annee n'est pas bissextile.\n");
    }

    return 0;
}