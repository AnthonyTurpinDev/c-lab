#include <stdio.h>

static int fibonacci_recursive(int number)
{
    (void)number;
    /* TODO: implementer la version recursive. */
    return 0;
}

static int fibonacci_iterative(int number)
{
    (void)number;
    /* TODO: implementer la version iterative. */
    return 0;
}

int main(void)
{
    printf("recursive=%d iterative=%d\n", fibonacci_recursive(40),
        fibonacci_iterative(40));
    /* TODO: comparer les temps d'execution des deux versions. */
    return 0;
}
