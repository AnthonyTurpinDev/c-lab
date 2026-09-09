#include <stdio.h>

/*
** EXERCICE : Déclarer un tableau
**
** FICHIER : 01_declarer_tableau.c
**
** OBJECTIF :
**
** Apprendre à :
**
**     - déclarer un tableau
**     - comprendre les indices
**     - accéder aux éléments avec tab[index]
**     - parcourir un tableau
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Déclare le tableau suivant :
**
**     int tab[5] = {10, 20, 30, 40, 50};
**
**
** Affiche tous les éléments du tableau.
**
**
** RÉSULTAT ATTENDU :
**
**     10
**     20
**     30
**     40
**     50
**
**
** ============================================
** INDICES
** ============================================
**
** Un tableau commence à l'indice 0.
**
** Tu dois comprendre :
**
**     tab[0] → 10
**     tab[1] → 20
**     tab[2] → 30
**     tab[3] → 40
**     tab[4] → 50
**
**
** ⚠️ ATTENTION :
**
** Le tableau contient 5 éléments, mais son dernier
** indice est 4 et non 5.
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise printf() pour afficher les éléments.
** - Utilise une boucle while pour parcourir le tableau.
** - Utilise une variable compteur/index.
**
**
** QUESTIONS À TE POSER :
**
** 1. À quel indice commence un tableau ?
**
** 2. Quel est le dernier indice de tab ?
**
** 3. Comment faire évoluer ton indice ?
**
** 4. Quelle condition doit arrêter la boucle ?
**
**
** 🔥 OBJECTIF PISCINE :
**
** À la fin de l'exercice, tu dois comprendre pourquoi :
**
**     tab[0]
**
** correspond au premier élément et pourquoi :
**
**     tab[5]
**
** n'existe pas dans ce tableau.
*/


int main (void) 
{
    int tab[5] = {10, 20, 30, 40, 50};
    int i = 0;

    while (i < 5) {
        printf("%d\n", tab[i]);
        i++;
    }

    return 0;
};
