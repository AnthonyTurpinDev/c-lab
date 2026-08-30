/*
** EXERCICE : my_strchr
**
** Recoder la fonction strchr() de la bibliothèque string.h.
**
** La fonction doit rechercher la première occurrence
** d'un caractère dans une chaîne.
**
** PROTOTYPE :
**
** char *my_strchr(char *str, char c);
**
** CONTRAINTES :
**
** - Ne pas inclure <string.h>.
** - Ne pas utiliser strchr().
** - Parcourir la chaîne caractère par caractère.
** - Comparer chaque caractère avec c.
** - Retourner un pointeur vers la première occurrence trouvée.
** - Retourner NULL si le caractère n'est pas présent.
** - Utiliser des pointeurs.
**
** EXEMPLE :
**
** str = "bonjour"
** c   = 'o'
**
** La fonction doit retourner un pointeur vers le premier 'o'.
**
** OBJECTIF :
**
** Comprendre comment rechercher un caractère et retourner
** directement son adresse en mémoire.
*/