#include <stdio.h> 

void increment(int *p) 
{ 
    for (int i = 0; i < 3; i++) 
    { 
        *p = *p + 1; 
        p++; 
    } 
} 
int main(void) 
{ 
    int tab[3] = {10, 20, 30}; 

    increment(tab); 

    printf("%d\n", tab[0]); 
    printf("%d\n", tab[1]); 
    printf("%d\n", tab[2]); 

    return 0; 
};