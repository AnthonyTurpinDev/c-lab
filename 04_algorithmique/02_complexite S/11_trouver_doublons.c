/*
** EXERCICE : Trouver les doublons
**
** OBJECTIF :
**
** Déterminer si un tableau contient des valeurs en double.
**
** Exemple :
**
** [4, 8, 2, 8, 10]
**
** Résultat attendu :
**
** Doublon trouvé : 8
**
** ------------------------------------------------------------
**
** ÉTAPE 1 — SOLUTION SIMPLE
**
** Crée la fonction :
**
** int find_duplicate(int *tab, int size);
**
** Utilise DEUX boucles imbriquées.
**
** Principe :
**
** - Prendre un élément du tableau.
** - Le comparer avec les éléments suivants.
** - Si deux valeurs sont identiques :
**   → un doublon a été trouvé.
**
** Exemple :
**
** i = 0 → comparer 4 avec les éléments suivants
** i = 1 → comparer 8 avec les éléments suivants
** i = 2 → comparer 2 avec les éléments suivants
**
** Lorsque tu trouves :
**
** tab[i] == tab[j]
**
** affiche :
**
** Doublon trouvé : X
**
** ------------------------------------------------------------
**
** ⚠️ ATTENTION
**
** Ne compare pas un élément avec lui-même.
**
** Exemple :
**
** tab[2] avec tab[2]
**
** ne doit pas être considéré comme un doublon.
**
** Réfléchis donc à la position de départ de la deuxième
** boucle.
**
** ------------------------------------------------------------
**
** TESTS :
**
** [4, 8, 2, 8, 10]
** → Doublon trouvé : 8
**
** [1, 2, 3, 4, 5]
** → Aucun doublon
**
** [7, 7, 3, 9]
** → Doublon trouvé : 7
**
** [5, 2, 5, 2]
** → Doublons trouvés
**
** ------------------------------------------------------------
**
** 🎯 ÉTAPE 1 — COMPLEXITÉ
**
** Analyse ton algorithme.
**
** Combien de boucles imbriquées ?
**
** Quelle est la complexité ?
**
** Réponse attendue :
**
** O(?)
**
** ------------------------------------------------------------
**
** ÉTAPE 2 — OPTIMISATION
**
** Maintenant, imagine que ton tableau contient :
**
** 10 éléments
** 1 000 éléments
** 1 000 000 éléments
**
** La solution avec deux boucles devient-elle coûteuse ?
**
** Réfléchis à une solution plus efficace.
**
** ------------------------------------------------------------
**
** 💡 INDICE
**
** Pose-toi cette question :
**
** "Est-ce que je peux utiliser une structure de données
** qui permet de savoir rapidement si une valeur a déjà été
** rencontrée ?"
**
** Tu peux réfléchir à l'utilisation d'un tableau auxiliaire,
** d'une structure de recherche ou d'une autre méthode.
**
** ------------------------------------------------------------
**
** 🎯 COMPARAISON
**
** Complète :
**
** Solution 1 :
** → Deux boucles
** → Complexité : O(?)
**
** Solution 2 :
** → Méthode optimisée
** → Complexité : O(?)
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER
**
** 1. Pourquoi la première solution utilise-t-elle O(n²) ?
**
** 2. Peut-on arrêter immédiatement lorsqu'un doublon est trouvé ?
**
** 3. Est-ce que cela change la complexité dans le pire cas ?
**
** 4. Quel est le coût mémoire de ta solution optimisée ?
**
** 5. Est-ce toujours intéressant d'utiliser plus de mémoire
**    pour gagner du temps ?
**
** ------------------------------------------------------------
**
** ⭐ BONUS
**
** Au lieu d'afficher seulement le premier doublon :
**
** affiche tous les doublons.
**
** Exemple :
**
** [4, 8, 2, 8, 10, 4, 2]
**
** Résultat :
**
** Doublon : 4
** Doublon : 8
** Doublon : 2
**
** Évite d'afficher deux fois le même doublon.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Ne pas seulement chercher une solution qui fonctionne.
**
** Cherche également à comprendre :
**
** → combien de temps elle prend ;
** → comment elle évolue quand n augmente ;
** → combien de mémoire elle utilise ;
** → comment l'améliorer.
**
** Réflexe à développer :
**
** "Ça fonctionne, mais est-ce que je peux faire mieux ?"
*/