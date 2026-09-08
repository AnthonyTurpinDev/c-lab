/*
** EXERCICE : Tri par sélection (Selection Sort)
**
** OBJECTIF :
**
** Implémenter l'algorithme Selection Sort afin de trier
** un tableau d'entiers dans l'ordre croissant.
**
** ------------------------------------------------------------
**
** EXEMPLE :
**
** Avant :
**
** [64, 25, 12, 22, 11]
**
** Après :
**
** [11, 12, 22, 25, 64]
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** void selection_sort(int *tab, int size);
**
** La fonction doit modifier directement le tableau.
**
** ------------------------------------------------------------
**
** 🧠 PRINCIPE :
**
** Le tableau est divisé mentalement en deux parties :
**
** [ partie triée | partie non triée ]
**
** Au début :
**
** [ | 64 25 12 22 11 ]
**
** ------------------------------------------------------------
**
** ÉTAPE 1 :
**
** Chercher le PLUS PETIT élément dans toute la partie
** non triée.
**
** Minimum :
**
** 11
**
** Puis placer 11 au début.
**
** [ 11 | 25 12 22 64 ]
**
** ------------------------------------------------------------
**
** ÉTAPE 2 :
**
** Chercher le minimum dans la partie restante :
**
** [ 11 | 25 12 22 64 ]
**
** Minimum :
**
** 12
**
** Le placer à sa position.
**
** [ 11 12 | 25 22 64 ]
**
** ------------------------------------------------------------
**
** ÉTAPE 3 :
**
** Chercher le minimum dans :
**
** [ 25 22 64 ]
**
** Minimum :
**
** 22
**
** Résultat :
**
** [ 11 12 22 | 25 64 ]
**
** ------------------------------------------------------------
**
** Continuer jusqu'à obtenir :
**
** [ 11 12 22 25 64 ]
**
**
** ------------------------------------------------------------
**
** 🔎 TON TRAVAIL :
**
** Pour chaque position du tableau :
**
** 1. Considère cette position comme le minimum.
**
** 2. Parcours la partie restante du tableau.
**
** 3. Cherche un élément plus petit.
**
** 4. Mémorise son indice.
**
** 5. À la fin de la recherche, échange l'élément minimum
**    avec l'élément situé à la position actuelle.
**
** ------------------------------------------------------------
**
** 🧠 VARIABLES UTILES :
**
** Tu auras probablement besoin de variables comme :
**
** int min_index;
** int temp;
**
** Et de deux indices de boucle.
**
** À toi de déterminer comment les utiliser.
**
** ------------------------------------------------------------
**
** 🎯 DANS MAIN :
**
** Crée :
**
** int tab[] = {64, 25, 12, 22, 11};
**
** Affiche le tableau avant le tri.
**
** Appelle :
**
** selection_sort(tab, 5);
**
**
** Affiche le tableau après le tri.
**
** Résultat attendu :
**
** Avant : 64 25 12 22 11
** Après : 11 12 22 25 64
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTES :
**
** - Utiliser Selection Sort.
** - Utiliser deux boucles.
** - Chercher le minimum.
** - Mémoriser l'indice du minimum.
** - Utiliser une variable temporaire pour l'échange.
** - Modifier directement le tableau.
** - Ne pas utiliser de fonction de tri toute faite.
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi mémoriser l'indice du minimum plutôt que sa valeur ?
**
** 2. Pourquoi la deuxième boucle ne commence-t-elle pas
**    au début du tableau ?
**
** 3. Où se trouve la partie déjà triée ?
**
** 4. Combien de recherches de minimum sont effectuées ?
**
** 5. Combien de comparaisons environ pour n éléments ?
**
** 6. Quelle est la complexité du Selection Sort ?
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
** ⭐ BONUS 1 :
**
** Ajoute un compteur de comparaisons.
**
** Exemple :
**
** Comparaisons : X
**
** Puis teste avec :
**
** [1, 2, 3, 4, 5]
**
** et :
**
** [5, 4, 3, 2, 1]
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Implémente une version décroissante :
**
** [64, 25, 12, 22, 11]
**
** →
**
** [64, 25, 22, 12, 11]
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Compare Selection Sort avec ton Bubble Sort.
**
** Complète :
**
** Bubble Sort :
** Complexité : ?
** Principe   : ?
**
** Selection Sort :
** Complexité : ?
** Principe   : ?
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Comprendre un deuxième algorithme de tri et savoir
** l'implémenter sans aide.
**
** Réflexe à retenir :
**
** chercher le minimum
**        ↓
** mémoriser son indice
**        ↓
** l'échanger avec la position actuelle
**        ↓
** recommencer
**
*/