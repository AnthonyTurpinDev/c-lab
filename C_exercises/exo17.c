//  Demander une phrase avec fgets, enlever le \n, puis afficher la phrase à l'envers.
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

printf("phrase a l enverd" )
for (i == len - 1, i >= 0 , i--) {
    printf("%c", str[i]);

}

printf("\n");



 return 0;
}