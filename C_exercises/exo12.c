// Demander une phrase avec fgets, supprimer le \n, puis afficher la phrase à l'envers.

#include <stdio.h>
#include <string.h>

int main(void) {
    char x[100];
    int i, len;
    printf("demande : ");
    fgets(x, 100, stdin);

    int len = strlen(x);
    if (x[len-1] == '\n') {
        x[len-1] = '\0';
    }

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", x[i]);
    }
    printf("%c\n", x);
} 