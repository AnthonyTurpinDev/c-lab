/*
** EXERCICE : Analyse de complexité
**
** OBJECTIF :
**
** Apprendre à déterminer la complexité algorithmique d'un code
** uniquement en lisant sa structure.
**
** Tu dois analyser chaque code SANS l'exécuter.
**
** ------------------------------------------------------------
**
** RAPPEL :
**
** O(1)      → nombre d'opérations constant
** O(log n)  → on réduit le problème par un facteur (ex: /2)
** O(n)      → on parcourt n éléments
** O(n²)     → deux boucles imbriquées dépendant de n
**
** ------------------------------------------------------------
**
** EXEMPLE A :
**
** for (int i = 0; i < n; i++) {
**     printf("%d\n", i);
** }
**
** QUESTION :
** Quelle est la complexité ?
**
**
** ------------------------------------------------------------
**
** EXEMPLE B :
**
** for (int i = 0; i < n; i++) {
**     for (int j = 0; j < n; j++) {
**         printf("%d\n", i + j);
**     }
** }
**
** QUESTION :
** Quelle est la complexité ?
**
**
** ------------------------------------------------------------
**
** EXEMPLE C :
**
** int i = n;
**
** while (i > 1) {
**     i = i / 2;
** }
**
** QUESTION :
** Quelle est la complexité ?
**
**
** ------------------------------------------------------------
**
** 🎯 POUR CHAQUE EXEMPLE :
**
** 1. Observe la boucle.
**
** 2. Demande-toi combien de fois elle peut tourner.
**
** 3. Vérifie si elle dépend de n.
**
** 4. Vérifie si elle divise/réduit n à chaque tour.
**
** 5. Donne UNE seule réponse parmi :
**
**    O(1)
**    O(log n)
**    O(n)
**    O(n²)
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** A → Combien de fois la boucle s'exécute-t-elle ?
**
** B → Combien de fois la boucle intérieure s'exécute-t-elle
**     pour chaque tour de la boucle extérieure ?
**
** C → Que devient i après chaque tour ?
**
**     n → n/2 → n/4 → n/8 → ...
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable de regarder rapidement un morceau de code
** et d'identifier sa complexité sans avoir besoin de l'exécuter.
**
** ------------------------------------------------------------
**
** BONUS :
**
** Crée ensuite 5 petits codes toi-même :
**
** - un code en O(1)
** - un code en O(log n)
** - un code en O(n)
** - un code en O(n²)
** - un code dont tu n'es pas certain de la complexité
**
** Puis analyse-les avant de les exécuter.
*/