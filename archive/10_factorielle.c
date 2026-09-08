/*
** EXERCICE : Factorielle
**
** FICHIER : 10_factorielle.c
**
** CONSIGNE :
**
** Demande un nombre N à l'utilisateur et calcule sa factorielle.
**
** La factorielle de N est définie par :
**
**     N! = 1 × 2 × 3 × ... × N
**
** EXEMPLE :
**
** Si l'utilisateur entre :
**
**     5
**
** Ton programme doit calculer :
**
**     1 × 2 × 3 × 4 × 5 = 120
**
** Et afficher :
**
**     Factorielle = 120
**
** AUTRES EXEMPLES :
**
**     3! = 6
**     4! = 24
**     5! = 120
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - Demande N avec scanf.
** - Utilise une variable pour parcourir les nombres.
** - Utilise une variable qui accumule le résultat.
** - N'utilise pas de formule toute faite.
**
** 💡 RÉFLEXION :
**
** Dans l'exercice 07_somme.c, tu avais un accumulateur :
**
**     somme = somme + i;
**
** Ici, tu dois réfléchir à une accumulation par multiplication :
**
**     resultat = resultat * i;
**
** Pose-toi ces questions avant de coder :
**
** 1. Quelle doit être la valeur initiale de resultat ?
** 2. Par quel nombre dois-tu commencer ?
** 3. Jusqu'où ta boucle doit-elle aller ?
** 4. Comment faire évoluer i à chaque tour ?
**
** ⚠️ CAS PARTICULIER :
**
** Attention :
**
**     0! = 1
**
** Ton programme doit donc également fonctionner avec N = 0.
*/

#include <stdio.h>

int factorial(int n)
{
    int compteur = 1;
    int somme = 1;

    while (compteur <= n)
    {
        somme = somme * compteur;
        compteur++;
    }

    return somme;
}


int main (void) {

     int n = 5;

     

    printf("%d\n", factorial(n));
    return 0;

};