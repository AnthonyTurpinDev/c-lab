/*
** EXERCICE : Concaténer deux chaînes dynamiquement
**
** Écrire une fonction qui concatène deux chaînes de caractères
** et retourne une nouvelle chaîne allouée dynamiquement.
**
** PROTOTYPE CONSEILLÉ :
**
** char *concat_strings(char *str1, char *str2);
**
** EXEMPLE :
**
** str1 = "Hello "
** str2 = "World"
**
** Résultat :
** "Hello World"
**
** CONTRAINTES :
**
** - Ne pas utiliser strcat().
** - Calculer la taille nécessaire pour le résultat.
** - Ajouter une place pour le caractère '\0'.
** - Utiliser malloc().
** - Vérifier que malloc() a réussi.
** - Copier str1 dans la nouvelle chaîne.
** - Ajouter str2 à la suite.
** - Terminer correctement la chaîne avec '\0'.
** - Retourner la nouvelle chaîne.
** - Libérer la mémoire avec free() après utilisation.
**
** OBJECTIF :
**
** Combiner manipulation de chaînes et allocation dynamique.
**
** BONUS :
**
** - Utiliser ta propre fonction my_strlen().
** - Utiliser ta propre fonction my_strcpy().
** - Tester avec des chaînes vides.
*/