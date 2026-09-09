#include <stdio.h>
/*
** EXERCICE : Additionner deux variables
**
** CONSIGNE :
**
** Créer deux variables entières :
**
** - a contenant la valeur 15 ;
** - b contenant la valeur 27.
**
** Calculer la somme de a et b et stocker le résultat
** dans une troisième variable.
**
** Puis afficher le résultat sous la forme :
**
** 15 + 27 = 42
**
** À TRAVAILLER :
**
** - variables
** - int
** - opérateur +
** - stockage d'un résultat dans une variable
** - printf()
**
** CONTRAINTES :
**
** - Ne pas écrire directement "42" comme résultat.
** - Le résultat doit être calculé à partir de a et b.
** - Afficher les valeurs de a, b et le résultat.
**
** OBJECTIF FINAL :
**
** Comprendre comment effectuer une opération entre deux
** variables et stocker le résultat dans une autre variable.
*/

int main () {
    int a = 15;
    int b = 27;
    int c = a + b;

    printf("%d + %d = %d\n", a, b, c);
    return 0;
};