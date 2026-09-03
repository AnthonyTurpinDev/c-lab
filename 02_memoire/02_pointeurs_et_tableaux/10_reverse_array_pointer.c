/*
** EXERCICE : Inverser un tableau avec des pointeurs
**
** CONSIGNE :
**
** Créer les deux fonctions :
**
**     void swap(int *a, int *b)
**
**     void reverse_array(int *tab, int size)
**
**
** La fonction swap() doit échanger les valeurs de deux
** variables grâce à leurs adresses.
**
**
** La fonction reverse_array() doit inverser complètement
** le contenu du tableau.
**
**
** Exemple :
**
**     int tab[] = {1, 2, 3, 4, 5, 6};
**
**
** Avant :
**
**     1 2 3 4 5 6
**
**
** Après :
**
**     6 5 4 3 2 1
**
**
** PRINCIPE :
**
** Dans reverse_array(), tu dois échanger :
**
**     premier élément <-> dernier élément
**
**     deuxième élément <-> avant-dernier élément
**
**     troisième élément <-> troisième élément en partant de la fin
**
** etc.
**
**
** Tu dois utiliser la fonction swap() pour réaliser
** chaque échange.
**
**
** SCHÉMA :
**
**     main()
**        ↓
**     reverse_array()
**        ↓
**     boucle
**        ↓
**     premier élément ↔ dernier élément
**        ↓
**     swap()
**
**
** CONTRAINTES :
**
** - Utiliser un tableau d'entiers.
** - Utiliser une fonction reverse_array().
** - Utiliser une fonction swap().
** - Utiliser des pointeurs.
** - Utiliser une boucle.
** - Modifier directement le tableau original.
** - Utiliser swap() pour les échanges.
** - Ne pas créer de deuxième tableau.
** - Ne pas utiliser une fonction toute faite pour inverser
**   le tableau.
**
**
** Dans main() :
**
**     1. Créer le tableau :
**
**        int tab[] = {1, 2, 3, 4, 5, 6};
**
**     2. Afficher le tableau avant l'inversion.
**
**     3. Appeler reverse_array().
**
**     4. Afficher le tableau après l'inversion.
**
**
** Résultat attendu :
**
**     Avant :
**     1 2 3 4 5 6
**
**     Après :
**     6 5 4 3 2 1
**
**
** QUESTIONS À TE POSER :
**
** 1. Quel est l'indice du premier élément ?
**
** 2. Quel est l'indice du dernier élément ?
**
** 3. Quand dois-tu arrêter la boucle ?
**
** 4. Pourquoi n'as-tu besoin d'effectuer que la moitié
**    des échanges ?
**
** 5. Pourquoi doit-on envoyer les adresses des éléments
**    à swap() ?
**
** 6. Quelle différence entre :
**
**       tab[i]
**
**   et :
**
**       &tab[i]
**
** 7. Si swap() reçoit &tab[i] et &tab[j],
**    que représentent a et b dans swap() ?
**
**
** BONUS :
**
** Faire fonctionner reverse_array() avec un tableau
** contenant un nombre impair d'éléments.
**
** Exemple :
**
**     {1, 2, 3, 4, 5}
**
** devient :
**
**     {5, 4, 3, 2, 1}
**
**
** BONUS 2 :
**
** Afficher l'adresse de chaque élément avant et après
** l'inversion et observer que les adresses restent les mêmes :
**
** seules les valeurs changent de position.
**
**
** OBJECTIF FINAL :
**
** Être capable de comprendre cette chaîne :
**
**     tableau
**        ↓
**     adresse d'un élément
**        ↓
**     pointeur
**        ↓
**     fonction
**        ↓
**     modification du tableau
**
**
** Cet exercice est une synthèse de :
**
** - tableaux
** - indices
** - boucles
** - fonctions
** - pointeurs
** - adresses
** - passage par adresse
** - modification d'un tableau
** - swap()
*/