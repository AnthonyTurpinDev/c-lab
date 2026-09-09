#include <stdio.h>

/*
** EXERCICE : Somme de 1 à N
**
** CONSIGNE :
**
** Demander à l'utilisateur de saisir un nombre N.
**
** Puis calculer la somme de tous les nombres
** compris entre 1 et N.
**
** Exemple :
**
**     N = 5
**
** Le programme doit afficher :
**
**     Somme = 15
**
** Car :
**
**     1 + 2 + 3 + 4 + 5 = 15
**
** AUTRE EXEMPLE :
**
**     N = 10
**
** Résultat :
**
**     Somme = 55
**
** 💡 POINT IMPORTANT :
**
** Tu dois utiliser DEUX variables différentes :
**
**     i
**     somme
**
** Leur rôle est différent :
**
**     i     → sert à parcourir les nombres
**     somme → sert à accumuler le résultat
**
** Exemple de progression pour N = 5 :
**
**     i = 1    somme = 0
**     i = 2    somme = 1
**     i = 3    somme = 3
**     i = 4    somme = 6
**     i = 5    somme = 10
**
** Puis le calcul final donne :
**
**     somme = 15
**
** CONTRAINTES :
**
** Tu dois utiliser :
**
**     - une boucle while
**     - une variable i
**     - une variable somme
**     - scanf() pour récupérer N
**     - printf() pour afficher le résultat
**
** ⚠️ IMPORTANT :
**
** Ne cherche pas à calculer directement la somme
** avec une formule mathématique.
**
** Le but est de faire le calcul progressivement
** avec la boucle.
**
** AVANT DE CODER, RÉFLÉCHIS À :
**
**     1. Quelle valeur donner à i au départ ?
**
**     2. Quelle valeur donner à somme au départ ?
**
**     3. Quelle condition mettre dans while ?
**
**     4. Comment ajouter i à somme ?
**
**     5. Comment faire évoluer i ?
**
** OBJECTIF FINAL :
**
** Comprendre le principe d'un ACCUMULATEUR :
**
**     somme = somme + i
**
** À chaque tour, la variable somme conserve
** le résultat précédent et lui ajoute la nouvelle valeur.
**
** QUESTION À TE POSER :
**
** Pourquoi faut-il initialiser somme à 0
** avant de commencer la boucle ?
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