
#include <stdio.h>

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 10;
    int b = 20;

    printf("Avant :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    my_swap(&a, &b);

    printf("Après :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
