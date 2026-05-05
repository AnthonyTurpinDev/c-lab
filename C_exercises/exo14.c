//  Demander une phrase avec fgets, supprimer le \n, compter et afficher le nombre de voyelles.

#include <stdio.h>
#include <string.h>

int main(void) {
    char t[100];
    int i, len , voyelles;
    printf("phrase");
    fgets(t, 100, stdin);

    int len = strlen(t);
    if (t[len-1] == '\n') {
        t[len-1] = '\0';
    }

    for (int i = 0; i < len; i++) {
        char c = t[i];
        if ( c == c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            voyelles++;
            }
    }

}