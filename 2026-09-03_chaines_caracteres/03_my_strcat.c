/*
** EXERCICE : my_strcat
**
** Recoder la fonction strcat() de la bibliothèque string.h.
**
** PROTOTYPE :
**
** char *my_strcat(char *dest, char *src);
**
** CONTRAINTES :
**
** - Ne pas inclure <string.h>.
** - Ne pas utiliser strcat().
** - Trouver la fin de dest.
** - Copier src à partir de cette position.
** - Copier également le caractère '\0'.
** - Utiliser des pointeurs.
** - Retourner dest.
** - Vérifier que dest possède suffisamment d'espace.
**
** EXEMPLE :
**
** dest : "Bonjour "
** src  : "Anthony"
**
** Résultat :
** "Bonjour Anthony"
**
** OBJECTIF :
**
** Apprendre à parcourir une chaîne jusqu'à sa fin puis
** à ajouter une deuxième chaîne à sa suite.
*/