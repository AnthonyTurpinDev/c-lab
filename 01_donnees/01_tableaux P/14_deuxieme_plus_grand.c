/*
** EXERCICE : Deuxième plus grand nombre
**
** FICHIER : 14_deuxieme_plus_grand.c
**
** OBJECTIF :
**
** Apprendre à trouver le deuxième plus grand élément
** d'un tableau.
**
** Cet exercice demande plus de réflexion que la simple
** recherche du maximum.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Déclare le tableau suivant :
**
**     int tab[] = {10, 4, 25, 8, 17};
**
**
** Trouve le deuxième plus grand nombre du tableau.
**
**
** RÉSULTAT ATTENDU :
**
**     Deuxième plus grand = 17
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Commence par observer le tableau :
**
**     {10, 4, 25, 8, 17}
**
**
** Le plus grand nombre est :
**
**     25
**
**
** Mais ce n'est PAS la réponse.
**
** Tu dois trouver le plus grand nombre parmi
** les valeurs restantes.
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise des variables pour mémoriser les
**   plus grandes valeurs rencontrées.
** - Parcours le tableau.
** - Utilise des conditions pour comparer les valeurs.
** - Affiche le deuxième plus grand nombre avec printf().
**
**
** ⚠️ INTERDICTION :
**
** Ne trie pas le tableau.
**
** Ne cherche pas directement la valeur 17.
**
** Ton programme doit fonctionner si les valeurs
** du tableau changent.
**
**
** ============================================
** QUESTIONS À TE POSER
** ============================================
**
** 1. Comment mémoriser le plus grand nombre ?
**
** 2. Comment mémoriser le deuxième plus grand ?
**
** 3. Que dois-tu faire lorsqu'un nouveau maximum
**    est trouvé ?
**
** 4. Que devient l'ancien maximum ?
**
** 5. Que faire si une valeur est plus petite que
**    le maximum mais plus grande que le deuxième ?
**
** 6. Comment initialiser correctement tes variables ?
**
**
** ============================================
** EXEMPLE DE RAISONNEMENT
** ============================================
**
** Pour :
**
**     {10, 4, 25, 8, 17}
**
** Tu dois progressivement garder en mémoire
** les deux meilleures valeurs.
**
** À la fin, tu dois avoir quelque chose comme :
**
**     maximum = 25
**     deuxième = 17
**
**
** ============================================
** ⚠️ CAS À RÉFLÉCHIR
** ============================================
**
** Réfléchis aussi à ces tableaux :
**
**     {5, 10, 3, 8, 2}
**
**     {20, 5, 15, 7, 10}
**
**     {100, 50, 75, 25, 90}
**
**
** Essaie de prévoir le résultat AVANT de coder.
**
**
** ============================================
** 🔥 OBJECTIF PISCINE
** ============================================
**
** Ne cherche pas immédiatement une solution sur Internet.
**
** Essaie d'abord de construire ton algorithme
** sur papier.
**
** Tu dois être capable d'expliquer :
**
**     maximum
**     deuxième maximum
**     comparaison
**     mise à jour
**
** avant d'écrire le code.
**
** Cet exercice est volontairement plus difficile :
** l'objectif est de développer ton raisonnement
** algorithmique, pas seulement de faire fonctionner
** le programme.
*/