/*
** EXERCICE : Afficher une chaîne de caractères
**
** CONSIGNE :
**
** Déclare une chaîne de caractères :
**
**     char str[] = "Bonjour";
**
** Puis affiche cette chaîne avec printf.
**
** RÉSULTAT ATTENDU :
**
**     Bonjour
**
** OBJECTIFS :
**
** - Comprendre le type char.
** - Comprendre la déclaration :
**       char str[]
** - Comprendre qu'une chaîne de caractères est
**   un tableau de caractères.
** - Découvrir comment printf affiche une chaîne.
**
** CONTRAINTE :
**
** - Utiliser la variable str.
** - Ne pas afficher "Bonjour" directement dans printf.
*/

#include <stdio.h>


int main (void) 
{
    char str[] = "Bonjour";

    printf("%s\n", str);

    return 0;
};