/*
** EXERCICE : Recherche binaire — visualisation de log(n)
**
** OBJECTIF :
**
** Refaire la recherche binaire de l'exercice précédent,
** mais cette fois afficher chaque étape de la recherche.
**
** Le but est de VOIR la zone de recherche se réduire
** progressivement.
**
** ------------------------------------------------------------
**
** TABLEAU :
**
** [2, 5, 8, 12, 16, 23, 38, 42]
**
** Recherche :
**
** 38
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** int binary_search(int *tab, int size, int value);
**
** La fonction doit retourner :
**
** - l'indice de la valeur si elle est trouvée ;
** - -1 si la valeur n'existe pas.
**
** ------------------------------------------------------------
**
** 🔎 NOUVELLE CONTRAINTE :
**
** À CHAQUE TOUR DE BOUCLE, afficher :
**
** Début : X
** Fin : X
** Milieu : X
**
** Exemple :
**
** Début : 0
** Fin : 7
** Milieu : 3
**
** Début : 4
** Fin : 7
** Milieu : 5
**
** ...
**
** ------------------------------------------------------------
**
** 🧠 CE QUE TU DOIS OBSERVER :
**
** Au départ :
**
** 8 éléments
**
** [0 ------------------------- 7]
**
** Après une étape :
**
** environ 4 éléments
**
** [4 ------------- 7]
**
** Après une autre étape :
**
** environ 2 éléments
**
** [6 ----- 7]
**
** Puis :
**
** environ 1 élément
**
** [6]
**
** La zone de recherche est divisée par environ 2
** à chaque étape.
**
** ------------------------------------------------------------
**
** 🎯 ALGORITHME :
**
** 1. start = 0
**
** 2. end = size - 1
**
** 3. Tant que start <= end :
**
**    a. Calculer middle
**
**    b. Afficher start
**
**    c. Afficher end
**
**    d. Afficher middle
**
**    e. Comparer tab[middle] avec value
**
**    f. Réduire la zone de recherche
**
** ------------------------------------------------------------
**
** ⚠️ IMPORTANT :
**
** L'affichage doit être effectué AVANT de modifier
** start ou end.
**
** Cela permet de voir exactement la zone examinée
** à cette étape.
**
** ------------------------------------------------------------
**
** 🎯 TESTS OBLIGATOIRES :
**
** Test 1 :
**
** Recherche : 38
**
** Résultat attendu :
**
** Trouvé à l'indice 6
**
**
** Test 2 :
**
** Recherche : 2
**
** Résultat attendu :
**
** Trouvé à l'indice 0
**
**
** Test 3 :
**
** Recherche : 42
**
** Résultat attendu :
**
** Trouvé à l'indice 7
**
**
** Test 4 :
**
** Recherche : 100
**
** Résultat attendu :
**
** Valeur non trouvée
**
**
** ------------------------------------------------------------
**
** 🧪 EXPÉRIENCE :
**
** Teste plusieurs valeurs et observe le nombre d'étapes.
**
** Pose-toi cette question :
**
** "Combien d'éléments restent après chaque étape ?"
**
**
** 8
** ↓
** 4
** ↓
** 2
** ↓
** 1
**
** ------------------------------------------------------------
**
** 🧠 COMPRENDRE O(log n) :
**
** Si le tableau contient :
**
** 8 éléments → environ 3 divisions
** 16 éléments → environ 4 divisions
** 32 éléments → environ 5 divisions
** 64 éléments → environ 6 divisions
** 128 éléments → environ 7 divisions
**
** Tu peux observer que lorsque la taille du tableau
** double, on ajoute seulement environ UNE étape.
**
** C'est l'idée fondamentale de O(log n).
**
** ------------------------------------------------------------
**
** 🎯 QUESTIONS À RÉPONDRE APRÈS L'EXERCICE :
**
** 1. Pourquoi la zone de recherche diminue-t-elle ?
**
** 2. Pourquoi ne regarde-t-on pas tous les éléments ?
**
** 3. Que représente le milieu ?
**
** 4. Combien d'éléments sont éliminés approximativement
**    à chaque étape ?
**
** 5. Pourquoi dit-on O(log n) ?
**
** 6. Si le tableau contient 1 000 éléments, pourquoi
**    la recherche binaire reste-t-elle rapide ?
**
** 7. Pourquoi la recherche linéaire serait-elle moins
**    efficace sur un très grand tableau ?
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ :
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
**
** Explique la différence entre les deux.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajouter :
**
** Étape : 1
** Début : 0
** Fin : 7
** Milieu : 3
**
** Étape : 2
** ...
**
** Cela permet de compter directement le nombre
** d'itérations nécessaires.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Afficher également :
**
** Valeur au milieu : X
**
** Exemple :
**
** Début : 0
** Fin : 7
** Milieu : 3
** Valeur au milieu : 12
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Teste avec un tableau beaucoup plus grand :
**
** 16 éléments
** puis 32
** puis 64
** puis 128.
**
** Note le nombre d'étapes nécessaires.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Ne plus considérer O(log n) comme une formule abstraite.
**
** Tu dois être capable de VOIR le principe :
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
** ↓
** 1
**
** Et savoir expliquer :
**
** "À chaque étape, je divise la zone de recherche
** par environ deux. Le nombre d'étapes augmente donc
** logarithmiquement avec la taille du tableau."
*/