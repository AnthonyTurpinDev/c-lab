/*
** EXERCICE : Optimiser une recherche
**
** OBJECTIF :
**
** Comparer deux algorithmes de recherche :
**
** 1. La recherche linéaire
** 2. La recherche binaire
**
** Le tableau est déjà trié :
**
** [1, 5, 8, 12, 20, 25, 31, 42]
**
** ------------------------------------------------------------
**
** VERSION 1 — RECHERCHE LINÉAIRE
**
** Crée la fonction :
**
** int linear_search(int *tab, int size, int value);
**
** Elle doit parcourir le tableau élément par élément
** jusqu'à trouver la valeur recherchée.
**
** Si la valeur est trouvée :
** → retourner son indice.
**
** Sinon :
** → retourner -1.
**
** Teste avec :
**
** 20
** 1
** 42
** 100
**
** ------------------------------------------------------------
**
** VERSION 2 — RECHERCHE BINAIRE
**
** Le tableau étant trié, crée une deuxième fonction :
**
** int binary_search(int *tab, int size, int value);
**
** Utilise :
**
** int left;
** int right;
** int middle;
**
** Principe :
**
** 1. Commencer au début du tableau.
**
** 2. Commencer à la fin du tableau.
**
** 3. Calculer l'indice du milieu.
**
** 4. Comparer tab[middle] avec value.
**
** 5. Si la valeur est plus petite :
**    → chercher dans la moitié gauche.
**
** 6. Si la valeur est plus grande :
**    → chercher dans la moitié droite.
**
** 7. Si elle est égale :
**    → retourner l'indice.
**
** 8. Si la recherche est impossible :
**    → retourner -1.
**
** ------------------------------------------------------------
**
** 🎯 TESTS
**
** Recherche :
**
** 20
** 1
** 42
** 100
**
** Les deux fonctions doivent donner le même résultat.
**
** ------------------------------------------------------------
**
** 🎯 COMPARAISON
**
** Complète :
**
** Version 1 : ?
** Version 2 : ?
**
** Recherche linéaire :
** Meilleur cas  : ?
** Pire cas       : ?
** Complexité     : ?
**
** Recherche binaire :
** Meilleur cas  : ?
** Pire cas       : ?
** Complexité     : ?
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER
**
** 1. Pourquoi la recherche binaire est-elle possible ici ?
**
** 2. Que se passe-t-il si le tableau n'est PAS trié ?
**
** 3. À chaque étape de la recherche binaire, combien
**    d'éléments sont éliminés ?
**
** 4. Pourquoi parle-t-on de O(log n) ?
**
** 5. Avec 1 000 000 d'éléments, laquelle choisirais-tu ?
**    Pourquoi ?
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTE IMPORTANTE
**
** Ne modifie PAS le tableau.
**
** Ne le trie PAS dans le programme.
**
** Considère qu'il est déjà trié.
**
** N'utilise aucune fonction de recherche toute faite.
**
** ------------------------------------------------------------
**
** ⭐ BONUS
**
** Ajoute un compteur de comparaisons dans chaque fonction.
**
** Exemple :
**
** Recherche linéaire :
** Comparaisons : 5
**
** Recherche binaire :
** Comparaisons : 3
**
**
** Puis explique dans un commentaire pourquoi la deuxième
** version est plus efficace sur un grand tableau.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Savoir reconnaître qu'un tableau trié permet d'utiliser
** un algorithme plus efficace.
**
** Réflexe à développer :
**
** "Avant de parcourir tout le tableau, je regarde si les
** données sont triées et si je peux éliminer une partie
** des éléments à chaque étape."
*/