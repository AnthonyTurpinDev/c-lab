// Créer un tableau de 5 notes, calculer la moyenne, afficher avec 2 décimales.

#include <stdio.h>

int main(void) {

    char t[5] = {5,8,16,14,20};
    int somme = 0 ; 
   
    for (int i = 0 ; i < 5 ; i++) {
        somme += t[i];
    }

    float moyenne = (float)somme / 5;
    printf("%2.f\n", moyenne);

    return 0;
}