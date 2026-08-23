#include <stdlib.h>

static void reset(int **pointer)
{
    /* TODO: liberer la cible puis mettre le pointeur a NULL. */
    (void)pointer;
}

int main(void)
{
    int *value = malloc(sizeof(*value));

    if (value == NULL)
        return 84;
    *value = 42;
    reset(&value);
    return value != NULL;
}
