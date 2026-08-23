#include <stdio.h>

int main(void)
{
    int age = 0;

    printf("Age: ");
    if (scanf("%d", &age) != 1)
        return 1;
    printf("Tu as %d ans.\n", age);
    return 0;
}
