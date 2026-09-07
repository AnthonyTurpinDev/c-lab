#include <stdio.h>

/*
** EXERCICE : Quotient et reste
**
** CONSIGNE :
**
** Déclarer deux variables entières :
**
**     a = 37
**     b = 5
**
** Calculer puis afficher :
**
** - le quotient de a par b ;
** - le reste de la division de a par b.
**
** RÉSULTAT ATTENDU :
**
**     Quotient : 7
**     Reste : 2
**
** À TRAVAILLER :
**
** - opérateur /
** - opérateur %
** - division entière
** - variables
** - printf()
**
** RAPPEL :
**
** L'opérateur / permet d'obtenir le quotient
** d'une division entière.
**
** L'opérateur % permet d'obtenir le reste
** d'une division entière.
**
** EXEMPLE :
**
**     37 / 5 = 7
**     37 % 5 = 2
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi le quotient vaut-il 7 ?
** 2. Pourquoi le reste vaut-il 2 ?
** 3. Quelle relation existe entre le nombre initial,
**    le quotient, le diviseur et le reste ?
**
** TESTS OBLIGATOIRES :
**
** Tester également :
**
**     10 / 3
**     20 / 4
**     100 / 7
**     25 / 6
**
** Pour chaque test, essayer de prévoir le quotient
** et le reste avant d'exécuter le programme.
**
** CONTRAINTES :
**
** - Utiliser / pour calculer le quotient.
** - Utiliser % pour calculer le reste.
** - Ne pas calculer les résultats manuellement.
** - Stocker les résultats dans des variables.
**
** OBJECTIF FINAL :
**
** Comprendre parfaitement la différence entre / et %
** lors d'une division entière en C.
*/

int main () {

    int a = 37;
    int b = 5;

    int Q = a % b;
    int D = a / b;

    printf("Quotient :%d\n", Q);
    printf("Reste :%d\n", D);

    return 0;

};

