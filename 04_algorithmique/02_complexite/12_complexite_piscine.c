/*
** EXERCICE : Complexité Piscine
**
** OBJECTIF :
**
** Pour chacun des algorithmes suivants, déterminer :
**
** - son nom ;
** - sa complexité ;
** - pourquoi ;
** - le nombre approximatif d'opérations pour n = 1000.
**
** IMPORTANT :
**
** Tu dois répondre SANS exécuter de programme.
**
** ------------------------------------------------------------
**
** ALGORITHMES À ANALYSER :
**
** 1. Recherche dans un tableau
**
** 2. Somme d'un tableau
**
** 3. Recherche du maximum
**
** 4. Double boucle
**
** 5. Recherche binaire
**
** 6. Boucle qui divise n par 2
**
** ------------------------------------------------------------
**
** POUR CHAQUE ALGORITHME, COMPLÈTE :
**
** Nom :
** Complexité :
** Pourquoi :
** Nombre approximatif d'opérations pour n = 1000 :
**
** ------------------------------------------------------------
**
** ALGORITHME 1 — RECHERCHE DANS UN TABLEAU
**
** Exemple de principe :
**
** for (int i = 0; i < n; i++) {
**     if (tab[i] == value) {
**         return i;
**     }
** }
**
** Questions :
**
** - Combien d'éléments peut-on devoir parcourir ?
** - Peut-on trouver la valeur dès le premier élément ?
** - Peut-on devoir parcourir tout le tableau ?
**
** Complexité : ?
**
** ------------------------------------------------------------
**
** ALGORITHME 2 — SOMME D'UN TABLEAU
**
** Exemple de principe :
**
** int sum = 0;
**
** for (int i = 0; i < n; i++) {
**     sum += tab[i];
** }
**
** Questions :
**
** - Peut-on éviter de regarder un élément ?
** - Combien d'éléments faut-il parcourir ?
**
** Complexité : ?
**
** ------------------------------------------------------------
**
** ALGORITHME 3 — RECHERCHE DU MAXIMUM
**
** Exemple de principe :
**
** int max = tab[0];
**
** for (int i = 1; i < n; i++) {
**     if (tab[i] > max) {
**         max = tab[i];
**     }
** }
**
** Questions :
**
** - Combien d'éléments faut-il examiner ?
** - Peut-on trouver le maximum sans parcourir tout le tableau ?
**
** Complexité : ?
**
** ------------------------------------------------------------
**
** ALGORITHME 4 — DOUBLE BOUCLE
**
** Exemple :
**
** for (int i = 0; i < n; i++) {
**     for (int j = 0; j < n; j++) {
**         printf("%d %d\n", i, j);
**     }
** }
**
** Questions :
**
** - Combien de fois tourne la première boucle ?
** - Combien de fois tourne la deuxième boucle ?
** - Combien de fois la deuxième boucle tourne-t-elle
**   au total ?
**
** Complexité : ?
**
** ------------------------------------------------------------
**
** ALGORITHME 5 — RECHERCHE BINAIRE
**
** Le tableau est trié.
**
** Principe :
**
** - regarder l'élément du milieu ;
** - éliminer la moitié inutile ;
** - recommencer ;
** - continuer jusqu'à trouver la valeur.
**
** Exemple :
**
** n
** ↓
** n / 2
** ↓
** n / 4
** ↓
** n / 8
** ↓
** ...
**
** Questions :
**
** - Combien d'éléments restent après chaque étape ?
** - Combien d'étapes environ pour n = 1000 ?
**
** Complexité : ?
**
** ------------------------------------------------------------
**
** ALGORITHME 6 — BOUCLE QUI DIVISE n PAR 2
**
** Exemple :
**
** int i = n;
**
** while (i > 1) {
**     i = i / 2;
** }
**
** Observe l'évolution :
**
** n
** n / 2
** n / 4
** n / 8
** n / 16
** ...
**
** Questions :
**
** - Est-ce que i diminue de 1 ?
** - Est-ce que i est divisé par 2 ?
** - Combien d'étapes faut-il avant d'arriver à 1 ?
**
** Complexité : ?
**
** ------------------------------------------------------------
**
** 🎯 TABLEAU FINAL À COMPLÉTER
**
** +--------------------------+------------+----------------------+
** | Algorithme               | Complexité | Opérations n = 1000 |
** +--------------------------+------------+----------------------+
** | Recherche tableau        |     ?      |          ?           |
** | Somme tableau            |     ?      |          ?           |
** | Recherche maximum        |     ?      |          ?           |
** | Double boucle            |     ?      |          ?           |
** | Recherche binaire        |     ?      |          ?           |
** | Division par 2           |     ?      |          ?           |
** +--------------------------+------------+----------------------+
**
** ------------------------------------------------------------
**
** 🏆 CLASSEMENT
**
** Classe les 6 algorithmes du PLUS EFFICACE
** au MOINS EFFICACE.
**
** 1. __________________
**
** 2. __________________
**
** 3. __________________
**
** 4. __________________
**
** 5. __________________
**
** 6. __________________
**
** ------------------------------------------------------------
**
** 🧠 ATTENTION
**
** Plusieurs algorithmes peuvent avoir la même complexité.
**
** Ne cherche donc pas forcément à obtenir 6 complexités
** différentes.
**
** ------------------------------------------------------------
**
** ⭐ BONUS — ORDRE DE GRANDEUR
**
** Pour chaque complexité, estime le nombre d'opérations
** lorsque n = 1000 :
**
** O(1)     → environ ?
**
** O(log n) → environ ?
**
** O(n)     → environ ?
**
** O(n²)    → environ ?
**
** ------------------------------------------------------------
**
** ⭐⭐ BONUS PISCINE
**
** Imagine maintenant :
**
** n = 1 000 000
**
** Recalcule approximativement :
**
** O(1)
** O(log n)
** O(n)
** O(n²)
**
** Puis explique pourquoi un algorithme O(n²) peut devenir
** très problématique avec de grandes données.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable de voir un morceau de code et de dire
** rapidement :
**
** "Celui-ci est en O(n)."
**
** "Celui-ci est en O(n²)."
**
** "Celui-ci est en O(log n)."
**
**
** Et surtout être capable d'expliquer POURQUOI.
*/