#include <stdio.h>

/*
** EXERCICE : Prédire avant d'exécuter
**
** CONSIGNE :
**
** Analyse le programme suivant :
**
**     int x = 10;
**     int *p = &x;
**
**     *p = 20;
**
**     printf("%d\n", x);
**
** QUESTION :
**
** Sans compiler et sans exécuter le programme,
** quelle valeur sera affichée ?
**
** Écris ta réponse avant de lancer GCC.
**
** À TRAVAILLER :
**
** - comprendre ce que contient p
** - comprendre ce que signifie *p
** - comprendre la modification de x via *p
**
** ÉTAPES À SUIVRE :
**
** 1. Quelle est la valeur initiale de x ?
** 2. Que contient p ?
** 3. Que signifie *p ?
** 4. Que se passe-t-il avec :
**
**        *p = 20;
**
** 5. Quelle sera finalement la valeur de x ?
**
** ⚠️ IMPORTANT :
**
** Ne compile PAS immédiatement.
**
** Tu dois d'abord prédire le résultat.
**
** Ensuite seulement, vérifie ta réponse avec GCC.
**
** OBJECTIF FINAL :
**
** Être capable de comprendre ce qu'un pointeur
** fait à une variable sans avoir besoin d'exécuter
** le programme.
**
** QUESTION À TE POSER :
**
** Pourquoi printf("%d\n", x) affiche-t-il la nouvelle
** valeur alors que nous avons modifié *p et non x
** directement ?
*/

int main () {
     int x = 10;
     int *p = &x;

     *p = 20;

     printf("%d\n", x);
     return 0;
};