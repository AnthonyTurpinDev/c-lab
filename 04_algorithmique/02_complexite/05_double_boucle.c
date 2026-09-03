/*
** EXERCICE : Double boucle
**
** OBJECTIF :
**
** Comprendre comment analyser une boucle imbriquée
** et pourquoi elle produit une complexité en O(n²).
**
**
** CODE À ANALYSER :
**
**     for (int i = 0; i < n; i++) {
**         for (int j = 0; j < n; j++) {
**             printf("%d %d\n", i, j);
**         }
**     }
**
**
** QUESTIONS :
**
** 1. Combien de fois la boucle extérieure tourne-t-elle ?
**
** 2. Combien de fois la boucle intérieure tourne-t-elle
**    pour chaque tour de la boucle extérieure ?
**
** 3. Combien d'itérations sont effectuées au total ?
**
** 4. Quelle est la complexité de l'algorithme ?
**
** 5. Pourquoi ce n'est PAS O(n) ?
**
**
**
** ÉTAPE 1 — BOUCLE EXTÉRIEURE
**
** Observe :
**
**     for (int i = 0; i < n; i++)
**
**
** La variable i prend :
**
**     0
**     1
**     2
**     ...
**     n - 1
**
**
** La boucle extérieure tourne donc :
**
**     n fois
**
**
**
** ÉTAPE 2 — BOUCLE INTÉRIEURE
**
** Pour CHAQUE valeur de i, on exécute :
**
**     for (int j = 0; j < n; j++)
**
**
** La boucle intérieure tourne elle aussi :
**
**     n fois
**
**
** Mais attention :
**
** elle tourne n fois POUR CHAQUE tour de la boucle extérieure.
**
**
**
** ÉTAPE 3 — CALCULER LE NOMBRE TOTAL D'ITÉRATIONS
**
** La boucle extérieure :
**
**     n tours
**
**
** Pour chacun de ces tours :
**
**     n tours de la boucle intérieure
**
**
** Donc :
**
**     n × n
**
**
**     = n²
**
**
**
** Le printf est donc exécuté :
**
**     n² fois
**
**
**
** EXEMPLE :
**
** Si :
**
**     n = 3
**
** Alors :
**
**     boucle extérieure → 3 tours
**
**     boucle intérieure → 3 tours par tour extérieur
**
**
** Total :
**
**     3 × 3 = 9
**
**
** Les couples affichés sont :
**
**     0 0
**     0 1
**     0 2
**     1 0
**     1 1
**     1 2
**     2 0
**     2 1
**     2 2
**
**
**
** EXEMPLE AVEC n = 10 :
**
**     10 × 10 = 100
**
**
** EXEMPLE AVEC n = 100 :
**
**     100 × 100 = 10 000
**
**
** EXEMPLE AVEC n = 1 000 :
**
**     1 000 × 1 000
**
**     = 1 000 000
**
**
**
** COMPLEXITÉ :
**
** Le nombre d'itérations est :
**
**     n²
**
**
** Donc :
**
**     O(n²)
**
**
**
** POURQUOI CE N'EST PAS O(n) ?
**
** Une seule boucle :
**
**     for (int i = 0; i < n; i++)
**
** donne :
**
**     n opérations
**
**     → O(n)
**
**
** Mais ici, pour chacun des n tours de la première boucle,
** on effectue encore n tours de la deuxième boucle.
**
**
** On obtient donc :
**
**     n × n
**
**
** et non :
**
**     n
**
**
**
** MENTAL MODEL :
**
**
**     Une boucle :
**
**         n
**         ↓
**        O(n)
**
**
**     Deux boucles imbriquées :
**
**         n
**         ×
**         n
**         ↓
**        O(n²)
**
**
**
** QUESTION IMPORTANTE :
**
** Que se passe-t-il si n double ?
**
**
** Si :
**
**     n → 2n
**
**
** alors :
**
**     n² → (2n)²
**
**
**     → 4n²
**
**
** Le nombre d'itérations est donc multiplié par 4.
**
**
**
** À DÉTERMINER :
**
** Complète mentalement :
**
**     n = 5
**     → ? itérations
**
**
**     n = 10
**     → ? itérations
**
**
**     n = 100
**     → ? itérations
**
**
**     n = 1 000
**     → ? itérations
**
**
**
** BONUS :
**
** Analyse cette variante :
**
**     for (int i = 0; i < n; i++) {
**         printf("%d\n", i);
**     }
**
**
** Puis compare avec :
**
**     for (int i = 0; i < n; i++) {
**         for (int j = 0; j < n; j++) {
**             printf("%d %d\n", i, j);
**         }
**     }
**
**
** Complète :
**
**     Une boucle      → O(?)
**
**     Deux boucles    → O(?)
**
**
**
** 🎯 OBJECTIF PISCINE :
**
** Quand tu vois des boucles imbriquées, ne te contente pas
** de compter le nombre de mots "for".
**
** Demande-toi :
**
**     "Combien de fois la boucle intérieure est-elle
**      exécutée AU TOTAL ?"
**
**
** Ici :
**
**     n × n
**     ↓
**     n²
**     ↓
**     O(n²)
**
*/