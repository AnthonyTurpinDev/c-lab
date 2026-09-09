#include <stdio.h>

/*
** EXERCICE : Déterminer une mention selon une note
**
** Demander à l'utilisateur de saisir une note sur 20.
**
** Le programme doit afficher la mention correspondant
** à la note obtenue.
**
** BARÈME :
**
** - Note inférieure à 10    → Ajourné
** - De 10 à moins de 12     → Passable
** - De 12 à moins de 14     → Assez bien
** - De 14 à moins de 16     → Bien
** - 16 ou plus              → Très bien
**
** EXEMPLES :
**
** Entrée : 8
** Sortie : Ajourné
**
** Entrée : 11
** Sortie : Passable
**
** Entrée : 13
** Sortie : Assez bien
**
** Entrée : 15
** Sortie : Bien
**
** Entrée : 17
** Sortie : Très bien
**
** CONTRAINTES :
**
** - Utiliser des conditions if / else if / else.
** - Gérer toutes les tranches de notes.
** - Vérifier que la note est comprise entre 0 et 20.
** - Afficher un message d'erreur si la note est invalide.
**
** OBJECTIF :
**
** S'entraîner à utiliser plusieurs conditions successives
** et à définir des intervalles de valeurs en C.
*/

int main(void)
{
    int a = 11;

    if (a < 0 || a > 20)
    {
        printf("Note invalide\n");
    }
    else if (a < 10)
    {
        printf("Ajourné %d\n", a);
    }
    else if (a < 12)
    {
        printf("Passable %d\n", a);
    }
    else if (a < 14)
    {
        printf("Assez bien %d\n", a);
    }
    else if (a < 16)
    {
        printf("Bien %d\n", a);
    }
    else
    {
        printf("Très bien %d\n", a);
    }

    return 0;
}
