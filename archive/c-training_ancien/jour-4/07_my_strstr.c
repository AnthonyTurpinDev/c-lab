/*
** EXERCICE : my_strstr
**
** Recoder la fonction strstr() de la bibliothèque string.h.
**
** La fonction doit rechercher une sous-chaîne dans une
** chaîne principale.
**
** PROTOTYPE :
**
** char *my_strstr(char *str, char *to_find);
**
** CONTRAINTES :
**
** - Ne pas inclure <string.h>.
** - Ne pas utiliser strstr().
** - Rechercher la première occurrence de to_find dans str.
** - Comparer les caractères un par un.
** - Retourner un pointeur vers le début de la sous-chaîne trouvée.
** - Retourner NULL si la sous-chaîne n'est pas trouvée.
** - Utiliser des pointeurs.
**
** EXEMPLE :
**
** str      = "Bonjour tout le monde"
** to_find  = "tout"
**
** Résultat :
** Retourner un pointeur vers "tout le monde".
**
** CAS PARTICULIER :
**
** Si to_find est une chaîne vide, retourner str.
**
** OBJECTIF :
**
** Apprendre à rechercher une séquence de caractères dans
** une autre chaîne et à manipuler plusieurs pointeurs.
*/