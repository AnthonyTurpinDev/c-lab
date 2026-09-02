/*
** EXERCICE : Copier une chaîne
**
** Déclarer deux tableaux :
**
**     char src[] = "Hello";
**     char dest[100];
**
** Le programme doit copier le contenu de src dans dest.
**
** Après la copie :
**
**     src  = "Hello"
**     dest = "Hello"
**
** CONTRAINTES :
**
** - Ne pas utiliser strcpy().
** - Parcourir src caractère par caractère.
** - Copier chaque caractère dans dest.
** - Copier également le caractère '\0'.
** - Ne pas dépasser la taille du tableau dest.
** - Afficher dest après la copie.
**
** IMPORTANT :
**
** Une chaîne C doit toujours être terminée par '\0'.
**
** OBJECTIF :
**
** Comprendre comment une chaîne est stockée en mémoire
** et apprendre à copier manuellement un tableau de char.
**
** BONUS :
**
** - Créer une fonction my_strcpy().
** - Faire la copie avec des pointeurs.
** - Tester avec une chaîne vide.
*/