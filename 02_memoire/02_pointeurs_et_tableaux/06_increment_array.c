/*
** EXERCICE : Incrémenter un tableau
**
** CONSIGNE :
**
** Crée la fonction :
**
**     void increment_array(int *tab, int size)
**
** Cette fonction doit augmenter chaque élément du tableau
** de 1.
**
** AVANT :
**
**     5 10 15 20
**
** APRÈS :
**
**     6 11 16 21
**
** --------------------------------------------------
** CONTRAINTES :
** --------------------------------------------------
**
** - Utiliser la fonction :
**
**       void increment_array(int *tab, int size)
**
** - Utiliser un pointeur pour parcourir le tableau.
** - Utiliser une boucle.
** - Modifier directement les éléments du tableau.
** - Utiliser `*tab` pour accéder à la valeur.
** - Utiliser `tab++` pour avancer vers l'élément suivant.
** - Ne pas utiliser `tab[i]` pour modifier les valeurs.
** - Ne pas créer de deuxième tableau.
**
** --------------------------------------------------
** OBJECTIFS :
** --------------------------------------------------
**
** - Comprendre `int *tab` dans une fonction.
** - Comprendre que `*tab` représente la valeur pointée.
** - Comprendre que `*tab += 1` modifie directement
**   l'élément du tableau.
** - Comprendre le déplacement d'un pointeur avec `tab++`.
** - Combiner tableau, pointeur, fonction et boucle.
**
** --------------------------------------------------
** QUESTIONS À TE POSER :
** --------------------------------------------------
**
** - Que représente `*tab` ?
** - Comment augmenter la valeur pointée de 1 ?
** - Comment passer à l'élément suivant ?
** - Pourquoi la modification est-elle visible dans `main` ?
** - Pourquoi la fonction n'a-t-elle pas besoin de retourner
**   le tableau ?
**
** --------------------------------------------------
** TEST DANS MAIN :
** --------------------------------------------------
**
** Crée :
**
**     int tab[] = {5, 10, 15, 20};
**
** Puis appelle :
**
**     increment_array(tab, 4);
**
** Affiche ensuite le tableau.
**
** Résultat attendu :
**
**     6 11 16 21
**
** --------------------------------------------------
** BONUS :
** --------------------------------------------------
**
** Essaie de réaliser la fonction sans utiliser
** directement la notation `tab[i]`.
**
** Tu dois pouvoir raisonner avec :
**
**     *tab
**     tab++
**
** IMPORTANT POUR LA PISCINE :
**
** Comprends bien la différence entre :
**
**     tab
**
** qui représente une adresse,
**
** et :
**
**     *tab
**
** qui représente la valeur située à cette adresse.
*/