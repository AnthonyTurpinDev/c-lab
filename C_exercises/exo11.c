// Demander une phrase à l'utilisateur avec fgets, supprimer le \n, puis l'afficher normalement.

#include <stdio.h>
#include <string.h>

int main(void) {
    char x[100];

    printf("demande au utilisateur: ");
    fgets(x, 100, stdin);

    int len = strlen(x);
    if (x[len-1] == "\n") {
        x[len-1] = "\0";
    }
    printf("%s\n", x);
}