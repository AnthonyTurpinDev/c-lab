/*
** EXERCICE : my_strcmp
**
** Recoder la fonction strcmp() de la bibliothèque string.h.
**
** PROTOTYPE :
**
** int my_strcmp(char *s1, char *s2);
**
** CONTRAINTES :
**
** - Ne pas inclure <string.h>.
** - Ne pas utiliser strcmp().
** - Comparer les caractères des deux chaînes dans l'ordre.
** - Arrêter la comparaison lorsqu'une différence est trouvée
**   ou lorsqu'une chaîne se termine.
** - Retourner 0 si les chaînes sont identiques.
** - Retourner une valeur négative si s1 est inférieure à s2.
** - Retourner une valeur positive si s1 est supérieure à s2.
** - Utiliser des pointeurs.
**
** EXEMPLES :
**
** my_strcmp("abc", "abc") -> 0
** my_strcmp("abc", "abd") -> valeur négative
** my_strcmp("abd", "abc") -> valeur positive
**
** OBJECTIF :
**
** Comprendre la comparaison caractère par caractère
** et l'ordre des caractères.
*/