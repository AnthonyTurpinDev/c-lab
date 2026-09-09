/*
** EXERCICE : Compter les nombres pairs
**
** FICHIER : 15_count_even.c
**
** OBJECTIF :
**
** Combiner plusieurs notions :
**
**     fonction
**     paramètres
**     return
**     boucle
**     condition
**
**
** ============================================
** PARTIE 1 — FONCTION is_even()
** ============================================
**
** Crée une fonction :
**
**     int is_even(int n)
**
** Elle doit retourner :
**
**     1 → si n est pair
**     0 → si n est impair
**
** Exemples :
**
**     is_even(4) → 1
**     is_even(7) → 0
**     is_even(10) → 1
**
**
** ============================================
** PARTIE 2 — FONCTION count_even()
** ============================================
**
** Crée ensuite une fonction :
**
**     int count_even(int n)
**
** Cette fonction doit compter combien de nombres pairs
** existent entre 0 et n.
**
**
** EXEMPLE :
**
**     count_even(10)
**
** doit retourner :
**
**     6
**
** Car les nombres pairs sont :
**
**     0
**     2
**     4
**     6
**     8
**     10
**
** Il y a donc 6 nombres pairs.
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while dans count_even().
** - Utilise ta fonction is_even() à l'intérieur
**   de count_even().
** - Utilise un compteur.
** - Utilise une condition.
** - count_even() doit retourner le compteur avec return.
** - Ne recode pas la vérification "pair ou impair"
**   directement dans count_even().
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Dans count_even(), tu dois parcourir les nombres :
**
**     0 → 1 → 2 → 3 → ... → n
**
** Pour chaque nombre, demande-toi :
**
**     "Est-ce que ce nombre est pair ?"
**
** Pour répondre à cette question, utilise :
**
**     is_even()
**
** Si le nombre est pair :
**
**     augmente le compteur.
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle doit être la valeur initiale du compteur ?
**
** 2. Quelle valeur doit avoir ton nombre au départ ?
**
** 3. Comment faire avancer ce nombre ?
**
** 4. Quand dois-tu arrêter la boucle ?
**
** 5. Que doit retourner count_even() ?
**
**
** ============================================
** TESTS
** ============================================
**
** Teste au minimum :
**
**     count_even(0)  → 1
**     count_even(1)  → 1
**     count_even(5)  → 3
**     count_even(10) → 6
**     count_even(20) → 11
**
**
** ⚠️ ATTENTION :
**
** Le nombre 0 est pair.
**
** Donc :
**
**     count_even(0) → 1
**
** car la liste contient :
**
**     0
**
**
** 🔥 OBJECTIF PISCINE :
**
** Tu dois être capable d'expliquer le rôle de chaque
** fonction et pourquoi count_even() utilise is_even().
*/

/*
** EPITECH PROJECT, 2026
** 15_count_even
** File description:
** Counts even numbers from 0 to n using a helper function
*/

#include <stdio.h>

/*
** Verifie si un nombre est pair.
** Retourne 1 si pair, 0 si impair.
*/
int is_even(int n)
{
    if (n % 2 == 0)
        return (1);
    return (0);
}

/*
** Compte le nombre de pairs de 0 a n.
** Utilise is_even() comme fonction auxiliaire.
*/
int count_even(int n)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i <= n) {
        if (is_even(i))
            count++;
        i++;
    }
    return (count);
}

int main(void)
{
    printf("count_even(0)  = %d (attendu: 1)\n", count_even(0));
    printf("count_even(1)  = %d (attendu: 1)\n", count_even(1));
    printf("count_even(5)  = %d (attendu: 3)\n", count_even(5));
    printf("count_even(10) = %d (attendu: 6)\n", count_even(10));
    printf("count_even(20) = %d (attendu: 11)\n", count_even(20));
    return (0);
}