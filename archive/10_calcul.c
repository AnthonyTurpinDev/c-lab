#include <stdio.h>

/*
** EXERCICE : Mini calculateur
**
** CONSIGNE :
**
** Déclarer deux variables entières :
**
**     a = 15
**     b = 4
**
** Calculer les opérations suivantes :
**
**     a + b
**     a - b
**     a * b
**     a / b
**     a % b
**
** Puis afficher tous les résultats.
**
** FORMAT ATTENDU :
**
**     15 + 4 = ...
**     15 - 4 = ...
**     15 * 4 = ...
**     15 / 4 = ...
**     15 % 4 = ...
**
** À TRAVAILLER :
**
** - variables
** - addition +
** - soustraction -
** - multiplication *
** - division /
** - modulo %
** - division entière
** - printf()
**
** ⚠️ IMPORTANT :
**
** Les variables sont de type int.
**
** Il faut donc comprendre le comportement de la division
** entière pour a / b.
**
** CHALLENGE :
**
** Une fois le programme terminé, remplacer les valeurs par :
**
**     a = 127
**     b = 13
**
** Puis tester :
**
**     a = 8
**     b = 3
**
** Puis :
**
**     a = 1000
**     b = 37
**
** Pour chaque test, essayer de PRÉDIRE les cinq résultats
** avant d'exécuter le programme.
**
** QUESTIONS À TE POSER :
**
** - Quel sera le quotient ?
** - Quel sera le reste ?
** - Pourquoi le résultat de / n'est-il pas toujours décimal ?
** - Quelle relation existe entre / et % ?
**
** CONTRAINTES :
**
** - Utiliser les opérateurs arithmétiques demandés.
** - Stocker les résultats dans des variables.
** - Ne pas écrire les résultats directement dans printf().
** - Tester toutes les valeurs du challenge.
**
** OBJECTIF FINAL :
**
** Être parfaitement à l'aise avec les opérations arithmétiques
** de base en C et comprendre la différence entre division (/)
** et modulo (%).
*/
int main () {

    int a = 15;
    int b = 4;

    int addition = a + b;
    int sousstraction = a - b; 
    int multiplication = a * b;
    float division = a / b;
    float quotin = a % b; 

    printf("15 + 4 =%d\n", addition);
    printf("15 - 4 =%d\n", sousstraction);
    printf("15 * 4 =%d\n", multiplication);
    printf("15 / 4 =%.2f\n", division);
    printf("15 %% 4 =%.2f\n", quotin);

    return 0;
    
};