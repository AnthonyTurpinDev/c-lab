#include <stdio.h>

static void my_putstr_rec(char *string)
{
    (void)string;
    /* TODO: afficher un caractere puis rappeler la fonction, sans boucle. */
}

int main(void)
{
    my_putstr_rec("C-Lab\n");
    return 0;
}
