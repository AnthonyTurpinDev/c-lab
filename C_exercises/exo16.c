// Demander une phrase à l'utilisateur avec fgets, enlever le \n, puis l'afficher.

#include <stdio.h>
#include <string.h>

int main(void) {

    char x[100]; 
printf("phrase:");
fget(x, 100, stdin);

int len = strlen(x); 
if (x[len-1] == '\n') {
    x[len-1] = '\0'
 ;}
 return 0;
}

