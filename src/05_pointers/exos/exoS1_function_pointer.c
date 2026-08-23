#include <stdio.h>

static int add(int left, int right)
{
    return left + right;
}

static int sub(int left, int right)
{
    return left - right;
}

static int mul(int left, int right)
{
    return left * right;
}

static int divide(int left, int right)
{
    return right == 0 ? 0 : left / right;
}

int main(void)
{
    int (*operation)(int, int) = add;

    (void)sub;
    (void)mul;
    (void)divide;
    (void)operation;
    /* TODO: assigner chaque operation au pointeur et afficher ses resultats. */
    printf("TODO: pointeur sur fonction\n");
    return 0;
}
