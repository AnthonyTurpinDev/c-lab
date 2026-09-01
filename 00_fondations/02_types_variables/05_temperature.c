#include <stdio.h>

/*
** EXERCICE : Conversion Celsius → Fahrenheit
**
** CONSIGNE :
**
** Déclarer une variable contenant la température :
**
**     celsius = 25
**
** Convertir cette température en Fahrenheit avec la formule :
**
**     F = C × 9 / 5 + 32
**
** Puis afficher le résultat.
**
** À TRAVAILLER :
**
** - float ou double
** - opérations mathématiques
** - multiplication et division
** - ordre des opérations
** - printf()
**
** ⚠️ ATTENTION :
**
** Faire attention au type des variables utilisées.
**
** Une division entre deux variables entières peut produire
** une division entière.
**
** Vérifier que le calcul conserve correctement la partie
** décimale lorsque cela est nécessaire.
**
** TESTS OBLIGATOIRES :
**
** Tester également le programme avec :
**
**     0°C
**     100°C
**     -10°C
**
** OBJECTIF FINAL :
**
** Comprendre comment effectuer un calcul avec des nombres
** décimaux et comprendre l'importance du type des variables
** dans une opération mathématique en C.
*/

int main () {

    float celsius = 25;
    float F = celsius * 9 / 5 + 32;

    printf("Temperature :%.2f\n", F);

    return 0;
};