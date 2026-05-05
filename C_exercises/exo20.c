// Écris les 3 lignes pour :
#include <stdio.h>
#include <string.h>

int main (void) {
// Déclarer une chaîne str de 100 caractères
 char t[100];

// Lire une phrase avec fgets
printf("donne une phrase : ")
tgets(t, 100, stdin);

// Supprimer le \n
int len = strlen[t];
if (t[len-1] == "\n") {
    t[len-1] = "\0"
}

}
