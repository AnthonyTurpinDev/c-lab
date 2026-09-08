#include <stdio.h>

/*
** EXERCICE : Addition
**
** FICHIER : 05_addition.c
**
** OBJECTIF :
**
** Apprendre à utiliser plusieurs paramètres dans une fonction
** et retourner un résultat avec return.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     int add(int a, int b)
**
** Cette fonction doit retourner la somme de a et b.
**
** EXEMPLE :
**
**     add(5, 3) → 8
**
**
** 💡 RÉFLEXION :
**
** La fonction reçoit deux paramètres :
**
**     int a
**     int b
**
** Elle doit calculer leur somme puis retourner le résultat.
**
** Pose-toi ces questions :
**
** 1. Comment accéder aux deux paramètres ?
**
** 2. Quelle opération dois-tu effectuer ?
**
** 3. Comment retourner le résultat ?
**
** 4. Comment récupérer le résultat de add() dans main() ?
**
**
** 🎯 OBJECTIFS À VALIDER :
**
** - Utiliser plusieurs paramètres.
** - Comprendre le rôle de a et b.
** - Effectuer une opération dans une fonction.
** - Utiliser return pour retourner le résultat.
** - Récupérer le résultat d'une fonction dans main().
**
** BONUS :
**
** Teste ta fonction avec plusieurs valeurs :
**
**     add(10, 20)
**     add(7, 8)
**     add(100, 25)
**
** Vérifie que les résultats sont corrects.
*/

int add(int a, int b) {

     a + b ;

    printf("%d\n", a + b);
    return a + b;
};

int main (void) {

    int a = 5;
    int b  = 5; 

    add(a , b);
    return 0; 

};