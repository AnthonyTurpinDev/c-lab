#include "my.h"

size_t my_strlen(const char *string)
{
    size_t length = 0;

    if (string == NULL)
        return 0;
    while (string[length] != '\0')
        length++;
    return length;
}
