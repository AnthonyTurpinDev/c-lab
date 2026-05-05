// Créer un tableau de 5 entiers {5,10,15,20,25}. Calculer et afficher la somme.

#include <stdio.h>

int main(void) {
    int t[5] = {5,10,15,20,25};
    int somme = 0;

    for (int i = 0; i < 5 ; i++) {
        somme = somme + t[i];      

    }
    printf("%d\n", somme);
}
