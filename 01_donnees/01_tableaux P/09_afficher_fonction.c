/*
** EXERCICE : Afficher un tableau avec une fonction
**
** FICHIER : 09_afficher_fonction.c
**
** OBJECTIF :
**
** Apprendre à envoyer un tableau à une fonction
** et à parcourir ce tableau depuis la fonction.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Crée une fonction :
**
**     void print_array(int tab[], int size)
**
**
** Cette fonction doit afficher tous les éléments
** du tableau, un par ligne.
**
**
** ============================================
** EXEMPLE
** ============================================
**
** Dans main(), crée le tableau :
**
**     int tab[] = {10, 20, 30, 40, 50};
**
**
** Puis appelle la fonction :
**
**     print_array(tab, 5);
**
**
** Résultat attendu :
**
**     10
**     20
**     30
**     40
**     50
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - La fonction doit s'appeler print_array().
** - Elle doit retourner void.
** - Elle doit recevoir deux paramètres :
**
**       int tab[]
**       int size
**
** - Utilise une boucle while dans print_array().
** - Utilise une variable d'indice.
** - Utilise printf() pour afficher les éléments.
** - Le tableau doit être parcouru dans la fonction,
**   pas directement dans main().
**
**
** ⚠️ INTERDICTION :
**
** Ne fais pas tous les printf() dans main().
**
** La fonction print_array() doit être responsable
** de l'affichage du tableau.
**
**
** ============================================
** COMPRENDRE LES PARAMÈTRES
** ============================================
**
** Dans :
**
**     print_array(tab, 5);
**
**
** "tab" permet de transmettre le tableau.
**
** "5" indique combien d'éléments doivent être parcourus.
**
**
** Dans la fonction :
**
**     void print_array(int tab[], int size)
**
**
** tu dois utiliser "size" pour savoir quand
** arrêter la boucle.
**
**
** ============================================
** QUESTIONS À TE POSER
** ============================================
**
** 1. Quelle valeur doit avoir l'indice au départ ?
**
** 2. Quelle condition utiliser avec "size" ?
**
** 3. Comment accéder à chaque élément ?
**
** 4. Comment faire évoluer l'indice ?
**
** 5. Pourquoi avons-nous besoin du paramètre "size" ?
**
**
** ============================================
** TESTS
** ============================================
**
** Teste également avec un autre tableau :
**
**     int tab2[] = {5, 15, 25};
**
** Puis :
**
**     print_array(tab2, 3);
**
**
** Résultat :
**
**     5
**     15
**     25
**
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre cette structure :
**
**     main()
**        ↓
**     print_array(tab, size)
**        ↓
**     boucle
**        ↓
**     tab[indice]
**
**
** Tu commences maintenant à combiner :
**
**     fonctions
**        +
**     tableaux
**        +
**     paramètres
**        +
**     boucles
*/

#include <stdio.h>

void print_array(int tab[], int size);

int main(void)
{
    int tab[] = {10, 20, 30, 40, 50};

    print_array(tab, 5);

    return 0;
}

void print_array(int tab[], int size)
{
    int indice = 0;

    while (indice < size)
    {
        printf("%d\n", tab[indice]);
        indice++;
    }
};