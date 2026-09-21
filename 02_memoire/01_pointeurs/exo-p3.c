#include <stdio.h>

int main (void) 
{
    int x = 42;
    int *p = &x;

    printf("valeur :%d\n", x);
    printf("valeur :%d\n", *p);
    printf("valeur :%p\n", (void*)p);
    printf("valeur :%d\n", x);

    return 0;
}