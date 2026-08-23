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
    int (*operations[4])(int, int) = {add, sub, mul, divide};

    (void)operations;
    /* TODO: parcourir le tableau et afficher chaque operation. */
    printf("TODO: tableau de pointeurs\n");
    return 0;
}
