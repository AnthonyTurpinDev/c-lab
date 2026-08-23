#include <stdio.h>

int main(void)
{
    int value = 42;
    int *pointer = &value;
    int **double_pointer = &pointer;

    **double_pointer = 84;
    printf("x = %d, *p = %d, **pp = %d\n", value, *pointer, **double_pointer);
    return 0;
}
