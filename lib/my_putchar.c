#include <unistd.h>

void my_putchar(char character)
{
    (void)write(1, &character, 1);
}
