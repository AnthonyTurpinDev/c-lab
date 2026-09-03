/*
** EXERCICE : Recréer strcpy
**
** CONSIGNE :
**
** Crée ta propre fonction :
**
**     char *my_strcpy(char *dest, char *src)
**
** Cette fonction doit copier le contenu de la chaîne `src`
** dans la chaîne `dest`.
**
** Exemple :
**
**     src  = "Bonjour"
**     dest = ""
**
** Après l'appel de la fonction :
**
**     dest = "Bonjour"
**
** CONTRAINTES :
**
** - La fonction doit s'appeler my_strcpy.
** - Elle doit prendre deux paramètres :
**
**       char *dest
**       char *src
**
** - Elle doit retourner un char *.
** - Parcourir `src` caractère par caractère.
** - Copier chaque caractère de `src` dans `dest`.
** - Ne pas utiliser strcpy().
** - Ne pas utiliser d'autre fonction de copie de chaîne.
** - Ne pas utiliser de variable globale.
**
** IMPORTANT :
**
** Tu dois également copier le caractère :
**
**     '\0'
**
** à la fin de `dest`.
**
** Exemple :
**
**     src :
**
**     B o n j o u r \0
**
**     dest :
**
**     B o n j o u r \0
**
** Le `'\0'` est indispensable pour que `dest`
** soit une chaîne correctement terminée.
**
** OBJECTIFS :
**
** - Comprendre `char *`.
** - Comprendre les paramètres `src` et `dest`.
** - Parcourir une chaîne avec une boucle.
** - Copier des caractères d'un tableau vers un autre.
** - Comprendre le rôle de `'\0'`.
** - Comprendre pourquoi `my_strcpy` retourne `char *`.
** - Reproduire le fonctionnement d'une fonction de la libc.
**
** QUESTIONS À TE POSER :
**
** - Quel caractère dois-je copier en premier ?
** - Comment savoir quand `src` est terminé ?
** - Pourquoi dois-je copier `'\0'` ?
** - À quel endroit de `dest` dois-je écrire chaque caractère ?
** - Que dois-je retourner à la fin de la fonction ?
**
** TEST DANS MAIN :
**
** Crée par exemple :
**
**     char src[] = "Bonjour";
**     char dest[20];
**
** Puis utilise ta fonction pour copier `src` dans `dest`.
**
** Affiche ensuite `dest`.
**
** AUTRES TESTS :
**
**     "Hello"
**     "ordinateur"
**     "Epitech"
**     ""
**
** IMPORTANT POUR LA PISCINE :
**
** Tu dois être capable de refaire cette fonction
** sans utiliser strcpy() et sans regarder la correction.
*/