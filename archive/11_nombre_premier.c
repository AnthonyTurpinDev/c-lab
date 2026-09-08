#include <stdio.h>

/*
** EXERCICE : Nombre premier
**
** FICHIER : 11_nombre_premier.c
**
** CONSIGNE :
**
** Demande un nombre à l'utilisateur et détermine s'il est premier.
**
** Un nombre premier est un nombre supérieur à 1 et divisible
** uniquement par 1 et lui-même.
**
** EXEMPLES :
**
**     2  → premier
**     3  → premier
**     4  → pas premier
**     5  → premier
**     6  → pas premier
**     7  → premier
**     8  → pas premier
**     9  → pas premier
**     11 → premier
**     13 → premier
**
** RÉSULTAT ATTENDU :
**
** Si l'utilisateur entre :
**
**     17
**
** Afficher :
**
**     17 est premier
**
** Si l'utilisateur entre :
**
**     12
**
** Afficher :
**
**     12 n'est pas premier
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - Demande le nombre avec scanf.
** - Utilise l'opérateur % pour tester les divisions.
** - Tu dois rechercher un éventuel diviseur.
** - Utilise une variable pour parcourir les nombres à tester.
**
** 💡 INDICE :
**
** Pour savoir si 12 est divisible par un autre nombre,
** tu peux tester :
**
**     12 % 2
**     12 % 3
**     12 % 4
**     ...
**
** Si le résultat est égal à 0, alors le nombre est divisible
** par le nombre testé.
**
** Exemple :
**
**     12 % 3 == 0
**
** signifie que 3 est un diviseur de 12.
**
** 💡 RÉFLEXION :
**
** Pose-toi ces questions avant de coder :
**
** 1. Par quel nombre dois-tu commencer les tests ?
** 2. Jusqu'à quel nombre dois-tu tester ?
** 3. Que dois-tu faire si tu trouves un diviseur ?
** 4. Comment indiquer à ton programme qu'il a trouvé un diviseur ?
** 5. Que dois-tu faire pour les nombres inférieurs ou égaux à 1 ?
**
** ⚠️ ATTENTION :
**
** Un nombre inférieur ou égal à 1 n'est pas premier.
**
** BONUS :
**
** Essaie ensuite d'optimiser ton programme pour éviter
** de tester inutilement trop de nombres.
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