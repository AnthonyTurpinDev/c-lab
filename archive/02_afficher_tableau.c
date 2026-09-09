/*
** EXERCICE : Afficher un tableau
**
** FICHIER : 02_afficher_tableau.c
**
** OBJECTIF :
**
** Apprendre à parcourir un tableau avec une boucle.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Crée un tableau contenant 10 entiers.
**
** Exemple de valeurs :
**
**     int tab[10] = {10, 20, 30, 40, 50,
**                    60, 70, 80, 90, 100};
**
**
** Affiche tous les éléments du tableau, un par ligne.
**
**
** RÉSULTAT ATTENDU :
**
**     10
**     20
**     30
**     40
**     50
**     60
**     70
**     80
**     90
**     100
**
**
** ============================================
** CONTRAINTE IMPORTANTE
** ============================================
**
** ⚠️ INTERDICTION de faire :
**
**     printf("%d\n", tab[0]);
**     printf("%d\n", tab[1]);
**     printf("%d\n", tab[2]);
**     ...
**
** Tu dois utiliser une boucle.
**
**
** ============================================
** INDICE
** ============================================
**
** Le premier élément est :
**
**     tab[0]
**
** Le dernier élément est :
**
**     tab[9]
**
** Ton indice doit donc parcourir :
**
**     0 → 1 → 2 → ... → 9
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise printf().
** - Accède aux éléments avec tab[indice].
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle valeur donner à l'indice au départ ?
**
** 2. Jusqu'à quelle valeur dois-tu parcourir le tableau ?
**
** 3. Comment faire évoluer l'indice ?
**
** 4. Comment afficher tab[0], puis tab[1], puis tab[2]...
**    sans écrire chaque printf() manuellement ?
**
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre que la boucle permet de parcourir
** automatiquement les éléments d'un tableau.
*/

#include <stdio.h>

int main (void) 
{
    int tab[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};;
    int i = 0;

    while (i < 10) {
        printf("%d\n", tab[i]);
        i++;
    }

    return 0;
};