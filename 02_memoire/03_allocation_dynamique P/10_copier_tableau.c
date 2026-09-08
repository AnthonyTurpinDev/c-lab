/*
** EXERCICE : Copier un tableau avec malloc()
**
** CONSIGNE :
**
** Créer la fonction :
**
**     int *copy_array(int *tab, int size);
**
**
** Cette fonction doit créer un NOUVEAU tableau dynamique,
** copier les valeurs du tableau original dedans,
** puis retourner l'adresse du nouveau tableau.
**
**
** EXEMPLE :
**
**     Original : 1 2 3 4 5
**     Copie    : 1 2 3 4 5
**
**
** ⚠️ IMPORTANT :
**
** Les deux tableaux doivent être INDÉPENDANTS.
**
** Modifier le tableau original après la copie ne doit
** PAS modifier la copie.
**
** De même, modifier la copie ne doit PAS modifier
** le tableau original.
**
**
** OBJECTIFS :
**
** Apprendre à :
**
**     - utiliser malloc() dans une fonction
**     - créer un nouveau tableau dynamique
**     - copier des valeurs d'un tableau vers un autre
**     - retourner un pointeur depuis une fonction
**     - comprendre la différence entre deux zones mémoire
**     - utiliser free() pour plusieurs allocations
**
**
** ÉTAPES :
**
** 1. Dans main(), créer un tableau :
**
**        int tab[] = {1, 2, 3, 4, 5};
**
**
** 2. Appeler :
**
**        copy_array(tab, 5)
**
**
** 3. La fonction copy_array() doit :
**
**        - allouer un nouveau tableau avec malloc()
**        - vérifier que malloc() a réussi
**        - copier les 5 valeurs
**        - retourner l'adresse du nouveau tableau
**
**
** 4. Dans main(), récupérer le tableau retourné
**    dans un pointeur.
**
**
** 5. Afficher les deux tableaux :
**
**        Original : 1 2 3 4 5
**        Copie    : 1 2 3 4 5
**
**
** 6. Modifier ensuite une valeur du tableau original.
**
**    Par exemple, remplacer le premier élément par 100.
**
**
** 7. Afficher à nouveau les deux tableaux.
**
**    Le résultat doit montrer que seule la valeur
**    du tableau original a changé.
**
**
**    Exemple :
**
**        Original : 100 2 3 4 5
**        Copie    : 1 2 3 4 5
**
**
** 8. Modifier ensuite une valeur de la copie.
**
**    Vérifier que le tableau original ne change pas.
**
**
** 9. Libérer les DEUX zones mémoire avec free().
**
**
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Utiliser la fonction copy_array().
** - copy_array() doit retourner un int *.
** - Allouer un nouveau tableau.
** - Copier chaque valeur avec une boucle.
** - Ne pas utiliser memcpy() ou une fonction toute faite
**   pour effectuer la copie.
** - Les deux tableaux doivent être indépendants.
** - Vérifier que malloc() ne retourne pas NULL.
** - Utiliser free() pour les deux tableaux.
**
**
** ⚠️ ATTENTION :
**
** Ne fais pas simplement :
**
**        int *copie = tab;
**
** Cela ne crée PAS une copie.
**
** Les deux pointeurs pointeraient vers la même zone mémoire.
**
**
** Tu dois obtenir deux zones mémoire différentes :
**
**        tab
**         ↓
**     [1][2][3][4][5]
**
**        copie
**          ↓
**     [1][2][3][4][5]
**
**
** Les valeurs sont identiques,
** mais les adresses sont différentes.
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi copy_array() retourne-t-elle un int * ?
**
** 2. Pourquoi faut-il utiliser malloc() dans copy_array() ?
**
** 3. Pourquoi :
**
**        copie = tab;
**
**    ne crée-t-il pas une vraie copie ?
**
** 4. Quelle différence entre :
**
**        copie
**
**    et :
**
**        *copie
**
**    ?
**
** 5. Pourquoi les deux tableaux doivent-ils avoir
**    des zones mémoire différentes ?
**
** 6. Pourquoi faut-il faire deux free() à la fin ?
**
** 7. Que se passerait-il si tu faisais :
**
**        free(tab);
**
**    puis que tu essayais encore d'utiliser copie,
**    si les deux pointeurs désignaient la même mémoire ?
**
**
**
** BONUS :
**
** Afficher l'adresse du premier élément des deux tableaux.
**
** Les valeurs doivent être identiques mais les adresses
** doivent être différentes.
**
**
** BONUS 2 :
**
** Créer une fonction :
**
**     void print_array(int *tab, int size);
**
**
** Utiliser cette fonction pour afficher le tableau original
** et la copie.
**
**
** OBJECTIF FINAL :
**
** Comprendre cette chaîne :
**
**        tab original
**             ↓
**      copy_array(tab, size)
**             ↓
**          malloc()
**             ↓
**      nouveau tableau
**             ↓
**       copie des valeurs
**             ↓
**      return nouvelle adresse
**             ↓
**          main()
**             ↓
**       int *copie
**
**
** Et surtout comprendre :
**
**        même valeurs
**             ≠
**        même mémoire
**
**
** Deux tableaux peuvent contenir exactement les mêmes
** valeurs tout en étant complètement indépendants.
*/