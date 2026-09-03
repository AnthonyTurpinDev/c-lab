/*
** EXERCICE : Tri à bulles décroissant
**
** OBJECTIF :
**
** Reprendre le principe du Bubble Sort et modifier
** l'algorithme pour trier le tableau dans l'ordre décroissant.
**
** ------------------------------------------------------------
**
** AVANT :
**
** 5 2 8 1 3
**
** APRÈS :
**
** 8 5 3 2 1
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** void bubble_sort_desc(int *tab, int size);
**
** La fonction doit modifier directement le tableau.
**
** ------------------------------------------------------------
**
** 🧠 RAPPEL DU BUBBLE SORT :
**
** Tu compares deux éléments voisins :
**
** tab[i] et tab[i + 1]
**
** Dans le tri CROISSANT :
**
** si tab[i] > tab[i + 1]
** → échange
**
** Dans le tri DÉCROISSANT :
**
** tu dois inverser cette logique.
**
** Pose-toi la question :
**
** "Dans quel cas les deux éléments sont-ils dans le
** mauvais ordre pour un tri décroissant ?"
**
** ------------------------------------------------------------
**
** 🎯 DANS MAIN :
**
** Crée :
**
** int tab[] = {5, 2, 8, 1, 3};
**
** Affiche le tableau avant le tri.
**
** Appelle :
**
** bubble_sort_desc(tab, 5);
**
**
** Affiche le tableau après le tri.
**
** Résultat attendu :
**
** Avant : 5 2 8 1 3
** Après : 8 5 3 2 1
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTES :
**
** - Utiliser deux boucles.
** - Utiliser Bubble Sort.
** - Comparer les éléments voisins.
** - Utiliser une variable temporaire pour les échanges.
** - Modifier directement le tableau.
** - Ne pas utiliser de fonction de tri toute faite.
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Quelle condition dois-tu utiliser pour déclencher
**    l'échange ?
**
** 2. Quelle différence avec le tri croissant ?
**
** 3. Où se retrouve le plus petit élément après une passe ?
**
** 4. Pourquoi l'algorithme reste-t-il en O(n²) ?
**
** 5. Est-ce que le nombre de boucles change ?
**
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ :
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
** Complexité  : O(?)
**
** Explique pourquoi.
**
** ------------------------------------------------------------
**
** ⭐ BONUS :
**
** Modifie ton programme pour permettre à l'utilisateur
** de choisir :
**
** 1. Ordre croissant
** 2. Ordre décroissant
**
** Exemple :
**
** Choix : 2
**
** Résultat :
**
** 8 5 3 2 1
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Savoir modifier un algorithme existant sans repartir
** de zéro.
**
** Réflexe :
**
** CROISSANT   → plus petit vers la gauche
** DÉCROISSANT → plus grand vers la gauche
**
** Le mécanisme du Bubble Sort reste le même :
**
** comparer → échanger → recommencer
*/