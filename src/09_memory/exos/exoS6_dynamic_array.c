#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 0;
    int *array = NULL;

    printf("Taille: ");
    if (scanf("%d", &size) != 1 || size < 1)
        return 84;
    array = malloc((size_t)size * sizeof(*array));
    if (array == NULL)
        return 84;
    /* TODO: saisir, afficher et liberer les valeurs du tableau. */
    free(array);
    return 0;
}
