/*
** EXERCICE : Doubler un tableau dynamique
**
** CONSIGNE :
**
** Créer la fonction :
**
**     void double_array(int *tab, int size);
**
**
** Le tableau doit être créé dynamiquement avec malloc().
**
** La fonction double_array() doit parcourir le tableau
** et doubler la valeur de chaque élément.
**
**
** EXEMPLE :
**
**     Avant :
**
**     1 2 3 4 5
**
**     Après :
**
**     2 4 6 8 10
**
**
** OBJECTIFS :
**
** Apprendre à combiner :
**
**     - malloc()
**     - tableaux dynamiques
**     - pointeurs
**     - fonctions
**     - boucles
**     - modification directe d'un tableau
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
**        1 2 3 4 5
**
**
** 4. Afficher le tableau avant la modification.
**
**    Résultat attendu :
**
**        Avant : 1 2 3 4 5
**
**
** 5. Créer la fonction :
**
**        void double_array(int *tab, int size)
**
**
** 6. Dans cette fonction, parcourir le tableau
**    avec une boucle.
**
**
** 7. Doubler chaque élément directement dans le tableau.
**
**    Par exemple :
**
**        1 devient 2
**        2 devient 4
**        3 devient 6
**        4 devient 8
**        5 devient 10
**
**
** 8. Afficher le tableau après l'appel de la fonction.
**
**    Résultat attendu :
**
**        Après : 2 4 6 8 10
**
**
** 9. Libérer la mémoire avec free().
**
**
** CONTRAINTES :
**
** - Le tableau doit être créé avec malloc().
** - Utiliser un pointeur int *.
** - Utiliser la fonction double_array().
** - La fonction doit être de type void.
** - Utiliser une boucle pour parcourir le tableau.
** - Modifier directement les éléments du tableau.
** - Ne pas créer de deuxième tableau.
** - Ne pas retourner le tableau depuis double_array().
** - Vérifier que malloc() ne retourne pas NULL.
** - Utiliser free() à la fin.
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi double_array() reçoit-elle un int * ?
**
** 2. Pourquoi la fonction n'a-t-elle pas besoin de retourner
**    le tableau ?
**
** 3. Que se passe-t-il lorsque tu modifies :
**
**        tab[i]
**
**    dans double_array() ?
**
** 4. Pourquoi le tableau créé avec malloc() peut-il être
**    modifié directement depuis une autre fonction ?
**
** 5. Quelle différence entre :
**
**        tab
**
**    et :
**
**        *tab
**
** 6. Pourquoi doit-on transmettre size à la fonction ?
**
** 7. Pourquoi doit-on appeler free() après avoir terminé
**    d'utiliser le tableau ?
**
**
** BONUS :
**
** Créer également une fonction :
**
**        void print_array(int *tab, int size)
**
**
** Cette fonction doit afficher le tableau.
**
** Le programme devra alors suivre cette logique :
**
**        malloc()
**           ↓
**      remplissage
**           ↓
**      print_array()
**           ↓
**    double_array()
**           ↓
**      print_array()
**           ↓
**        free()
**
**
** OBJECTIF FINAL :
**
** Comprendre qu'un tableau dynamique peut être créé
** dans main() puis modifié directement par une fonction
** grâce à son adresse.
**
**
** Schéma mental :
**
**        malloc()
**           ↓
**       int *tab
**           ↓
**    [1][2][3][4][5]
**           ↓
**   double_array(tab, 5)
**           ↓
**    [2][4][6][8][10]
**           ↓
**        free()
*/