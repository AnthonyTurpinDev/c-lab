/*
** EXERCICE : Recherche binaire
**
** OBJECTIF :
**
** Rechercher efficacement une valeur dans un tableau TRIÉ
** en utilisant la recherche binaire.
**
** ------------------------------------------------------------
**
** ⚠️ IMPORTANT :
**
** Le tableau est déjà trié.
**
** Tu ne dois PAS le trier dans ton programme.
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
** Résultat attendu :
**
** Trouvé à l'indice 6
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** int binary_search(int *tab, int size, int value);
**
** La fonction doit :
**
** - retourner l'indice de value si elle est trouvée ;
** - retourner -1 si elle n'existe pas.
**
** ------------------------------------------------------------
**
** 🧠 VARIABLES À UTILISER :
**
** int start;
** int end;
** int middle;
**
** Au début :
**
** start = 0;
** end = size - 1;
**
** ------------------------------------------------------------
**
** 🔎 PRINCIPE :
**
** 1. Définir le début de la zone de recherche.
**
** 2. Définir la fin de la zone de recherche.
**
** 3. Calculer le milieu.
**
** 4. Comparer tab[middle] avec value.
**
** ------------------------------------------------------------
**
** SI :
**
** tab[middle] == value
**
** → valeur trouvée
** → retourner middle
**
** ------------------------------------------------------------
**
** SI :
**
** value < tab[middle]
**
** → la valeur recherchée se trouve éventuellement
**   dans la partie GAUCHE.
**
** → réduire la zone de recherche.
**
** ------------------------------------------------------------
**
** SI :
**
** value > tab[middle]
**
** → la valeur recherchée se trouve éventuellement
**   dans la partie DROITE.
**
** → réduire la zone de recherche.
**
** ------------------------------------------------------------
**
** 🔄 EXEMPLE :
**
** [2, 5, 8, 12, 16, 23, 38, 42]
**
** Recherche : 38
**
** Zone initiale :
**
** 2 ------------------------ 42
** ↑                           ↑
** début                       fin
**
** Regarde le milieu.
**
** Si le milieu est trop petit :
**
** → abandonner toute la moitié gauche.
**
** Puis recommencer sur la nouvelle zone.
**
** ------------------------------------------------------------
**
** ⚠️ RÈGLE ESSENTIELLE :
**
** À chaque étape, tu dois RÉDUIRE la zone de recherche.
**
** Tu ne dois jamais continuer à chercher dans une partie
** qui a déjà été éliminée.
**
** ------------------------------------------------------------
**
** 🎯 BOUCLE :
**
** Continue tant que la zone de recherche est valide.
**
** Pose-toi la question :
**
** Quelle condition signifie que start et end
** délimitent encore une zone possible ?
**
**
** ------------------------------------------------------------
**
** 🎯 DANS MAIN :
**
** Crée :
**
** int tab[] = {2, 5, 8, 12, 16, 23, 38, 42};
**
** Recherche :
**
** 38
**
** Appelle :
**
** binary_search(tab, 8, 38);
**
**
** Affiche :
**
** Trouvé à l'indice 6
**
** ------------------------------------------------------------
**
** TESTS OBLIGATOIRES :
**
** Recherche : 2
** → indice 0
**
** Recherche : 42
** → indice 7
**
** Recherche : 16
** → indice 4
**
** Recherche : 100
** → -1
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTES :
**
** - Le tableau doit être trié.
** - Utiliser début, fin et milieu.
** - Utiliser une boucle.
** - Réduire la zone de recherche à chaque étape.
** - Ne pas parcourir simplement le tableau de gauche à droite.
** - Ne pas utiliser de fonction de recherche toute faite.
** - Ne pas modifier le tableau.
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi la recherche binaire nécessite-t-elle un tableau trié ?
**
** 2. Que représente start ?
**
** 3. Que représente end ?
**
** 4. Comment calculer middle ?
**
** 5. Que dois-tu faire si value est plus petit que tab[middle] ?
**
** 6. Que dois-tu faire si value est plus grand que tab[middle] ?
**
** 7. Pourquoi la zone de recherche diminue-t-elle rapidement ?
**
** 8. Que se passe-t-il lorsque start devient supérieur à end ?
**
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ :
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
** Complexité  : O(?)
**
** Compare avec la recherche linéaire :
**
** Recherche linéaire → ?
** Recherche binaire  → ?
**
** Explique pourquoi.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajoute un compteur de comparaisons.
**
** Exemple :
**
** Recherche : 38
** Comparaisons : X
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Affiche la zone de recherche à chaque étape.
**
** Exemple :
**
** Début : 0
** Fin : 7
** Milieu : X
**
** Puis recommence avec la nouvelle zone.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Crée un programme permettant de choisir entre :
**
** 1. Recherche linéaire
** 2. Recherche binaire
**
** Puis compare le nombre de comparaisons nécessaires.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Comprendre et savoir écrire une recherche binaire
** sans aide.
**
** Réflexe à retenir :
**
** début
**   ↓
** milieu
**   ↓
** comparaison
**   ↓
** moitié gauche OU moitié droite
**   ↓
** nouvelle zone
**   ↓
** recommencer
**
** Phrase à savoir expliquer à l'oral :
**
** "La recherche binaire est en O(log n) car elle élimine
** environ la moitié des éléments à chaque étape."
*/