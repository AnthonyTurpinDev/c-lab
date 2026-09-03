/*
** EXERCICE : Bubble Sort optimisé
**
** OBJECTIF :
**
** Reprendre ton tri à bulles et ajouter une optimisation
** permettant d'arrêter l'algorithme lorsque le tableau
** est déjà trié.
**
** ------------------------------------------------------------
**
** RAPPEL :
**
** Bubble Sort compare les éléments voisins et les échange
** lorsqu'ils sont dans le mauvais ordre.
**
** Exemple :
**
** 5 2 8 1 3
**
** devient progressivement :
**
** 2 5 1 3 8
** 2 1 3 5 8
** 1 2 3 5 8
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** void bubble_sort_optimized(int *tab, int size);
**
** ------------------------------------------------------------
**
** 🧠 NOUVELLE IDÉE :
**
** Ajoute une variable permettant de savoir si un échange
** a été effectué pendant le passage.
**
** Exemple :
**
** int swapped = 0;
**
** Au début de chaque passage :
**
** → swapped = 0
**
** Lorsqu'un échange est effectué :
**
** → swapped = 1
**
** À la fin du passage :
**
** Si swapped vaut toujours 0 :
**
** → aucun échange n'a eu lieu
** → le tableau est déjà trié
** → tu peux arrêter la boucle.
**
** ------------------------------------------------------------
**
** 🎯 TEST 1 :
**
** Tableau :
**
** 5 2 8 1 3
**
** Résultat :
**
** 1 2 3 5 8
**
** ------------------------------------------------------------
**
** 🎯 TEST 2 :
**
** Utilise un tableau déjà trié :
**
** 1 2 3 4 5
**
** Observe ce qui se passe.
**
** L'algorithme doit détecter qu'aucun échange n'est
** nécessaire et s'arrêter rapidement.
**
** ------------------------------------------------------------
**
** 🎯 TEST 3 :
**
** Utilise un tableau dans l'ordre inverse :
**
** 5 4 3 2 1
**
** Compare son comportement avec le tableau déjà trié.
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTES :
**
** - Utiliser Bubble Sort.
** - Utiliser une variable swapped.
** - Utiliser deux boucles.
** - Modifier directement le tableau.
** - Ne pas utiliser de fonction de tri toute faite.
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi mettre swapped = 0 au début de chaque passage ?
**
** 2. À quel moment mettre swapped = 1 ?
**
** 3. Que signifie swapped == 0 après un passage complet ?
**
** 4. Pourquoi peut-on arrêter le tri dans ce cas ?
**
** 5. Que se passe-t-il avec un tableau déjà trié ?
**
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ :
**
** Compare avec le Bubble Sort classique.
**
** Bubble Sort classique :
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
**
** Bubble Sort optimisé :
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
**
** ------------------------------------------------------------
**
** ❓ QUESTION PRINCIPALE :
**
** Est-ce que cette optimisation change la complexité
** dans le pire cas ?
**
** Explique pourquoi.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajoute un compteur de comparaisons.
**
** Affiche :
**
** Comparaisons : X
** Échanges : Y
**
** Compare les résultats pour :
**
** 1 2 3 4 5
**
** 5 4 3 2 1
**
** 5 2 8 1 3
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Affiche le nombre de passages effectués.
**
** Exemple :
**
** Passages : 1
**
** pour un tableau déjà trié.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Comprendre qu'une optimisation peut améliorer le
** comportement d'un algorithme dans certains cas sans
** forcément changer sa complexité dans le pire cas.
**
** Réflexe :
**
** "Je ne regarde pas seulement si mon algorithme fonctionne.
** Je cherche aussi les situations où je peux arrêter plus tôt."
*/