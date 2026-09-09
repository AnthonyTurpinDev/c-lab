/*
** EXERCICE : Compter les nombres pairs
**
** FICHIER : 07_compter_pairs.c
**
** OBJECTIF :
**
** Apprendre à parcourir un tableau et à compter
** combien de ses éléments sont pairs.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Déclare le tableau suivant :
**
**     int tab[] = {1, 4, 7, 8, 10, 13, 16};
**
**
** Parcours le tableau avec une boucle et compte
** combien de nombres pairs sont présents.
**
**
** RÉSULTAT ATTENDU :
**
**     Il y a 4 nombres pairs.
**
**
** Les nombres pairs sont :
**
**     4
**     8
**     10
**     16
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise une variable compteur.
** - Utilise l'opérateur % pour vérifier si un nombre
**   est pair.
** - Affiche le nombre de nombres pairs avec printf().
**
**
** Pour savoir si un nombre est pair, utilise :
**
**     nombre % 2
**
**
** Si le résultat vaut 0, le nombre est pair.
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Ton programme doit parcourir :
**
**     tab[0]
**     tab[1]
**     tab[2]
**     ...
**     tab[6]
**
**
** Pour chaque élément, pose-toi la question :
**
**     "Est-ce que tab[indice] est divisible par 2 ?"
**
**
** Si oui :
**
**     augmente le compteur.
**
**
** ============================================
** QUESTIONS À TE POSER
** ============================================
**
** 1. Quelle doit être la valeur initiale du compteur ?
**
** 2. Quelle doit être la valeur initiale de l'indice ?
**
** 3. Combien d'éléments contient le tableau ?
**
** 4. Quelle condition utiliser avec % pour savoir
**    si un nombre est pair ?
**
** 5. Que dois-tu faire lorsque le nombre est pair ?
**
** 6. Quand la boucle doit-elle s'arrêter ?
**
**
** ⚠️ INTERDICTION :
**
** Ne compte pas manuellement les nombres pairs.
**
** Le programme doit fonctionner automatiquement
** si les valeurs du tableau changent.
**
**
** 🔥 OBJECTIF PISCINE :
**
** Maîtriser cette combinaison :
**
**     tableau
**        +
**     boucle
**        +
**     indice
**        +
**     condition
**        +
**     compteur
**        +
**     %
*/

#include <stdio.h>

int main(void)
{
    int tab[] = {1, 4, 7, 8, 10, 13, 16};

    int indice = 0;
    int compteur = 0;

    while (indice < 7)
    {
        if (tab[indice] % 2 == 0)
        {
            compteur++;
        }

        indice++;
    }

    printf("Il y a %d nombres pairs.\n", compteur);

    return 0;
}