#include <stdio.h>

/*
** EXERCICE : Factorielle
**
** FICHIER : 11_factorial.c
**
** OBJECTIF :
**
** Utiliser une boucle dans une fonction pour calculer
** et retourner un résultat.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     int factorial(int n)
**
** Cette fonction doit calculer et retourner la factorielle
** de n.
**
** EXEMPLES :
**
**     factorial(5) → 120
**     factorial(4) → 24
**     factorial(3) → 6
**
** Car :
**
**     5! = 1 × 2 × 3 × 4 × 5 = 120
**     4! = 1 × 2 × 3 × 4     = 24
**     3! = 1 × 2 × 3         = 6
**
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - Utilise une variable compteur.
** - Utilise une variable pour accumuler le résultat.
** - La fonction doit retourner un int.
** - Utilise return.
**
**
** 💡 RÉFLEXION :
**
** Contrairement à sum_to_n(), tu ne dois pas additionner
** les nombres.
**
** Ici, tu dois multiplier progressivement le résultat.
**
** Réfléchis à :
**
**     résultat
**     compteur
**
** Exemple pour 5 :
**
**     résultat → ? × 1
**     résultat → ? × 2
**     résultat → ? × 3
**     résultat → ? × 4
**     résultat → ? × 5
**
** Pose-toi ces questions :
**
** 1. Quelle doit être la valeur initiale du résultat ?
**
** 2. Par quel nombre dois-tu commencer le compteur ?
**
** 3. Quelle opération dois-tu effectuer à chaque tour ?
**
** 4. Jusqu'à quelle valeur la boucle doit-elle aller ?
**
** 5. Quand dois-tu retourner le résultat ?
**
**
** ⚠️ CAS PARTICULIER :
**
** N'oublie pas :
**
**     0! = 1
**
** Ton programme doit donc également gérer :
**
**     factorial(0) → 1
**
**
** ============================================
** TEST DANS MAIN()
** ============================================
**
** Teste au minimum :
**
**     factorial(3)
**     factorial(4)
**     factorial(5)
**
** Tu dois obtenir :
**
**     6
**     24
**     120
**
** 🎯 OBJECTIFS À VALIDER :
**
** - Utiliser une fonction avec un paramètre.
** - Utiliser une boucle dans une fonction.
** - Utiliser un accumulateur avec une multiplication.
** - Retourner un résultat avec return.
** - Comprendre la différence entre additionner
**   et multiplier dans un accumulateur.
*/

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