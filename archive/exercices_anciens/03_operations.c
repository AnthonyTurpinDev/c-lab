#include <stdio.h>
/*
** EXERCICE : Les quatre opérations
**
** CONSIGNE :
**
** Créer deux variables entières :
**
** - a contenant la valeur 20 ;
** - b contenant la valeur 5.
**
** Calculer et afficher les quatre opérations suivantes :
**
** - addition ;
** - soustraction ;
** - multiplication ;
** - division.
**
** RÉSULTAT ATTENDU :
**
** Addition : 25
** Soustraction : 15
** Multiplication : 100
** Division : 4
**
** À TRAVAILLER :
**
** - variables
** - int
** - opérateurs +, -, * et /
** - stockage des résultats
** - printf()
**
** ⚠️ ATTENTION :
**
** Les variables sont de type int.
** La division entre deux entiers produit donc un résultat entier.
**
** Exemple :
**
** 20 / 5 = 4
**
** Mais que se passe-t-il avec :
**
** 21 / 5
**
** Réfléchir au résultat avant de lancer le programme.
**
** BONUS :
**
** Tester également :
**
** 22 / 5
** 10 / 3
** 7 / 2
**
** Observer les résultats et essayer de comprendre pourquoi
** les nombres après la virgule ne sont pas affichés.
**
** OBJECTIF FINAL :
**
** Comprendre les quatre opérations arithmétiques de base
** et comprendre le fonctionnement de la division entière en C.
*/

int main () {
    int a = 20;
    int b = 5;

    int addition = a + b;
    int soustration = a - b;
    int multiplication = a * b;
    int division = a / b;

    printf("addition :%d\n", addition);
    printf("soustration :%d\n", soustration);
    printf(" multiplication:%d\n", multiplication);
    printf("division :%d\n", division);

    return 0;
};