/*
** EXERCICE : Tableau dynamique avec malloc
**
** CONSIGNE :
**
** Créer dynamiquement un tableau de 5 entiers
** en utilisant malloc().
**
**
** Le tableau doit contenir :
**
**     10 20 30 40 50
**
**
** OBJECTIFS :
**
** Apprendre à :
**
**     - utiliser malloc() pour réserver plusieurs cases
**     - utiliser un pointeur pour manipuler le tableau
**     - remplir un tableau dynamique
**     - parcourir un tableau avec une boucle
**     - libérer correctement la mémoire avec free()
**
**
** ÉTAPES :
**
** 1. Déclarer un pointeur vers int :
**
**        int *tab;
**
**
** 2. Allouer dynamiquement la mémoire nécessaire
**    pour 5 variables de type int.
**
**
** 3. Vérifier que malloc() a réussi.
**
**    Si malloc() retourne NULL, afficher un message
**    d'erreur et arrêter le programme.
**
**
** 4. Remplir le tableau avec les valeurs :
**
**        10
**        20
**        30
**        40
**        50
**
**    Tu peux utiliser une boucle.
**
**
** 5. Afficher toutes les valeurs avec une boucle.
**
**    Résultat attendu :
**
**        10
**        20
**        30
**        40
**        50
**
**
** 6. Libérer la mémoire avec :
**
**        free(tab);
**
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Utiliser un pointeur int *.
** - Allouer exactement 5 int.
** - Utiliser une boucle pour remplir le tableau.
** - Utiliser une boucle pour afficher le tableau.
** - Vérifier que malloc() ne retourne pas NULL.
** - Utiliser free() à la fin.
** - Ne pas utiliser un tableau statique comme :
**
**        int tab[5];
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi doit-on réserver de la mémoire pour
**    5 int et non simplement 5 octets ?
**
** 2. Que contient tab après malloc() ?
**
** 3. Pourquoi peut-on écrire :
**
**        tab[0]
**        tab[1]
**        tab[2]
**
**    alors que tab est un pointeur ?
**
** 4. Quelle différence entre :
**
**        int tab[5];
**
**    et :
**
**        int *tab = malloc(...);
**
** 5. Pourquoi faut-il utiliser free(tab) ?
**
** 6. Que risque-t-il de se passer si le programme
**    oublie de libérer la mémoire ?
**
**
** BONUS :
**
** Afficher également les adresses des 5 éléments.
**
** Observer que les éléments sont stockés dans des
** zones mémoire successives.
**
**
** BONUS 2 :
**
** Faire le remplissage avec un pointeur plutôt
** qu'avec tab[i].
**
**
** OBJECTIF FINAL :
**
** Comprendre ce schéma :
**
**        malloc()
**           ↓
**     mémoire pour 5 int
**           ↓
**        int *tab
**           ↓
**     tab[0] ... tab[4]
**           ↓
**        printf()
**           ↓
**        free(tab)
**
**
** Cette notion est fondamentale avant de passer à :
**
**     - malloc + fonction
**     - tableau de taille choisie par l'utilisateur
**     - chaînes dynamiques
**     - realloc()
**     - allocation de structures
*/