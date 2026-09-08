/*
** EXERCICE : Tri par insertion
**
** OBJECTIF :
**
** Implémenter l'algorithme de tri par insertion
** (Insertion Sort).
**
** ------------------------------------------------------------
**
** TABLEAU DE DÉPART :
**
** [5, 3, 4, 1, 2]
**
** RÉSULTAT ATTENDU :
**
** [1, 2, 3, 4, 5]
**
** ------------------------------------------------------------
**
** 🎯 PRINCIPE :
**
** Le tableau est considéré comme séparé en deux parties :
**
** [éléments déjà triés] [éléments à traiter]
**
**
** Au début :
**
** [5] [3, 4, 1, 2]
**
** Puis tu prends 3 et tu l'insères au bon endroit :
**
** [3, 5] [4, 1, 2]
**
** Puis 4 :
**
** [3, 4, 5] [1, 2]
**
** Puis 1 :
**
** [1, 3, 4, 5] [2]
**
** Puis 2 :
**
** [1, 2, 3, 4, 5] []
**
** ------------------------------------------------------------
**
** 🧠 IMAGE MENTALE :
**
** Imagine que tu tries des cartes à jouer dans ta main.
**
** Tu prends une nouvelle carte.
**
** Tu regardes les cartes déjà triées.
**
** Tu déplaces les cartes plus grandes vers la droite.
**
** Puis tu places la nouvelle carte au bon endroit.
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** void insertion_sort(int *tab, int size);
**
** La fonction doit modifier directement le tableau.
**
** ------------------------------------------------------------
**
** 🧩 VARIABLES CONSEILLÉES :
**
** int i;
** int j;
** int key;
**
** Rôle :
**
** i   → élément actuellement traité
**
** j   → permet de parcourir la partie déjà triée
**
** key → valeur que tu veux insérer
**
** ------------------------------------------------------------
**
** 🔎 LOGIQUE À COMPRENDRE :
**
** Pour chaque nouvel élément :
**
** 1. Sauvegarder sa valeur dans key.
**
** 2. Regarder les éléments situés à gauche.
**
** 3. Tant qu'un élément est plus grand que key :
**
**    → le déplacer d'une position vers la droite.
**
** 4. Lorsque tu trouves la bonne position :
**
**    → placer key à cet endroit.
**
** ------------------------------------------------------------
**
** ⚠️ ATTENTION :
**
** Tu ne fais pas simplement un échange comme dans
** Bubble Sort.
**
** Tu dois DÉPLACER les éléments pour créer une place
** permettant d'insérer key.
**
** ------------------------------------------------------------
**
** 🧪 TESTS OBLIGATOIRES :
**
** Test 1 :
**
** [5, 3, 4, 1, 2]
** → [1, 2, 3, 4, 5]
**
** Test 2 :
**
** [1, 2, 3, 4, 5]
** → [1, 2, 3, 4, 5]
**
** Test 3 :
**
** [5, 4, 3, 2, 1]
** → [1, 2, 3, 4, 5]
**
** Test 4 :
**
** [7]
** → [7]
**
** Test 5 :
**
** [4, 2, 4, 1, 3]
** → [1, 2, 3, 4, 4]
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi le premier élément peut-il être considéré
**    comme déjà trié ?
**
** 2. Que contient key ?
**
** 3. Pourquoi doit-on déplacer les éléments vers la droite ?
**
** 4. Quand faut-il arrêter le déplacement ?
**
** 5. Où doit-on placer key ?
**
** 6. Pourquoi ne doit-on pas perdre la valeur de key ?
**
**
** ------------------------------------------------------------
**
** 🎯 VISUALISATION :
**
** Exemple :
**
** [3, 5] [4, 1, 2]
**
** key = 4
**
** Comparaison :
**
** 5 > 4
**
** → déplacer 5
**
** [3, _, 5] [1, 2]
**
** Puis :
**
** 3 > 4 ?
**
** Non.
**
** → placer 4.
**
** [3, 4, 5] [1, 2]
**
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ :
**
** Déterminer :
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
**
** Puis comparer avec :
**
** Bubble Sort
** Selection Sort
** Insertion Sort
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Compter le nombre de comparaisons.
**
** Afficher :
**
** Comparaisons : X
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Compter le nombre de déplacements.
**
** Afficher :
**
** Déplacements : X
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Afficher le tableau après chaque insertion.
**
** Exemple :
**
** Départ :
** 5 3 4 1 2
**
** Après insertion de 3 :
** 3 5 4 1 2
**
** Après insertion de 4 :
** 3 4 5 1 2
**
** ...
**
** ------------------------------------------------------------
**
** ⭐ BONUS 4 :
**
** Créer une version décroissante :
**
** void insertion_sort_desc(int *tab, int size);
**
** Exemple :
**
** [5, 3, 4, 1, 2]
** → [5, 4, 3, 2, 1]
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Comprendre le principe :
**
** [TRIÉ] [NON TRIÉ]
**    ↓
** prendre un élément
**    ↓
** chercher sa position
**    ↓
** déplacer les éléments
**    ↓
** insérer
**    ↓
** [TRIÉ] [NON TRIÉ]
**
** Tu dois être capable d'expliquer l'algorithme
** sans regarder le code.
**
** ------------------------------------------------------------
**
** 🧠 RÉFLEXE À RETENIR :
**
** INSERTION SORT =
**
** "Je prends un élément et je l'insère
** au bon endroit dans la partie déjà triée."
**
** ------------------------------------------------------------
**
** 🎯 QUESTION ORALE PISCINE :
**
** "Quelle est la différence entre Selection Sort
** et Insertion Sort ?"
**
** Explique la différence avec le mécanisme utilisé
** par chaque algorithme.
*/