// Demander une phrase avec fgets, enlever le \n, puis afficher la phrase à l'envers.
#include <stdio.h>
#include <string.h>

int main(void) {

    char x[100]; 
    int i, len;  // Déclaration de len ici (pas besoin de len tout en bas)
    
    printf("phrase: ");
    fgets(x, 100, stdin);

    len = strlen(x);        // Supprimé le "int" pour ne pas redéclarer
    if (len > 0 && x[len-1] == '\n') {
        x[len-1] = '\0';    // Correction du point-virgule ici
        len--;              // Réduire len car on a enlevé \n
    }

    printf("phrase a l'envers: ");
    for (i = len - 1; i >= 0; i--) {  // Correction : i=... et ; au lieu de ,
        printf("%c", x[i]);
    }

    printf("\n");

    return 0;
}