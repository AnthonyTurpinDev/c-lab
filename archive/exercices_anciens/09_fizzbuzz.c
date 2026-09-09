

/*
** EXERCICE : FizzBuzz
**
** CONSIGNE :
**
** Écrire un programme qui parcourt les nombres
** de 1 à 100.
**
** Pour chaque nombre :
**
**     - s'il est divisible par 3, afficher "Fizz"
**     - s'il est divisible par 5, afficher "Buzz"
**     - s'il est divisible par 3 ET par 5,
**       afficher "FizzBuzz"
**     - sinon, afficher le nombre
**
** RÉSULTAT ATTENDU — DÉBUT :
**
**     1
**     2
**     Fizz
**     4
**     Buzz
**     Fizz
**     7
**     8
**     Fizz
**     Buzz
**     11
**     Fizz
**     13
**     14
**     FizzBuzz
**     16
**     ...
**
** CONTRAINTES :
**
** Tu dois utiliser :
**
**     - une boucle while
**     - if / else
**     - l'opérateur %
**
** Tu dois parcourir les nombres de 1 à 100
** avec une variable i.
**
** 💡 POINT IMPORTANT :
**
** Fais attention à l'ORDRE des conditions.
**
** Le nombre 15 est divisible par :
**
**     3
**     5
**
** Il doit donc afficher :
**
**     FizzBuzz
**
** et non simplement :
**
**     Fizz
**
** ou :
**
**     Buzz
**
** AVANT DE CODER, RÉFLÉCHIS À :
**
**     1. Quelle condition doit être vérifiée en premier ?
**
**     2. Comment vérifier qu'un nombre est divisible par 3 ?
**
**     3. Comment vérifier qu'un nombre est divisible par 5 ?
**
**     4. Comment vérifier qu'un nombre est divisible
**        par 3 ET par 5 ?
**
**     5. Quelle instruction utiliser si aucune condition
**        n'est vraie ?
**
** OBJECTIF FINAL :
**
** Comprendre comment combiner plusieurs conditions
** dans une boucle while.
**
** QUESTION À TE POSER :
**
** Pourquoi la condition "divisible par 3 ET 5"
** doit-elle être testée avant la condition
** "divisible par 3" ?
*/

#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;
}