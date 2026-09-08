#include <stdio.h>

/*
** EXERCICE : Maximum d'un tableau
**
** Déclarer un tableau contenant plusieurs nombres entiers.
**
** Le programme doit parcourir le tableau et trouver
** la plus grande valeur.
**
** EXEMPLE :
**
** Tableau :
** 12 5 27 8 19
**
** Sortie :
** Le maximum est 27.
**
** CONTRAINTES :
**
** - Utiliser un tableau d'entiers.
** - Parcourir le tableau avec une boucle.
** - Comparer chaque élément avec le maximum actuel.
** - Stocker le maximum dans une variable.
** - Afficher le maximum trouvé.
**
** IMPORTANT :
**
** Le maximum doit être recherché dans le tableau.
** Ne pas utiliser une valeur choisie à l'avance comme résultat.
**
** BONUS :
**
** - Demander la taille du tableau à l'utilisateur.
** - Demander les valeurs du tableau.
** - Créer une fonction qui retourne le maximum.
**
** OBJECTIF :
**
** S'entraîner à parcourir un tableau et à rechercher
** une valeur selon une condition.
*/
int main(void) {
    int tab[] = {12, 5, 27, 8, 19};
int max;
int i;

max = tab[0];
i = 1;

while (i < 5)
{
    if (tab[i] > max)
    {
        max = tab[i];
    }

    i++;
}

printf("Le maximum est %d\n", max);
};
