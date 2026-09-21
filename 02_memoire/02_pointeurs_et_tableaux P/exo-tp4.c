#include <stdio.h>

int main(void)
{
    int tab[3] = {10, 20, 30};
    int *p = tab;

    printf("colone 1 :%d\n", *(p + 0));
    printf("colone 2 :%d\n", *(p + 1));
    printf("colone 3 :%d\n", *(p + 2));

    return 0;
}