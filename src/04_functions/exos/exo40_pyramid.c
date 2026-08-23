#include <stdio.h>

/* Exo 40: saisir une hauteur et afficher une pyramide centree. */
int main(void)
{
    int height = 0;

    if (scanf("%d", &height) != 1 || height < 1)
        return 1;
    /* TODO: afficher espaces puis etoiles pour chaque ligne. */
    return 0;
}
