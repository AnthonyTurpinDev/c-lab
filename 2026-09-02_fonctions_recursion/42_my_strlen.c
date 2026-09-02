/*
** EXERCICE : my_strlen
**
** Recoder la fonction strlen() en langage C.
**
** La fonction doit compter le nombre de caractères présents
** dans une chaîne de caractères, sans compter le caractère
** '\0' qui marque la fin de la chaîne.
**
** PROTOTYPE :
**
** int my_strlen(char *str);
**
** EXEMPLE :
**
** Entrée :
** "Bonjour"
**
** Sortie :
** 7
**
** AUTRE EXEMPLE :
**
** Entrée :
** "Hello World"
**
** Sortie :
** 11
**
** CONTRAINTES :
**
** - Créer une fonction appelée my_strlen().
** - La fonction doit recevoir un pointeur vers une chaîne.
** - La fonction doit retourner un entier.
** - Parcourir la chaîne uniquement avec des pointeurs.
** - Utiliser l'arithmétique des pointeurs.
** - Ne pas utiliser [].
** - Ne pas utiliser strlen().
** - Ne pas créer de deuxième chaîne.
** - Compter les caractères jusqu'à '\0'.
**
** INTERDICTION :
**
** Ne pas utiliser :
**
**     str[i]
**     *(str + i)
**
** Vous devez manipuler directement le pointeur.
**
** OBJECTIF :
**
** Comprendre comment parcourir une chaîne de caractères
** uniquement avec un pointeur et maîtriser l'arithmétique
** des pointeurs en C.
**
** BONUS :
**
** - Tester avec une chaîne vide.
** - Tester avec une chaîne contenant des espaces.
** - Créer une version qui utilise deux pointeurs :
**   un pointeur au début et un pointeur à la fin de la chaîne.
*/