#include <stdio.h>

/*
** EXERCICE : Swap
**
** CONSIGNE :
**
** Créer une fonction :
**
**     void swap(int *a, int *b)
**
** Dans main(), déclarer deux variables :
**
**     int a = 10;
**     int b = 20;
**
** Afficher leurs valeurs avant l'échange :
**
**     a = 10
**     b = 20
**
** Puis appeler la fonction swap() en lui transmettant
** les adresses de a et de b.
**
** Après l'appel, afficher les nouvelles valeurs :
**
**     a = 20
**     b = 10
**
** ⚠️ EXERCICE IMPORTANT :
**
** Tu dois utiliser les pointeurs pour modifier
** directement les variables a et b.
**
** Tu auras besoin d'une variable temporaire pour
** réaliser correctement l'échange.
**
** À TRAVAILLER :
**
** - fonctions
** - paramètres
** - pointeurs
** - opérateur &
** - opérateur *
** - échange de deux variables
**
** POINT IMPORTANT :
**
** Compare avec une fonction classique :
**
**     void swap(int a, int b)
**
** Une telle fonction reçoit des copies des valeurs.
**
** Modifier a et b à l'intérieur de cette fonction
** ne modifie donc pas les variables originales
** présentes dans main().
**
** Avec :
**
**     void swap(int *a, int *b)
**
** la fonction reçoit les adresses des variables.
**
** Elle peut donc modifier directement leurs valeurs
** grâce à *a et *b.
**
** OBJECTIF FINAL :
**
** Comprendre pourquoi les pointeurs permettent à une
** fonction de modifier les variables originales.
**
** QUESTION À TE POSER :
**
** Quelle est la différence entre transmettre :
**
**     swap(a, b)
**
** et :
**
**     swap(&a, &b)
**
** Pourquoi la deuxième version permet-elle
** de modifier les variables originales ?
*/

void swap(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;

}
int main () {

    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b =%d\n", b);
}