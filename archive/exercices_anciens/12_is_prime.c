#include <stdio.h>

/*
** EXERCICE : Is Prime
**
** FICHIER : 12_is_prime.c
**
** OBJECTIF :
**
** Créer une fonction capable de déterminer si un nombre
** est premier ou non.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     int is_prime(int n)
**
** La fonction doit retourner :
**
**     1 → si le nombre est premier
**     0 → si le nombre n'est pas premier
**
**
** EXEMPLES :
**
**     is_prime(7)  → 1
**     is_prime(10) → 0
**     is_prime(13) → 1
**
**
** RAPPEL :
**
** Un nombre premier est un nombre supérieur à 1
** qui est divisible uniquement par 1 et lui-même.
**
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - Utilise l'opérateur %.
** - Utilise une condition if.
** - La fonction doit retourner 1 ou 0.
** - Utilise return.
**
**
** 💡 RÉFLEXION :
**
** Pour déterminer si n est premier, tu dois rechercher
** un éventuel diviseur.
**
** Par exemple, pour 10 :
**
**     10 % 2
**     10 % 3
**     10 % 4
**     ...
**
** Si tu trouves un nombre qui divise n sans reste,
** alors n n'est pas premier.
**
** Pose-toi ces questions :
**
** 1. Par quel nombre dois-tu commencer les tests ?
**
** 2. Jusqu'à quel nombre dois-tu tester ?
**
** 3. Comment savoir si tu as trouvé un diviseur ?
**
** 4. Que dois-tu faire immédiatement lorsqu'un diviseur
**    est trouvé ?
**
** 5. Que doit retourner la fonction si aucun diviseur
**    n'a été trouvé ?
**
** 6. Que dois-tu retourner pour les nombres inférieurs
**    ou égaux à 1 ?
**
**
** ============================================
** TEST DANS MAIN()
** ============================================
**
** Teste au minimum :
**
**     is_prime(2)
**     is_prime(7)
**     is_prime(10)
**     is_prime(13)
**     is_prime(1)
**     is_prime(0)
**
** Résultats attendus :
**
**     2  → 1
**     7  → 1
**     10 → 0
**     13 → 1
**     1  → 0
**     0  → 0
**
**
** 🔥 OBJECTIF PISCINE :
**
** Cet exercice est très important.
**
** Tu dois être capable d'expliquer ton raisonnement
** avant même d'écrire le code.
**
** Si ton programme fonctionne, essaie de l'optimiser :
**
**     Ne teste pas inutilement tous les nombres
**     jusqu'à n.
**
** Réfléchis à la limite maximale réellement nécessaire
** pour rechercher un diviseur.
*/

int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    int compteur = 2;

    while (compteur < n)
    {
        if (n % compteur == 0)
        {
            return 0;
        }

        compteur++;
    }

    return 1;
}

int main (void) {

    int n = 3;

    is_prime(n);

    return 0;

};