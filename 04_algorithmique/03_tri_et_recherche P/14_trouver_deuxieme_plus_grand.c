/*
** EXERCICE : Trouver le deuxième plus grand élément
**
** OBJECTIF :
**
** Trouver le deuxième plus grand élément d'un tableau
** SANS TRIER le tableau.
**
** ------------------------------------------------------------
**
** TABLEAU :
**
** [10, 50, 20, 80, 40]
**
** RÉSULTAT ATTENDU :
**
** Deuxième plus grand : 50
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTE PRINCIPALE :
**
** Tu ne dois PAS utiliser de fonction de tri.
**
** Ne pas utiliser :
**
** - bubble_sort()
** - selection_sort()
** - insertion_sort()
** - qsort()
**
** Le tableau doit rester dans son ordre initial.
**
** ------------------------------------------------------------
**
** 🎯 CHALLENGE :
**
** Essaie de résoudre le problème en UN SEUL PARCOURS
** du tableau.
**
** Tu dois donc éviter :
**
** - de trier le tableau ;
** - de parcourir le tableau plusieurs fois ;
** - de créer un deuxième tableau.
**
** ------------------------------------------------------------
**
** 🧠 INDICE :
**
** Tu dois être capable de retenir DEUX informations :
**
** plus_grand
** deuxième_plus_grand
**
** Exemple :
**
** [10, 50, 20, 80, 40]
**
** Au fur et à mesure du parcours, mets à jour ces
** deux informations.
**
** ------------------------------------------------------------
**
** 🔎 RÉFLÉCHISSEMENT :
**
** Départ :
**
** plus grand          → ?
** deuxième plus grand → ?
**
** Tu lis ensuite chaque élément du tableau.
**
** Pour chaque valeur, pose-toi :
**
** 1. Est-elle plus grande que le plus grand actuel ?
**
** 2. Si oui, que devient l'ancien plus grand ?
**
** 3. Sinon, peut-elle devenir le deuxième plus grand ?
**
** ------------------------------------------------------------
**
** 🧪 EXEMPLE DE RAISONNEMENT :
**
** Tableau :
**
** [10, 50, 20, 80, 40]
**
** Tu parcours :
**
** 10
** ↓
** 50
** ↓
** 20
** ↓
** 80
** ↓
** 40
**
** À chaque étape, tu maintiens :
**
** [plus grand]
** [deuxième plus grand]
**
** À la fin :
**
** plus grand          → 80
** deuxième plus grand → 50
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** int second_largest(int *tab, int size);
**
** La fonction doit retourner le deuxième plus grand
** élément.
**
** ------------------------------------------------------------
**
** ⚠️ CAS PARTICULIERS :
**
** Réfléchis à ce qui doit se passer avec :
**
** - un tableau de 1 élément ;
** - un tableau de 2 éléments ;
** - des valeurs négatives ;
** - deux valeurs identiques ;
** - toutes les valeurs identiques.
**
** Exemple :
**
** [10, 50]
** → deuxième plus grand = 10
**
** Exemple :
**
** [-10, -5, -20, -3]
** → deuxième plus grand = -5
**
** ------------------------------------------------------------
**
** ⚠️ QUESTION IMPORTANTE :
**
** Que signifie "deuxième plus grand" ?
**
** Exemple :
**
** [10, 80, 80, 50]
**
** Veux-tu obtenir :
**
** 80
**
** ou :
**
** 50
**
** Décide de la règle avant de coder.
**
** Pour cet exercice, considère que l'on cherche
** le DEUXIÈME PLUS GRAND ÉLÉMENT DISTINCT.
**
** Donc :
**
** [10, 80, 80, 50]
** → 50
**
** ------------------------------------------------------------
**
** 🎯 TESTS OBLIGATOIRES :
**
** Test 1 :
**
** [10, 50, 20, 80, 40]
** → 50
**
** Test 2 :
**
** [1, 2]
** → 1
**
** Test 3 :
**
** [5, 10, 3, 8, 20]
** → 10
**
** Test 4 :
**
** [-10, -5, -20, -3]
** → -5
**
** Test 5 :
**
** [10, 80, 80, 50]
** → 50
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi n'avons-nous pas besoin de trier ?
**
** 2. Quelles sont les deux informations importantes
**    à conserver ?
**
** 3. Que se passe-t-il lorsque tu trouves un nouveau
**    maximum ?
**
** 4. Pourquoi l'ancien maximum peut-il devenir
**    le deuxième maximum ?
**
** 5. Pourquoi un seul parcours suffit-il ?
**
** 6. Quelle est la complexité de ton algorithme ?
**
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ À DÉTERMINER :
**
** Temps : O(?)
**
** Mémoire supplémentaire : O(?)
**
** Compare avec une solution qui trierait le tableau.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Créer :
**
** int largest(int *tab, int size);
**
** Puis comparer les deux problèmes :
**
** trouver le plus grand
** trouver le deuxième plus grand
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Créer une fonction permettant de trouver le
** troisième plus grand élément DISTINCT.
**
** Exemple :
**
** [10, 50, 20, 80, 40]
**
** → 40
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Afficher les valeurs de plus_grand et
** deuxième_plus_grand après chaque élément parcouru.
**
** Exemple :
**
** Valeur actuelle : 50
** Plus grand : 50
** Deuxième plus grand : 10
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Apprendre à résoudre un problème sans utiliser
** un algorithme plus complexe que nécessaire.
**
** Ici :
**
** PAS DE TRI
**      ↓
** UN SEUL PARCOURS
**      ↓
** DEUX INFORMATIONS CONSERVÉES
**      ↓
** RÉSULTAT
**
** ------------------------------------------------------------
**
** 🧠 RÉFLEXE À RETENIR :
**
** Quand on te demande :
**
** "Trouve le maximum / minimum / deuxième maximum..."
**
** demande-toi immédiatement :
**
** "Puis-je résoudre ça en un seul parcours ?"
**
**
** 🎯 QUESTION ORALE PISCINE :
**
** "Comment trouver le deuxième plus grand élément
** en O(n) sans trier le tableau ?"
**
** Tu dois pouvoir expliquer ton idée avant d'écrire
** le code.
*/