/*
** EXERCICE : my_strncpy
**
** Recoder la fonction strncpy() de la bibliothèque string.h.
**
** PROTOTYPE :
**
** char *my_strncpy(char *dest, char *src, int n);
**
** CONTRAINTES :
**
** - Ne pas inclure <string.h>.
** - Ne pas utiliser strncpy().
** - Copier au maximum n caractères.
** - Si src est plus courte que n caractères, compléter
**   dest avec des '\0'.
** - Ne jamais copier plus de n caractères.
** - Utiliser des pointeurs.
** - Retourner dest.
**
** EXEMPLES :
**
** src = "Bonjour"
** n = 4
**
** dest = "Bonj"
**
** AUTRE CAS :
**
** src = "Hi"
** n = 5
**
** dest = "Hi\0\0\0"
**
** OBJECTIF :
**
** Comprendre la copie contrôlée d'une chaîne et la gestion
** de la taille maximale à copier.
*/