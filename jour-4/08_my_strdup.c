/*
** EXERCICE : my_strdup
**
** Recoder la fonction strdup() de la bibliothèque string.h.
**
** Cette fonction doit créer une copie dynamique d'une chaîne.
**
** PROTOTYPE :
**
** char *my_strdup(char *str);
**
** CONTRAINTES :
**
** - Ne pas inclure <string.h>.
** - Ne pas utiliser strdup().
** - Calculer la longueur de la chaîne.
** - Allouer suffisamment de mémoire avec malloc().
** - Prévoir un espace supplémentaire pour '\0'.
** - Vérifier que malloc() a réussi.
** - Copier la chaîne dans la nouvelle zone mémoire.
** - Retourner un pointeur vers la nouvelle chaîne.
** - En cas d'échec de malloc(), retourner NULL.
** - La mémoire créée avec malloc() devra être libérée
**   avec free() après utilisation.
**
** EXEMPLE :
**
** str = "Bonjour"
**
** Résultat :
** Une nouvelle chaîne contenant "Bonjour" est créée
** dans une nouvelle zone mémoire.
**
** IMPORTANT :
**
** La chaîne retournée doit être indépendante de la chaîne
** originale.
**
** OBJECTIF :
**
** Faire tes premiers vrais exercices d'allocation dynamique
** avec malloc(), vérifier un pointeur et comprendre la gestion
** de la mémoire.
**
** BONUS :
**
** - Utiliser my_strlen() et my_strcpy() dans my_strdup().
** - Tester le comportement lorsque malloc() échoue.
** - Vérifier avec free() qu'aucune mémoire n'est laissée
**   inutilement allouée.
*/