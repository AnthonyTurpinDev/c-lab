/*
** EXERCICE : Modifier un tableau
**
** FICHIER : 03_modifier_tableau.c
**
** OBJECTIF :
**
** Apprendre à modifier les éléments d'un tableau
** en utilisant une boucle et un indice.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Déclare le tableau suivant :
**
**     int tab[5] = {1, 2, 3, 4, 5};
**
**
** Modifie les valeurs du tableau pour obtenir :
**
**     10
**     20
**     30
**     40
**     50
**
**
** Puis affiche le tableau après modification.
**
**
** ============================================
** RÉSULTAT ATTENDU
** ============================================
**
**     10
**     20
**     30
**     40
**     50
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Parcours le tableau avec cet indice.
** - Modifie chaque élément du tableau.
** - Affiche ensuite tous les éléments.
**
** ⚠️ Tu ne dois pas modifier chaque élément
** individuellement comme ceci :
**
**     tab[0] = 10;
**     tab[1] = 20;
**     tab[2] = 30;
**     ...
**
** La modification doit être réalisée avec une boucle.
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Observe la transformation :
**
**     1  → 10
**     2  → 20
**     3  → 30
**     4  → 40
**     5  → 50
**
** Pose-toi cette question :
**
**     Comment obtenir automatiquement 10, 20, 30...
**     à partir de la position de l'élément ?
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle valeur doit avoir l'indice au départ ?
**
** 2. Quelle condition permet de parcourir les 5 éléments ?
**
** 3. Comment modifier tab[indice] ?
**
** 4. Comment faire évoluer l'indice ?
**
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre qu'un tableau peut être modifié directement
** en utilisant son indice :
**
**     tab[indice]
**
** et qu'une boucle permet d'appliquer une opération
** à plusieurs éléments automatiquement.
*/