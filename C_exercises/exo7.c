// Demander un nombre, afficher son double  

#include <stdio.h>

int main(void) {
     
    int x; 
    printf("demande un nombre: ");
    scanf("%d",&x);
    printf("Le double de %d est %d\n", x, x * 2);

    return 0; 
}