// 4. Si note >= 10 affiche "OK" sinon "KO"
#include <stdio.h>

int note = 5; 
int x = 10;

void loop() {
    if (note >= 10 ) {
        printf("OK\n");
    } else {
        printf("KO\n");
    }
    return;
}

void test2() {
    if (x >= 0 ) {
        printf("Positif\n");
    } else {
        printf("negatif\n");
    }
    return;
}



   
// 5. Si x > 0 affiche "positif" sinon si x < 0 affiche "negatif"