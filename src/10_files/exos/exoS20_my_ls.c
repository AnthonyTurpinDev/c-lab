#include <dirent.h>
#include <stdio.h>

int main(void)
{
    DIR *directory = opendir(".");

    if (directory == NULL)
        return 84;
    /* TODO: lire les entrees, les trier et afficher leur taille avec stat(). */
    closedir(directory);
    return 0;
}
