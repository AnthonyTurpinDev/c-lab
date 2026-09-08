#include <stdio.h>

/*
** EXERCICE : Somme jusqu'à N
**
** FICHIER : 10_sum_to_n.c
**
** OBJECTIF :
**
** Utiliser une boucle dans une fonction qui retourne
** un résultat.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     int sum_to_n(int n)
**
** Cette fonction doit calculer et retourner la somme
** de tous les nombres de 1 jusqu'à n.
**
** EXEMPLES :
**
**     sum_to_n(5)  → 15
**     sum_to_n(10) → 55
**
** Car :
**
**     1 + 2 + 3 + 4 + 5 = 15
**
**     1 + 2 + 3 + ... + 10 = 55
**
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - Utilise une variable compteur.
** - Utilise une variable pour accumuler la somme.
** - La fonction doit retourner un int.
** - Utilise return.
** - Ne demande pas de nombre avec scanf dans la fonction.
**
**
** 💡 RÉFLEXION :
**
** Tu dois utiliser un accumulateur, comme dans l'exercice
** 07_somme.c.
**
** Réfléchis à :
**
**     compteur
**     somme
**
** À chaque tour de boucle, la somme doit être mise à jour.
**
** Pose-toi ces questions :
**
** 1. Quelle doit être la valeur initiale de somme ?
**
** 2. Par quel nombre dois-tu commencer le compteur ?
**
** 3. Jusqu'à quelle valeur dois-tu faire tourner la boucle ?
**
** 4. Comment ajouter le compteur à la somme ?
**
** 5. Quand dois-tu retourner la somme ?
**
**
** ============================================
** TEST DANS MAIN()
** ============================================
**
** Dans main(), teste au minimum :
**
**     sum_to_n(5)
**     sum_to_n(10)
**
** Tu dois obtenir :
**
**     15
**     55
**
** Tu peux également tester :
**
**     sum_to_n(1)
**     sum_to_n(2)
**     sum_to_n(100)
**
**
** 🎯 OBJECTIFS À VALIDER :
**
** - Utiliser plusieurs variables dans une fonction.
** - Utiliser une boucle while dans une fonction.
** - Comprendre le principe d'accumulateur.
** - Retourner le résultat avec return.
** - Comprendre qu'une fonction peut effectuer
**   plusieurs calculs avant de retourner une valeur.
*/



 int sum_to_n(int n)
{
    int compteur = 1;
    int somme = 0;

    while (compteur <= n)
    {
        somme = somme + compteur;
        compteur++;
    }

    return somme;
}


int main (void) {

     int n = 10;

    printf("%d\n", sum_to_n(n));
    return 0;

};