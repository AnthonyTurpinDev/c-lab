/*
** EXERCICE : Somme d'un tableau avec un pointeur
**
** CONSIGNE :
**
** Crée la fonction :
**
**     int sum_array(int *tab, int size)
**
** Cette fonction doit parcourir le tableau et retourner
** la somme de tous ses éléments.
**
** EXEMPLE :
**
**     {10, 20, 30, 40}
**
** Résultat attendu :
**
**     100
**
** --------------------------------------------------
** CONTRAINTES :
** --------------------------------------------------
**
** - Utiliser la fonction :
**
**       int sum_array(int *tab, int size)
**
** - Utiliser une boucle.
** - Parcourir le tableau avec un pointeur.
** - Utiliser `*p` pour accéder à la valeur.
** - Utiliser `p++` pour avancer dans le tableau.
** - Ne pas utiliser `tab[i]`.
** - Ne pas modifier le tableau.
**
** --------------------------------------------------
** RÉFLEXION :
** --------------------------------------------------
**
** Tu peux utiliser :
**
**     int *p = tab;
**
** Puis réfléchir au fonctionnement :
**
**     *p
**     p++
**     *p
**     p++
**     ...
**
** Tu dois également utiliser une variable permettant
** d'accumuler la somme.
**
** --------------------------------------------------
** OBJECTIFS :
** --------------------------------------------------
**
** - Comprendre comment parcourir un tableau avec un pointeur.
** - Comprendre `*p`.
** - Comprendre `p++`.
** - Utiliser un accumulateur.
** - Retourner un résultat depuis une fonction.
** - Combiner tableau, pointeur, boucle et fonction.
**
** --------------------------------------------------
** QUESTIONS À TE POSER :
** --------------------------------------------------
**
** - Quelle valeur doit avoir la somme au début ?
** - Que dois-je ajouter à la somme à chaque tour ?
** - Comment passer à l'élément suivant ?
** - Quand dois-je arrêter la boucle ?
** - Pourquoi la fonction retourne-t-elle un `int` ?
**
** --------------------------------------------------
** TEST DANS MAIN :
** --------------------------------------------------
**
** Crée :
**
**     int tab[] = {10, 20, 30, 40};
**
** Puis appelle :
**
**     sum_array(tab, 4);
**
** Affiche le résultat.
**
** Résultat attendu :
**
**     100
**
** AUTRES TESTS :
**
**     {1, 2, 3, 4, 5} → 15
**     {5, 10, 15}     → 30
**     {100}           → 100
**
** IMPORTANT :
**
** Essaie de ne jamais écrire :
**
**     tab[i]
**
** Pour cet exercice, raisonne uniquement avec :
**
**     p
**     *p
**     p++
**
** BONUS :
**
** Après avoir terminé, explique avec tes propres mots
** pourquoi `p++` permet de passer automatiquement
** d'un élément du tableau au suivant.
*/