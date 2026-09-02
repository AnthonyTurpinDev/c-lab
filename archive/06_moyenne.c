#include <stdio.h>

/*
** EXERCICE : Moyenne de trois nombres
**
** CONSIGNE :
**
** Déclarer trois variables contenant les valeurs suivantes :
**
**     12
**     15
**     17
**
** Calculer leur moyenne et stocker le résultat dans une variable.
**
** RÉSULTAT ATTENDU :
**
**     Moyenne : 14.67
**
** À TRAVAILLER :
**
** - addition
** - division
** - float / double
** - précision
** - printf()
**
** ⚠️ ATTENTION :
**
** Faire attention au type des variables utilisées.
**
** La moyenne peut contenir des chiffres après la virgule.
**
** QUESTION :
**
** Pourquoi est-il préférable de ne pas utiliser uniquement
** des int pour calculer cette moyenne ?
**
** Réfléchir au problème avant de coder.
**
** BONUS :
**
** Tester avec d'autres valeurs, par exemple :
**
**     10, 10, 11
**     5, 8, 12
**     1, 2, 3
**
** Observer les résultats.
**
** OBJECTIF FINAL :
**
** Comprendre pourquoi le choix du type de variable est important
** lorsqu'un calcul peut produire un résultat décimal.
*/

int main () {

    int x = 12;
    int y = 15;
    int z = 17;

    float moyenne = (x + y +z) / 3.0;

    printf("moyenne :%.2f\n", moyenne);

};