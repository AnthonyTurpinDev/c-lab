/*
** EXERCICE : Comparer deux algorithmes de tri
**
** OBJECTIF :
**
** Implémenter deux algorithmes de tri :
**
** 1. Bubble Sort
** 2. Selection Sort
**
** Puis mesurer et comparer leur comportement.
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONS À CRÉER :
**
** void bubble_sort(int *tab, int size);
**
** void selection_sort(int *tab, int size);
**
** Les deux fonctions doivent trier le tableau dans
** l'ordre croissant.
**
** ------------------------------------------------------------
**
** 🧪 PRINCIPE DU TEST :
**
** Les deux algorithmes doivent travailler sur EXACTEMENT
** les mêmes données.
**
** ⚠️ Attention :
**
** Si tu donnes directement le même tableau à bubble_sort()
** puis à selection_sort(), le premier tri modifiera le tableau.
**
** Tu dois donc créer deux copies identiques :
**
** tableau_bubble
** tableau_selection
**
** Exemple :
**
** Original :
** [64, 25, 12, 22, 11]
**
** Copie 1 → Bubble Sort
** Copie 2 → Selection Sort
**
** ------------------------------------------------------------
**
** 🎯 TAILLES À TESTER :
**
** Commencer avec :
**
** - 10 éléments
** - 100 éléments
** - 1000 éléments
**
** Pour chaque taille, comparer les deux algorithmes.
**
** ------------------------------------------------------------
**
** 📊 INFORMATIONS À MESURER :
**
** Pour chaque tri, déterminer :
**
** 1. Nombre de comparaisons
**
** 2. Nombre d'échanges
**
** 3. Temps approximatif
**
** ------------------------------------------------------------
**
** 🧠 IMPORTANT :
**
** Les fonctions doivent pouvoir compter les opérations.
**
** Tu peux réfléchir à une manière de mesurer :
**
** comparisons++
**
** lorsqu'une comparaison entre deux éléments est effectuée.
**
** Et :
**
** swaps++
**
** lorsqu'un échange est réellement effectué.
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTE :
**
** Ne compte PAS seulement les printf().
**
**
** Une comparaison correspond par exemple à :
**
** tab[i] > tab[j]
**
**
** Un échange correspond à une modification permettant
** de déplacer deux valeurs.
**
** ------------------------------------------------------------
**
** 🎯 TEMPS D'EXÉCUTION :
**
** Utiliser une fonction permettant de mesurer le temps
** avant et après l'exécution du tri.
**
** Indice :
**
** #include <time.h>
**
** Tu peux chercher comment fonctionne :
**
** clock()
**
** et :
**
** CLOCKS_PER_SEC
**
** ------------------------------------------------------------
**
** 🧪 EXPÉRIENCE 1 :
**
** Tableau de 10 éléments.
**
** Exécuter :
**
** Bubble Sort
** Selection Sort
**
** Noter :
**
** Bubble :
** Comparaisons : ?
** Échanges     : ?
** Temps        : ?
**
** Selection :
** Comparaisons : ?
** Échanges     : ?
** Temps        : ?
**
** ------------------------------------------------------------
**
** 🧪 EXPÉRIENCE 2 :
**
** Tableau de 100 éléments.
**
** Même expérience.
**
** Observer l'évolution du nombre de comparaisons
** et d'échanges.
**
** ------------------------------------------------------------
**
** 🧪 EXPÉRIENCE 3 :
**
** Tableau de 1000 éléments.
**
** Comparer les résultats.
**
** Pose-toi cette question :
**
** "Est-ce que le temps augmente beaucoup lorsque
** je passe de 100 à 1000 éléments ?"
**
** ------------------------------------------------------------
**
** 🧠 PARTIE 4 — COMPLEXITÉ
**
** Pour chaque algorithme, déterminer :
**
** Bubble Sort :
** Meilleur cas : O(?)
** Pire cas    : O(?)
**
** Selection Sort :
** Meilleur cas : O(?)
** Pire cas    : O(?)
**
** ------------------------------------------------------------
**
** ⚠️ RAPPEL :
**
** Pour Bubble Sort optimisé avec un indicateur
** "swapped", le meilleur cas peut être O(n).
**
** Pour Selection Sort, même si le tableau est déjà trié,
** l'algorithme doit continuer à chercher le minimum
** dans la partie restante.
**
** ------------------------------------------------------------
**
** 🎯 PARTIE 5 — COMPARER LES ÉCHANGES
**
** Pose-toi cette question :
**
** Est-ce que Bubble Sort et Selection Sort effectuent
** le même nombre d'échanges ?
**
** Teste notamment avec :
**
** [1, 2, 3, 4, 5]
**
** [5, 4, 3, 2, 1]
**
** ------------------------------------------------------------
**
** 🎯 PARTIE 6 — TABLEAU DE RÉSULTATS
**
** Créer un tableau de comparaison dans tes notes :
**
** | Taille | Tri       | Comparaisons | Échanges | Temps |
** |--------|-----------|--------------|----------|-------|
** | 10     | Bubble    | ?            | ?        | ?     |
** | 10     | Selection | ?            | ?        | ?     |
** | 100    | Bubble    | ?            | ?        | ?     |
** | 100    | Selection | ?            | ?        | ?     |
** | 1000   | Bubble    | ?            | ?        | ?     |
** | 1000   | Selection | ?            | ?        | ?     |
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Les deux algorithmes ont-ils la même complexité ?
**
** 2. Ont-ils forcément le même nombre d'échanges ?
**
** 3. Pourquoi Selection Sort effectue-t-il généralement
**    moins d'échanges ?
**
** 4. Que se passe-t-il lorsque la taille passe
**    de 100 à 1000 ?
**
** 5. Pourquoi le temps devient-il plus visible avec
**    de grands tableaux ?
**
** 6. Est-ce que le temps mesuré sur 10 éléments est
**    vraiment significatif ?
**
** 7. Pourquoi faut-il tester les deux algorithmes
**    avec exactement les mêmes données ?
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Générer automatiquement un tableau de taille :
**
** 10
** 100
** 1000
** 10000
**
** avec des valeurs aléatoires.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Tester trois situations :
**
** 1. Tableau déjà trié
** 2. Tableau dans l'ordre inverse
** 3. Tableau aléatoire
**
** Comparer les résultats.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Ajouter Bubble Sort optimisé :
**
** void bubble_sort_optimized(int *tab, int size);
**
** Puis comparer :
**
** Bubble classique
** Bubble optimisé
** Selection Sort
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Ne plus apprendre les algorithmes de tri uniquement
** comme des morceaux de code.
**
** Tu dois comprendre :
**
** ALGORITHME
**      ↓
** nombre d'opérations
**      ↓
** complexité
**      ↓
** comportement selon la taille des données
**
** ------------------------------------------------------------
**
** 🧠 RÉFLEXE À RETENIR :
**
** Bubble Sort :
**
** beaucoup de comparaisons
** + échanges successifs
**
**
** Selection Sort :
**
** recherche du minimum
** + généralement moins d'échanges
**
**
** Les deux classiques sont en O(n²) dans le pire cas.
**
** ------------------------------------------------------------
**
** 🎯 QUESTION ORALE PISCINE :
**
** "Quelle est la différence principale entre
** Bubble Sort et Selection Sort ?"
**
** Tu dois être capable de répondre avec le principe
** de fonctionnement ET avec les complexités.
*/