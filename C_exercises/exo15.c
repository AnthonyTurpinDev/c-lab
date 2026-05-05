// Créer un tableau de mots {"zéro","un","deux",...,"neuf"}. Demander un caractère, afficher le mot correspondant.

#include <stdio.h>

int main(void) {
    char *t[] = {"zéro","un","deux","trois","quatre","cinq","six","sept","huit","neuf"}; 

        char c ;
        printf( "donne 0 a 9 : ");
        scanf("%c", &c);

        if ( c >= '0'&& c <= '9') {
            int chiffre = c - '0';
            printf("%s\n", t[chiffre]);
        } else {
             printf("Ce n'est pas un chiffre\n");
        }
        return 0; 
}