#include <stdio.h>

int main (void) 
{
    int x = 42; 
    int *p = &x;  


    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", p);
    printf("%d\n",*p);

    return 0;
}