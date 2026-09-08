/*
** EXERCICE : Complexité linéaire
**
** OBJECTIF :
**
** Comprendre pourquoi une boucle qui parcourt n éléments
** possède généralement une complexité en O(n).
**
**
** CODE À ANALYSER :
**
**     for (int i = 0; i < n; i++) {
**         printf("%d\n", i);
**     }
**
**
** QUESTIONS :
**
** 1. Combien de fois la boucle tourne-t-elle ?
**
** 2. Quelle est la complexité de cette boucle ?
**
** 3. Que se passe-t-il si n double ?
**
**
**
** ÉTAPE 1 — COMPTER LES TOURS
**
** Observe la condition :
**
**     i < n
**
** et l'incrémentation :
**
**     i++
**
** La variable i prend successivement les valeurs :
**
**     0
**     1
**     2
**     3
**     ...
**     n - 1
**
**
** La boucle s'exécute donc n fois.
**
**
**
** ÉTAPE 2 — COMPRENDRE O(n)
**
** À chaque tour, le programme effectue une opération :
**
**     printf("%d\n", i);
**
**
** Si n augmente, le nombre de tours augmente également.
**
** Exemple :
**
**     n = 10
**     → 10 tours
**
**     n = 100
**     → 100 tours
**
**     n = 1 000
**     → 1 000 tours
**
**
** Le nombre d'opérations est directement proportionnel
** à la taille de n.
**
**
** Donc :
**
**     O(n)
**
**
**
** ÉTAPE 3 — SI n DOUBLE
**
** Imagine :
**
**     n = 10
**     → 10 tours
**
** Si n devient :
**
**     n = 20
**     → 20 tours
**
**
** Si :
**
**     n = 1 000
**
** alors :
**
**     1 000 tours
**
**
** Et si n double :
**
**     n → 2n
**
**
** le nombre de tours double également.
**
**
**
** MENTAL MODEL :
**
**     n petit
**         ↓
**     peu de tours
**
**     n grand
**         ↓
**     beaucoup de tours
**
**
** Contrairement à O(1), le temps de traitement dépend
** directement de la taille des données.
**
**
**
** COMPARAISON AVEC L'EXERCICE PRÉCÉDENT :
**
**     tab[0]       → O(1)
**
**     for (...)    → O(n)
**
**
** Pourquoi ?
**
**     tab[0]
**     → accès direct
**
**     for
**     → plusieurs opérations
**       dépendant de n
**
**
**
** RÈGLE À RETENIR :
**
**     Une boucle qui s'exécute n fois
**     est généralement en O(n).
**
**
** ATTENTION :
**
** Ne regarde pas uniquement la présence du mot "for".
**
** Il faut déterminer COMBIEN DE FOIS la boucle s'exécute.
**
**
** Exemple :
**
**     for (int i = 0; i < 10; i++)
**
** s'exécute toujours 10 fois.
**
** Ce n'est donc pas O(n) si 10 est une constante :
**
**     O(10) → O(1)
**
**
**
** BONUS :
**
** Analyse mentalement :
**
**     for (int i = 0; i < n; i++) {
**         printf("%d\n", i);
**     }
**
**     for (int i = 0; i < n * 2; i++) {
**         printf("%d\n", i);
**     }
**
** Les deux sont-elles O(n) ?
**
** Explique pourquoi.
**
**
**
** 🎯 OBJECTIF PISCINE :
**
** Quand tu vois une boucle, prends immédiatement le réflexe :
**
**     1. Combien de fois tourne-t-elle ?
**     2. Est-ce que cela dépend de n ?
**     3. Si oui → quelle relation avec n ?
**
** Ici :
**
**     n tours
**     ↓
**     O(n)
*/