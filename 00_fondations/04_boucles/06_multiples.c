#include <stdio.h>

/*
** EXERCICE : Multiples de 3
**
** CONSIGNE :
**
** Créer un programme qui affiche les multiples de 3
** de 0 à 30, un par ligne.
**
** RÉSULTAT ATTENDU :
**
**     0
**     3
**     6
**     9
**     12
**     15
**     18
**     21
**     24
**     27
**     30
**
** CONTRAINTE :
**
** Tu dois utiliser une boucle while.
**
** 💡 RÉFLEXION :
**
** Observe la progression :
**
**     0 → 3 → 6 → 9 → 12 → ...
**
** AVANT DE CODER, réfléchis à :
**
**     1. Quelle valeur donner à i au départ ?
**
**     2. Quelle condition utiliser dans while ?
**
**     3. Comment afficher i ?
**
**     4. De combien i doit-il augmenter à chaque tour ?
**
**     5. Quelle sera la dernière valeur affichée ?
**
** ⚠️ IMPORTANT :
**
** N'utilise pas le modulo % pour cet exercice.
**
** Le but est de comprendre la progression d'une
** variable par pas de 3.
**
** OBJECTIF FINAL :
**
** Comprendre qu'une boucle while peut parcourir
** une suite de nombres en augmentant i d'un pas
** déterminé.
**
** QUESTION À TE POSER :
**
** Si i suit :
**
**     0 → 3 → 6 → 9 → ...
**
** de combien dois-tu augmenter i à chaque tour ?
*/


int main(void)
{
    int i;

    i = 0;
    while (i <= 30) {
        printf("%d\n", i);
        i = i + 3; // ou i += 3;
    }

    return (0);
}