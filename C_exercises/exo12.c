// Demander une phrase avec fgets, supprimer le \n, puis afficher la phrase à l'envers.

#include <stdio.h>
#include <string.h>

int main(void) {
    char x[100];
    int i, len; 
    printf("donne moi une phrase:", x);
    fgets(x, 100, stdin);

    len = strlen(x);
    if (x[len-1] == "\n") {
        x[len-1] = '\0'; 
    }

    len = strlen(x);

    printf("À l'envers : ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;





}