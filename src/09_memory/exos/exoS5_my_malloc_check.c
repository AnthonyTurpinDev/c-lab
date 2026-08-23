#include <stdio.h>
#include <stdlib.h>

static void *my_malloc(size_t size)
{
    void *memory = malloc(size);

    if (memory == NULL) {
        fprintf(stderr, "Erreur: allocation memoire impossible\n");
        exit(84);
    }
    return memory;
}

int main(void)
{
    int *value = my_malloc(sizeof(*value));

    *value = 42;
    free(value);
    return 0;
}
