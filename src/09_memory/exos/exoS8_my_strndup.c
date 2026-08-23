#include <stdlib.h>

static char *my_strndup(char *source, int max_length)
{
    (void)source;
    (void)max_length;
    /* TODO: copier au plus max_length caracteres et ajouter \0. */
    return NULL;
}

int main(void)
{
    char *copy = my_strndup("C-Lab", 3);

    free(copy);
    return 0;
}
