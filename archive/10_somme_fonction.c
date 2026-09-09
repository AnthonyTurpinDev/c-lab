/*
** EXERCICE : Somme d'un tableau avec une fonction
**
** FICHIER : 10_somme_fonction.c
**
** OBJECTIF :
**
** Apprendre à envoyer un tableau à une fonction
** et à récupérer une valeur calculée par cette fonction.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Crée une fonction :
**
**     int sum_array(int tab[], int size)
**
**
** Cette fonction doit parcourir le tableau et
** retourner la somme de tous ses éléments.
**
**
** ============================================
** EXEMPLE
** ============================================
**
** Tableau :
**
**     int tab[] = {1, 2, 3, 4, 5};
**
**
** Appel :
**
**     sum_array(tab, 5)
**
**
** Résultat :
**
**     15
**
**
** Car :
**
**     1 + 2 + 3 + 4 + 5 = 15
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - La fonction doit s'appeler sum_array().
** - Elle doit retourner un int.
** - Elle doit recevoir deux paramètres :
**
**       int tab[]
**       int size
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise une variable somme.
** - La fonction doit retourner la somme avec return.
** - Utilise "size" pour savoir combien d'éléments
**   parcourir.
**
**
** ⚠️ INTERDICTION :
**
** Ne calcule pas directement :
**
**     1 + 2 + 3 + 4 + 5
**
** La fonction doit parcourir le tableau.
**
**
** ============================================
** DANS main()
** ============================================
**
** Crée le tableau :
**
**     int tab[] = {1, 2, 3, 4, 5};
**
**
** Appelle ensuite :
**
**     sum_array(tab, 5)
**
**
** Affiche le résultat :
**
**     Somme = 15
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Observe ce qui se passe :
**
**     main()
**        ↓
**     sum_array(tab, 5)
**        ↓
**     la fonction reçoit le tableau
**        ↓
**     la boucle parcourt le tableau
**        ↓
**     la somme est calculée
**        ↓
**     return renvoie la somme à main()
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi envoyer "tab" à la fonction ?
**
** 2. Pourquoi envoyer "size" ?
**
** 3. Comment accéder aux éléments depuis la fonction ?
**
** 4. Où dois-tu initialiser la somme ?
**
** 5. Que doit retourner la fonction ?
**
**
** ============================================
** TESTS
** ============================================
**
** Teste également :
**
**     {10, 20, 30} → 60
**
**     {5, 5, 5, 5} → 20
**
**     {100, 200} → 300
**
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre cette nouvelle structure :
**
**     int sum_array(int tab[], int size)
**
**
** Un tableau peut être envoyé à une fonction
** comme paramètre.
**
** Tu combines maintenant :
**
**     tableau
**        +
**     fonction
**        +
**     paramètres
**        +
**     boucle
**        +
**     accumulateur
**        +
**     return
**
** C'est une notion très importante pour la suite.
*/

#include <stdio.h>

int sum_array(int tab[], int size)
{
    int indice = 0;
    int somme = 0;

    while (indice < size)
    {
        somme = somme + tab[indice];
        indice++;
    }

    return somme;
}

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};

    printf("Somme = %d\n", sum_array(tab, 5));

    return 0;
}