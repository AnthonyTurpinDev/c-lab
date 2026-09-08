#include <stdio.h>

/*
** EXERCICE : Maximum
**
** FICHIER : 06_max.c
**
** OBJECTIF :
**
** Utiliser une condition if dans une fonction
** qui retourne une valeur.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     int max(int a, int b)
**
** Cette fonction doit retourner le plus grand
** des deux nombres reçus.
**
** EXEMPLES :
**
**     max(10, 4) → 10
**     max(2, 8)  → 8
**
**
** CONTRAINTE :
**
** - Tu dois utiliser if.
** - La fonction doit retourner un int.
** - Tu dois utiliser return.
**
**
** 💡 RÉFLEXION :
**
** La fonction reçoit deux nombres :
**
**     a
**     b
**
** Tu dois comparer les deux valeurs.
**
** Pose-toi ces questions :
**
** 1. Comment savoir si a est plus grand que b ?
**
** 2. Que dois-tu retourner si a est plus grand ?
**
** 3. Que dois-tu retourner sinon ?
**
** 4. Comment récupérer le résultat de max()
**    dans main() ?
**
**
** 🎯 OBJECTIFS À VALIDER :
**
** - Utiliser deux paramètres.
** - Comparer deux valeurs avec if.
** - Retourner une valeur avec return.
** - Comprendre qu'une fonction peut retourner
**   une valeur différente selon une condition.
**
** BONUS :
**
** Teste également avec :
**
**     max(5, 5)
**     max(-10, 3)
**     max(-20, -5)
*/

int max(int a, int b) {

    if (a >= b)
    {
        printf("up %d\n", a);
    }
    else
    {
       printf("down %d\n", b);
    }
    
    return (a >= b) ? a : b;

};

int main (void) {
    
    int a = 10;
    int b = 5;

    max(a , b);
    return 0;
};