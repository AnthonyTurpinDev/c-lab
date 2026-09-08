#include <stdio.h>

/*
** EXERCICE : Compter jusqu'à N
**
** FICHIER : 09_count_to_n.c
**
** OBJECTIF :
**
** Apprendre à utiliser une boucle à l'intérieur
** d'une fonction.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     void count_to_n(int n)
**
** La fonction doit afficher tous les nombres
** de 1 jusqu'à n.
**
** EXEMPLE :
**
**     count_to_n(5)
**
** Résultat attendu :
**
**     1
**     2
**     3
**     4
**     5
**
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - La boucle doit être située dans la fonction count_to_n().
** - La fonction ne retourne aucune valeur.
** - Utilise un compteur pour parcourir les nombres.
**
**
** 💡 RÉFLEXION :
**
** Tu connais déjà les boucles while.
**
** La nouveauté est que cette fois, la boucle
** se trouve à l'intérieur d'une fonction.
**
** Pose-toi ces questions :
**
** 1. Quelle doit être la valeur initiale du compteur ?
**
** 2. Quelle condition doit arrêter la boucle ?
**
** 3. Comment faire évoluer le compteur ?
**
** 4. Où dois-tu placer printf() ?
**
** 5. Pourquoi la fonction est-elle de type void ?
**
**
** ============================================
** TEST DANS MAIN()
** ============================================
**
** Dans main(), appelle la fonction avec plusieurs valeurs :
**
**     count_to_n(3);
**     count_to_n(5);
**     count_to_n(10);
**
** Observe comment le paramètre n influence
** le nombre de tours de la boucle.
**
**
** 🎯 OBJECTIFS À VALIDER :
**
** - Créer une fonction avec un paramètre.
** - Utiliser une boucle while dans une fonction.
** - Utiliser un compteur.
** - Comprendre que le paramètre n peut contrôler
**   une boucle.
** - Appeler plusieurs fois la même fonction.
*/

void count_to_n(int n) {

    while (n > 0 )
    {
        printf("compte :%d\n", n);
        n--;
    }
    

};

int main (void) {

     int n = 10;

    count_to_n(n);
    return 0;

};