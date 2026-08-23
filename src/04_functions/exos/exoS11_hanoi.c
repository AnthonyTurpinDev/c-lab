#include <stdio.h>

static void hanoi(int number, char from, char to, char via)
{
    (void)number;
    (void)from;
    (void)to;
    (void)via;
    /* TODO: afficher chaque deplacement avec la recursion. */
}

int main(void)
{
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
