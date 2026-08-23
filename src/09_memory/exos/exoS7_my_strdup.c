#include <stdlib.h>

static char *my_strdup(char *source)
{
    (void)source;
    /* TODO: allouer strlen(source) + 1 puis copier le \0 final. */
    return NULL;
}

int main(void)
{
    char *copy = my_strdup("C-Lab");

    free(copy);
    return 0;
}
