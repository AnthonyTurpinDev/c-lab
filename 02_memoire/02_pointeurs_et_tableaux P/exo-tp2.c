#include <stdio.h>

int main(void)
{
    int tab[3] = {10, 20, 30};

    int *p = tab;

    printf("%d\n", *(tab + 1));

    return 0;
}