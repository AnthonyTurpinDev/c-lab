#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *file = NULL;

    if (argc != 2)
        return 84;
    file = fopen(argv[1], "r");
    if (file == NULL)
        return 84;
    /* TODO: compter lignes, mots, caracteres et trouver le mot le plus long. */
    fclose(file);
    return 0;
}
