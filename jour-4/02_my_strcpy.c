/*
** EXERCICE : my_strcpy
**
** Recoder la fonction strcpy() de la bibliothèque string.h.
**
** PROTOTYPE :
**
** char *my_strcpy(char *dest, char *src);
**
** CONTRAINTES :
**
** - Ne pas inclure <string.h>.
** - Ne pas utiliser strcpy().
** - Copier tous les caractères de src dans dest.
** - Copier également le caractère '\0'.
** - Utiliser des pointeurs pour parcourir les chaînes.
** - Retourner dest.
** - Vérifier que dest possède suffisamment d'espace.
**
** EXEMPLE :
**
** src  : "Bonjour"
** dest : ""
**
** Après my_strcpy() :
** dest : "Bonjour"
**
** OBJECTIF :
**
** Comprendre comment copier une chaîne caractère par caractère
** et manipuler deux pointeurs simultanément.
*/