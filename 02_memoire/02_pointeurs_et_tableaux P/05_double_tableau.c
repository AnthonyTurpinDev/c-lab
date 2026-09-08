/*
** EXERCICE : Doubler un tableau
**
** CONSIGNE :
**
** Crée la fonction :
**
**     void double_array(int *tab, int size)
**
** Cette fonction doit doubler chaque élément du tableau.
**
** AVANT :
**
**     1 2 3 4 5
**
** APRÈS :
**
**     2 4 6 8 10
**
** La fonction doit modifier directement le tableau reçu.
**
** --------------------------------------------------
** CONTRAINTES :
** --------------------------------------------------
**
** - Utiliser la fonction :
**
**       void double_array(int *tab, int size)
**
** - Utiliser un pointeur pour parcourir le tableau.
** - Utiliser une boucle.
** - Modifier chaque valeur avec le pointeur.
** - Ne pas créer de deuxième tableau.
** - Ne pas utiliser `tab[i]` pour modifier les valeurs.
**
** --------------------------------------------------
** IMPORTANT :
** --------------------------------------------------
**
** Le paramètre :
**
**     int *tab
**
** contient l'adresse du premier élément du tableau.
**
** La fonction travaille donc directement sur le tableau
** original.
**
** Si `tab` pointe vers :
**
**     [1] [2] [3] [4] [5]
**      ↑
**      tab
**
** alors modifier :
**
**     *tab
**
** modifie directement le premier élément du tableau.
**
** --------------------------------------------------
** OBJECTIFS :
** --------------------------------------------------
**
** - Comprendre pourquoi un tableau peut être transmis
**   à une fonction avec un `int *`.
** - Comprendre que la fonction reçoit l'adresse
**   du premier élément.
** - Comprendre que `*tab` permet d'accéder à une valeur.
** - Comprendre que `*tab = ...` permet de modifier
**   le tableau original.
** - Comprendre le déplacement du pointeur avec `tab++`.
** - Combiner pointeurs, tableaux, fonctions et boucles.
**
** --------------------------------------------------
** QUESTIONS À TE POSER :
** --------------------------------------------------
**
** - Que contient `tab` dans la fonction ?
** - Que représente `*tab` ?
** - Que se passe-t-il lorsque tu fais `tab++` ?
** - Pourquoi les modifications effectuées dans la fonction
**   sont-elles visibles dans `main` ?
** - Pourquoi n'avons-nous pas besoin de retourner le tableau ?
**
** --------------------------------------------------
** TEST DANS MAIN :
** --------------------------------------------------
**
** Crée un tableau :
**
**     int tab[] = {1, 2, 3, 4, 5};
**
** Puis appelle :
**
**     double_array(tab, 5);
**
** Après l'appel, affiche le tableau pour vérifier
** qu'il contient :
**
**     2 4 6 8 10
**
** --------------------------------------------------
** BONUS :
** --------------------------------------------------
**
** Affiche les valeurs avant et après l'appel de la fonction.
**
** Puis explique avec tes propres mots pourquoi :
**
**     int *tab
**
** permet de modifier le tableau original.
**
** IMPORTANT POUR LA PISCINE :
**
** Tu dois comprendre cette idée fondamentale :
**
**     tableau → adresse → pointeur → modification
**
** Si tu comprends cette chaîne logique, tu maîtrises
** une partie très importante des pointeurs en C.
*/