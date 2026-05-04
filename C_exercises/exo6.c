// 9. Demande 2 nombres, affiche leur somme (utilise scanf)
#include <stdio.h>

int somme(int a, int b) { 
    return a + b;
}



// 10. Demande un nombre, affiche s'il est pair ou impair

int main () {
    int n; 
    scanf("%d", &n);
    if (n %2 ==0) {
        printf("paire\n");
    } else {
        printf("impaire\n");
    }
    return 0;
}