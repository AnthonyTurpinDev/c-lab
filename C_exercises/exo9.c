// Écrire une fonction double_valeur(int x) qui retourne x*2. L'appeler dans main.

#include <stdio.h>

int double_valeur(int x) {
   return x * 2;
}

int main(void) {
    int a = double_valeur(7);
    printf("%d\n", a);
    return 0; 
}