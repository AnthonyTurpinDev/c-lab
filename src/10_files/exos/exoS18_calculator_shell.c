#include <stdio.h>

int main(void)
{
    char line[256];

    /* TODO: lire jusqu'a EOF ou "exit", parser n op n et gerer les erreurs. */
    while (fgets(line, sizeof(line), stdin) != NULL)
        printf("TODO: %s", line);
    return 0;
}
