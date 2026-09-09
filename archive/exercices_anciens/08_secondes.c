#include <stdio.h>

/*
** EXERCICE : Convertisseur de secondes
**
** CONSIGNE :
**
** Déclarer une variable entière :
**
**     secondes = 7384
**
** Convertir cette durée en :
**
** - heures ;
** - minutes ;
** - secondes restantes.
**
** RÉSULTAT ATTENDU :
**
**     2 heures
**     3 minutes
**     4 secondes
**
** À TRAVAILLER :
**
** - division entière /
** - modulo %
** - variables
** - calculs successifs
** - printf()
**
** ⚠️ IMPORTANT :
**
** Comprendre réellement la différence entre :
**
**     7384 / 3600
**
** et :
**
**     7384 % 3600
**
**
** RAPPEL :
**
** L'opérateur / permet d'obtenir le quotient
** d'une division entière.
**
** L'opérateur % permet d'obtenir le reste
** d'une division entière.
**
** QUESTIONS À TE POSER AVANT DE CODER :
**
** 1. Combien d'heures complètes sont contenues dans 7384 secondes ?
**
** 2. Combien de secondes restent après avoir retiré les heures ?
**
** 3. Combien de minutes complètes sont contenues dans ces secondes restantes ?
**
** 4. Combien de secondes restent après avoir retiré les minutes ?
**
** CONTRAINTES :
**
** - Utiliser / et %.
** - Ne pas utiliser de fonctions toutes faites.
** - Effectuer les calculs étape par étape.
** - Afficher les heures, les minutes et les secondes restantes.
**
** BONUS :
**
** Tester avec d'autres valeurs :
**
**     3600
**     3661
**     60
**     59
**     7322
**
** Essayer de prévoir le résultat avant d'exécuter le programme.
**
** OBJECTIF FINAL :
**
** Comprendre parfaitement la division entière et le modulo,
** car ces deux opérateurs seront très utilisés dans les exercices
** de programmation en C.
*/

int main () {
    int secondes = 7384;
    int minutes = secondes / 60;
    int heures = minutes / 60; 

    printf("%d\n heures", heures);

    printf("%d\n minute", minutes);
    
    printf("%d\n seconde", secondes);

    return 0; 

};
