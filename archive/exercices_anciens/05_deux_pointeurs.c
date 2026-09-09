#include <stdio.h>

/*
** EXERCICE : Deux variables
**
** CONSIGNE :
**
** Déclarer deux variables entières :
**
**     int a = 10;
**     int b = 20;
**
** Puis créer :
**
**     - un pointeur vers a
**     - un pointeur vers b
**
** Afficher d'abord directement les variables :
**
**     a = 10
**     b = 20
**
** Puis afficher leurs valeurs en utilisant
** uniquement les pointeurs.
**
** À TRAVAILLER :
**
** - créer plusieurs pointeurs
** - utiliser &
** - utiliser *
** - associer chaque pointeur à la bonne variable
** - accéder à une valeur grâce à un pointeur
**
** RAPPEL :
**
** Si p_a contient l'adresse de a :
**
**     p_a  → adresse de a
**     *p_a → valeur de a
**
** Si p_b contient l'adresse de b :
**
**     p_b  → adresse de b
**     *p_b → valeur de b
**
** ⚠️ CONTRAINTE :
**
** Les deux pointeurs doivent pointer vers
** les bonnes variables.
**
** OBJECTIF FINAL :
**
** Comprendre qu'on peut utiliser plusieurs pointeurs
** pour accéder à plusieurs variables différentes.
**
** QUESTION À TE POSER :
**
** Que se passe-t-il si tu affiches *p_a et *p_b ?
**
** Quelle valeur obtiens-tu pour chacun ?
*/

int main () {

    int a = 10;
    int b = 20;
    int *p = &a;
    int *q = &b;

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("pointeur a:%p\n",p);
    printf("pointeur b:%p\n",q);

    return 0;
};