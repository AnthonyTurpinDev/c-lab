/*
** EXERCICE : Pointeur vers le maximum
**
** Écrire une fonction qui parcourt un tableau d'entiers et
** retourne un pointeur vers l'élément contenant la plus grande
** valeur.
**
** ATTENTION :
**
** La fonction ne doit PAS retourner l'indice du maximum.
** Elle doit retourner directement l'adresse de l'élément
** dans le tableau.
**
** PROTOTYPE CONSEILLÉ :
**
** int *max_ptr(int *tab, int taille);
**
** EXEMPLE :
**
** Tableau :
** 10 25 7 42 18
**
** Maximum :
** 42
**
** La fonction doit retourner un pointeur vers l'élément 42.
**
** CONTRAINTES :
**
** - Créer une fonction max_ptr().
** - La fonction doit retourner un pointeur vers un int.
** - Recevoir le tableau sous forme de pointeur.
** - Recevoir la taille du tableau.
** - Parcourir le tableau avec l'arithmétique des pointeurs.
** - Ne pas retourner l'indice du maximum.
** - Ne pas créer de deuxième tableau.
** - Ne pas utiliser de fonction toute faite pour trouver le maximum.
** - Tester la fonction dans main().
** - Afficher la valeur pointée par le pointeur retourné.
**
** IMPORTANT :
**
** Le résultat de la fonction doit être un pointeur vers
** l'élément réel du tableau.
**
** Exemple :
**
** int *resultat = max_ptr(tab, taille);
**
** Vous devez ensuite pouvoir accéder au maximum avec :
**
** *resultat
**
** OBJECTIF :
**
** Comprendre qu'un pointeur peut être utilisé pour retourner
** l'adresse d'un élément précis d'un tableau et apprendre à
** parcourir un tableau avec l'arithmétique des pointeurs.
**
** BONUS :
**
** - Afficher l'adresse du maximum.
** - Modifier la valeur maximale grâce au pointeur retourné.
** - Créer également une fonction min_ptr() qui retourne
**   un pointeur vers le minimum.
*/