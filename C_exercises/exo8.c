// Pair ou impair
#include <stdio.h>

int main(void) {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n %2 == 0 ) {
        printf("pair\n", n);
    } else {
        printf("impair\n", n);
    }
   return 0;
}