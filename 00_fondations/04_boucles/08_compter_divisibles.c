/*
** EXERCICE : Compter les nombres divisibles
**
** CONSIGNE :
**
** Demander à l'utilisateur deux nombres :
**
**     N
**     diviseur
**
** Le programme doit compter combien de nombres
** entre 1 et N sont divisibles par diviseur.
**
** EXEMPLE :
**
**     N = 20
**     diviseur = 3
**
** Les nombres divisibles par 3 sont :
**
**     3
**     6
**     9
**     12
**     15
**     18
**
** Le programme doit afficher :
**
**     Il y a 6 nombres divisibles par 3.
**
** 💡 INDICE :
**
** Tu vas avoir besoin de l'opérateur modulo :
**
**     %
**
** Rappel :
**
**     10 % 3 = 1
**     9 % 3 = 0
**
** Lorsqu'un nombre est divisible par un autre nombre,
** le reste de la division est égal à 0.
**
** À TOI DE RÉFLÉCHIR :
**
**     Comment savoir si i est divisible par diviseur ?
**
** CONTRAINTES :
**
** Tu dois utiliser :
**
**     - une boucle while
**     - une variable i pour parcourir les nombres
**     - une variable compteur pour compter les nombres
**     - scanf() pour récupérer N et diviseur
**     - l'opérateur %
**     - printf() pour afficher le résultat
**
** Le parcours doit commencer à 1 et aller jusqu'à N.
**
** AVANT DE CODER, RÉFLÉCHIS À :
**
**     1. Quelle valeur donner à i au départ ?
**
**     2. Quelle valeur donner à compteur au départ ?
**
**     3. Quelle condition utiliser dans while ?
**
**     4. Comment vérifier que i est divisible par diviseur ?
**
**     5. Quand faut-il augmenter compteur ?
**
**     6. Comment faire évoluer i ?
**
** ⚠️ ATTENTION :
**
** Si le reste de la division est 0, le nombre
** est divisible.
**
** OBJECTIF FINAL :
**
** Comprendre comment utiliser une boucle pour parcourir
** une série de nombres et une condition pour compter
** uniquement ceux qui respectent une propriété.
**
** QUESTION À TE POSER :
**
** Si :
**
**     i % diviseur == 0
**
** que peux-tu en déduire sur i ?
*/

#include <stdio.h>

void Calcul(int N, int D)
{
    int i = 1;
    int compteur = 0;

    while (i <= N)
    {
        if (i % D == 0)
        {
            compteur++;
        }

        i++;
    }

    printf("Il y a %d nombres divisibles par %d.\n", compteur, D);
}

int main(void)
{
    int N = 20;
    int D = 3;

    Calcul(N, D);

    return 0;
}