#include <stdio.h>

/*
** EXERCICE : Puissance
**
** FICHIER : 14_power.c
**
** OBJECTIF :
**
** Créer une fonction qui calcule une puissance
** en utilisant une boucle.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     int power(int base, int exponent)
**
** La fonction doit calculer :
**
**     base^exponent
**
**
** EXEMPLES :
**
**     2²  = 4
**     2³  = 8
**     5²  = 25
**     10³ = 1000
**
** Exemple d'appel :
**
**     power(2, 5) → 32
**
** Car :
**
**     2 × 2 × 2 × 2 × 2 = 32
**
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - Utilise un compteur.
** - Utilise une variable pour accumuler le résultat.
** - La fonction doit retourner un int.
** - Utilise return.
** - N'utilise pas la fonction pow().
**
**
** 💡 RÉFLEXION :
**
** Une puissance correspond à plusieurs multiplications
** de la même base.
**
** Par exemple :
**
**     3^4
**
** correspond à :
**
**     3 × 3 × 3 × 3
**
** Pose-toi ces questions :
**
** 1. Quelle doit être la valeur initiale du résultat ?
**
** 2. Combien de fois dois-tu multiplier la base ?
**
** 3. Quelle variable utiliser pour compter les multiplications ?
**
** 4. Comment faire évoluer ton compteur ?
**
** 5. Quelle condition doit arrêter la boucle ?
**
**
** ⚠️ CAS PARTICULIER :
**
** Réfléchis également au cas :
**
**     power(5, 0)
**
** Rappelle-toi qu'un nombre élevé à la puissance 0
** vaut 1.
**
**
** ============================================
** TEST DANS MAIN()
** ============================================
**
** Teste au minimum :
**
**     power(2, 2)  → 4
**     power(2, 3)  → 8
**     power(2, 5)  → 32
**     power(5, 2)  → 25
**     power(10, 3) → 1000
**     power(5, 0)  → 1
**
**
** 🔥 OBJECTIF PISCINE :
**
** Essaie de comprendre la logique avant de coder.
**
** Tu dois être capable d'expliquer :
**
**     base
**     exponent
**     compteur
**     résultat
**
** et le rôle de chacun dans la boucle.
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    while (p > 0) {
        result = result * nb;
        p--;
    }
    return (result);
}

int main(void)
{
    printf("2^2  = %d (attendu : 4)\n", my_compute_power_it(2, 2));
    printf("2^3  = %d (attendu : 8)\n", my_compute_power_it(2, 3));
    printf("2^5  = %d (attendu : 32)\n", my_compute_power_it(2, 5));
    printf("5^2  = %d (attendu : 25)\n", my_compute_power_it(5, 2));
    printf("10^3 = %d (attendu : 1000)\n", my_compute_power_it(10, 3));
    printf("5^0  = %d (attendu : 1)\n", my_compute_power_it(5, 0));
    return (0);
}