#include "my.h"

void my_putstr(const char *string)
{
    if (string == NULL)
        return;
    while (*string != '\0') {
        my_putchar(*string);
        string++;
    }
}
