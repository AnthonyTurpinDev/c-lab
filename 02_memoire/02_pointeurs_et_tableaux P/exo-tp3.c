#include <stdio.h>

int main(void)
{
    int tab[3] = {10, 20, 30};

    int *p = tab;

    *(tab + 1) = 50; 

    printf("%d\n", tab[1]);

    return 0;
}