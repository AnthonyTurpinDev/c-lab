#include <stdio.h>

int main(void)
{
    int tab[3] = {10, 20, 30};

    int *p = &tab[0];

    printf("%d\n",*p);

    return 0;
}