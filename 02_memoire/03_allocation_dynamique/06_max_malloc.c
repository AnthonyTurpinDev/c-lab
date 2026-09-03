/*
** EXERCICE : Maximum d'un tableau dynamique
**
** CONSIGNE :
**
** Créer dynamiquement un tableau d'entiers avec malloc().
**
** Créer ensuite la fonction :
**
**     int max_array(int *tab, int size);
**
**
** Cette fonction doit parcourir le tableau et retourner
** la plus grande valeur qu'il contient.
**
**
** EXEMPLE :
**
**     Tableau : 12 45 7 89 23
**
**     Maximum : 89
**
**
** OBJECTIFS :
**
** Apprendre à combiner :
**
**     - malloc()
**     - tableau dynamique
**     - pointeurs
**     - fonctions
**     - boucles
**     - comparaison
**     - valeur de retour
**     - free()
**
**
** ÉTAPES :
**
** 1. Créer dynamiquement un tableau de 5 int
**    avec malloc().
**
**
** 2. Vérifier que malloc() a réussi.
**
**
** 3. Remplir le tableau avec :
**
**        12 45 7 89 23
**
**
** 4. Créer la fonction :
**
**        int max_array(int *tab, int size)
**
**
** 5. Dans cette fonction, choisir une première valeur
**    comme maximum de départ.
**
**
** 6. Parcourir le reste du tableau avec une boucle.
**
**
** 7. Comparer chaque élément avec le maximum actuel.
**
**    Si l'élément actuel est plus grand, il devient
**    le nouveau maximum.
**
**
** 8. Retourner le maximum avec return.
**
**
** 9. Dans main(), récupérer le résultat et l'afficher.
**
**
** Résultat attendu :
**
**     Tableau : 12 45 7 89 23
**     Maximum : 89
**
**
** 10. Libérer la mémoire avec free().
**
**
** CONTRAINTES :
**
** - Le tableau doit être créé avec malloc().
** - Utiliser un pointeur int *.
** - Utiliser la fonction max_array().
** - max_array() doit retourner un int.
** - Utiliser une boucle pour parcourir le tableau.
** - Ne pas trier le tableau.
** - Ne pas utiliser de fonction toute faite pour trouver
**   le maximum.
** - Ne pas modifier le tableau.
** - Vérifier que malloc() ne retourne pas NULL.
** - Utiliser free() à la fin.
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi max_array() reçoit-elle :
**
**        int *tab
**
**    et :
**
**        int size
**
**    ?
**
** 2. Quelle valeur utiliser comme maximum de départ ?
**
** 3. Pourquoi est-il préférable de prendre le premier
**    élément du tableau comme maximum de départ ?
**
** 4. Que dois-tu faire si :
**
**        tab[i] > max
**
**    ?
**
** 5. Pourquoi max_array() retourne-t-elle un int
**    et non un int * ?
**
** 6. Est-ce que max_array() modifie le tableau ?
**
** 7. Pourquoi faut-il connaître size pour parcourir
**    correctement le tableau dynamique ?
**
**
** BONUS :
**
** Demander à l'utilisateur combien de nombres il souhaite
** stocker.
**
** Allouer dynamiquement le tableau en fonction de cette
** taille, demander les valeurs, puis trouver le maximum
** avec max_array().
**
**
** Exemple :
**
**     Combien de nombres ? 5
**
**     Entrez les nombres :
**     12
**     45
**     7
**     89
**     23
**
**     Maximum : 89
**
**
** BONUS 2 :
**
** Créer une fonction :
**
**     void print_array(int *tab, int size);
**
**
** Cette fonction doit afficher le tableau avant de chercher
** son maximum.
**
**
** OBJECTIF FINAL :
**
** Comprendre cette chaîne :
**
**        malloc()
**           ↓
**       int *tab
**           ↓
**    [12][45][7][89][23]
**           ↓
**    max_array(tab, 5)
**           ↓
**          89
**           ↓
**        free(tab)
**
**
** Cet exercice permet de combiner l'allocation dynamique
** avec les fonctions et le parcours de tableaux.
*/