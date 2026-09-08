/*
** EXERCICE : Mini gestionnaire d'algorithmes
**
** OBJECTIF :
**
** Créer un programme regroupant plusieurs algorithmes
** étudiés précédemment dans un seul programme.
**
** Le programme fonctionne avec un MENU.
**
** ------------------------------------------------------------
**
** ===== MENU =====
**
** 1. Afficher le tableau
** 2. Trier croissant
** 3. Trier décroissant
** 4. Recherche linéaire
** 5. Recherche binaire
** 6. Trouver le minimum
** 7. Trouver le maximum
** 8. Inverser le tableau
** 9. Quitter
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONS À CRÉER :
**
** void print_array(int *tab, int size);
**
** void bubble_sort(int *tab, int size);
**
** void selection_sort(int *tab, int size);
**
** int linear_search(int *tab, int size, int value);
**
** int binary_search(int *tab, int size, int value);
**
** int find_min(int *tab, int size);
**
** int find_max(int *tab, int size);
**
** void reverse_array(int *tab, int size);
**
** ------------------------------------------------------------
**
** 🧠 RÈGLE IMPORTANTE :
**
** Chaque fonction doit avoir UNE responsabilité.
**
** print_array()
** → afficher
**
** bubble_sort()
** → trier
**
** selection_sort()
** → trier
**
** linear_search()
** → rechercher linéairement
**
** binary_search()
** → rechercher par dichotomie
**
** find_min()
** → trouver le minimum
**
** find_max()
** → trouver le maximum
**
** reverse_array()
** → inverser
**
** ------------------------------------------------------------
**
** 🎯 TABLEAU DE DÉPART :
**
** Utiliser par exemple :
**
** [42, 15, 8, 23, 4, 16, 9, 30]
**
** Le tableau doit être modifiable directement.
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 1 — AFFICHER
**
** Choix : 1
**
** Afficher tous les éléments du tableau.
**
** Exemple :
**
** Tableau :
** 42 15 8 23 4 16 9 30
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 2 — TRIER CROISSANT
**
** Choix : 2
**
** Utiliser Bubble Sort.
**
** Exemple :
**
** Avant :
** 42 15 8 23 4 16 9 30
**
** Après :
** 4 8 9 15 16 23 30 42
**
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 3 — TRIER DÉCROISSANT
**
** Choix : 3
**
** Utiliser Selection Sort.
**
** Exemple :
**
** Avant :
** 4 8 9 15 16 23 30 42
**
** Après :
** 42 30 23 16 15 9 8 4
**
**
** Tu dois adapter l'algorithme pour obtenir un ordre
** décroissant.
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 4 — RECHERCHE LINÉAIRE
**
** Choix : 4
**
** Demander une valeur à l'utilisateur.
**
** Appeler :
**
** linear_search(tab, size, value);
**
** Si trouvée :
**
** Valeur trouvée à l'indice X
**
** Sinon :
**
** Valeur non trouvée
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 5 — RECHERCHE BINAIRE
**
** Choix : 5
**
** Demander une valeur.
**
** Appeler :
**
** binary_search(tab, size, value);
**
**
** ⚠️ ATTENTION :
**
** La recherche binaire fonctionne uniquement si le tableau
** est trié dans l'ordre attendu par ton algorithme.
**
** Réfléchis donc à ce que ton programme doit faire si
** le tableau n'est pas trié.
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 6 — MINIMUM
**
** Choix : 6
**
** Appeler :
**
** find_min(tab, size);
**
**
** Exemple :
**
** Minimum : 4
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 7 — MAXIMUM
**
** Choix : 7
**
** Appeler :
**
** find_max(tab, size);
**
**
** Exemple :
**
** Maximum : 42
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 8 — INVERSER
**
** Choix : 8
**
** Inverser directement le tableau.
**
** Exemple :
**
** Avant :
** 1 2 3 4 5
**
** Après :
** 5 4 3 2 1
**
**
** ⚠️ Ne crée pas de deuxième tableau.
**
** Utilise des échanges entre les éléments.
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONNALITÉ 9 — QUITTER
**
** Choix : 9
**
** Afficher un message puis terminer le programme.
**
** ------------------------------------------------------------
**
** 🧠 STRUCTURE DU PROGRAMME :
**
** Le main doit principalement gérer le menu.
**
**
** main()
**   │
**   ├── afficher menu
**   │
**   ├── lire choix
**   │
**   ├── switch / if
**   │
**   ├── appeler la fonction correspondante
**   │
**   └── recommencer
**
** ------------------------------------------------------------
**
** ⚠️ IMPORTANT :
**
** Ne mets PAS tout le code dans main().
**
**
** Le main doit rester relativement court.
**
** La logique des algorithmes doit rester dans les
** fonctions correspondantes.
**
** ------------------------------------------------------------
**
** 🧪 SCÉNARIO DE TEST :
**
** Lance le programme puis teste :
**
** 1 → afficher
**
** 2 → trier croissant
**
** 1 → afficher
**
** 6 → minimum
**
** 7 → maximum
**
** 4 → rechercher une valeur
**
** 8 → inverser
**
** 1 → afficher
**
** 3 → trier décroissant
**
** 1 → afficher
**
** 9 → quitter
**
** ------------------------------------------------------------
**
** 🎯 QUESTIONS IMPORTANTES :
**
** 1. Pourquoi utiliser des fonctions séparées ?
**
** 2. Pourquoi passer `int *tab` aux fonctions ?
**
** 3. Pourquoi passer `size` ?
**
** 4. Quelles fonctions modifient le tableau ?
**
** 5. Quelles fonctions ne font que lire le tableau ?
**
** 6. Pourquoi binary_search() nécessite-t-elle un tableau
**    trié ?
**
** 7. Que se passe-t-il si tu inverses le tableau puis
**    essayes immédiatement une recherche binaire ?
**
** 8. Quelle est la complexité de chaque algorithme ?
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉS À COMPLÉTER :
**
** print_array()       → O(?)
**
** bubble_sort()       → O(?)
**
** selection_sort()    → O(?)
**
** linear_search()     → O(?)
**
** binary_search()     → O(?)
**
** find_min()          → O(?)
**
** find_max()          → O(?)
**
** reverse_array()     → O(?)
**
**
** ------------------------------------------------------------
**
** 🧠 TABLEAU DE SYNTHÈSE :
**
** | Fonction          | Modifie ? | Complexité |
** |-------------------|-----------|------------|
** | print_array       | ?         | O(?)       |
** | bubble_sort       | ?         | O(?)       |
** | selection_sort    | ?         | O(?)       |
** | linear_search     | ?         | O(?)       |
** | binary_search     | ?         | O(?)       |
** | find_min          | ?         | O(?)       |
** | find_max          | ?         | O(?)       |
** | reverse_array     | ?         | O(?)       |
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajouter :
**
** 10. Compter les éléments
**
** Afficher :
**
** Taille du tableau : X
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Ajouter :
**
** 11. Trouver le deuxième plus grand
**
** Réutiliser le raisonnement de l'exercice précédent.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Ajouter un compteur de comparaisons pour les tris
** et les recherches.
**
** Exemple :
**
** Recherche binaire
** Comparaisons : X
**
** ------------------------------------------------------------
**
** ⭐ BONUS 4 :
**
** Permettre à l'utilisateur de choisir le tableau
** ou de saisir ses propres valeurs.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 5 — CHALLENGE PISCINE :
**
** Ajouter un système permettant de savoir si le tableau
** est actuellement trié.
**
** Créer :
**
** int is_sorted(int *tab, int size);
**
** Retourner :
**
** 1 → tableau trié
** 0 → tableau non trié
**
** Puis empêcher la recherche binaire si le tableau
** n'est pas trié.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Cet exercice est une SYNTHÈSE.
**
** Tu dois maintenant être capable de combiner :
**
** - tableaux
** - pointeurs
** - fonctions
** - boucles
** - conditions
** - recherche
** - tri
** - complexité
** - menu
**
** dans un seul programme.
**
** ------------------------------------------------------------
**
** 🧠 ARCHITECTURE À RETENIR :
**
**                  main()
**                    │
**                 MENU
**                    │
**       ┌────────────┼────────────┐
**       ↓            ↓            ↓
**     TRI          RECHERCHE     ANALYSE
**       │            │            │
**   ┌───┴───┐    ┌───┴────┐    ┌──┴──┐
**   ↓       ↓    ↓        ↓    ↓     ↓
** Bubble Selection Linear Binary Min  Max
**
**                    │
**                    ↓
**              Reverse Array
**
** ------------------------------------------------------------
**
** 🎯 QUESTION ORALE PISCINE :
**
** "Quelle est la différence entre une recherche linéaire
** et une recherche binaire, et dans quelles conditions
** peux-tu utiliser la recherche binaire ?"
**
** Tu dois pouvoir répondre sans regarder ton code.
*/