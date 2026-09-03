/*
** EXERCICE : Inverser un tableau avec swap
**
** CONSIGNE :
**
** Crée la fonction :
**
**     void swap(int *a, int *b)
**
** Cette fonction doit échanger les valeurs situées
** aux deux adresses reçues.
**
** Puis utilise cette fonction pour inverser le tableau :
**
**     1 2 3 4 5
**
** Le tableau doit devenir :
**
**     5 4 3 2 1
**
** --------------------------------------------------
** RÉFLEXION :
** --------------------------------------------------
**
** Pour inverser le tableau, réfléchis par paires :
**
**     premier      ↔ dernier
**     deuxième     ↔ avant-dernier
**     ...
**
** Avec :
**
**     1 2 3 4 5
**     ↑       ↑
**   premier  dernier
**
** Puis :
**
**     5 2 3 4 1
**
** Ensuite :
**
**     5 2 3 4 1
**       ↑   ↑
**     deuxième  avant-dernier
**
** Et ainsi de suite.
**
** --------------------------------------------------
** CONTRAINTES :
** --------------------------------------------------
**
** - Créer et utiliser `swap`.
** - `swap` doit prendre deux pointeurs `int *`.
** - Utiliser une boucle pour parcourir le tableau.
** - Ne pas créer de deuxième tableau.
** - Modifier directement le tableau original.
** - Utiliser des indices pour déterminer les positions
**   à échanger.
** - Passer les adresses des éléments à `swap`.
**
** --------------------------------------------------
** OBJECTIFS :
** --------------------------------------------------
**
** - Comprendre comment échanger deux valeurs avec
**   des pointeurs.
** - Comprendre l'utilisation de `&` pour transmettre
**   une adresse à une fonction.
** - Comprendre `*a` et `*b`.
** - Manipuler les indices d'un tableau.
** - Comprendre le lien entre tableau, adresse et pointeur.
** - Combiner tableau + boucle + pointeurs + fonction.
**
** --------------------------------------------------
** QUESTIONS À TE POSER :
** --------------------------------------------------
**
** - Quelle est la position du premier élément ?
** - Quelle est la position du dernier élément ?
** - Comment trouver le dernier élément à partir de `size` ?
** - Après un échange, quelles positions dois-je rapprocher ?
** - Quand dois-je arrêter la boucle ?
** - Pourquoi `swap(&tab[i], &tab[j])` permet-il
**   de modifier directement le tableau ?
**
** --------------------------------------------------
** TEST DANS MAIN :
** --------------------------------------------------
**
** Crée :
**
**     int tab[] = {1, 2, 3, 4, 5};
**
** Inverse le tableau avec ta fonction `swap`.
**
** Affiche ensuite :
**
**     5 4 3 2 1
**
** AUTRES TESTS :
**
**     {1, 2, 3, 4}       → 4 3 2 1
**     {10, 20, 30}       → 30 20 10
**     {42}               → 42
**
** BONUS :
**
** Essaie d'expliquer pourquoi le tableau n'a pas besoin
** d'être retourné par la fonction.
**
** IMPORTANT POUR LA PISCINE :
**
** Tu combines ici plusieurs notions importantes :
**
**     tableau
**        ↓
**     indices
**        ↓
**     adresses
**        ↓
**     pointeurs
**        ↓
**     fonction
**
** Comprends bien chaque étape avant de passer à la suite.
*/