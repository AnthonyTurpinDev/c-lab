/*
** EXERCICE : Recherche dans un tableau
**
** OBJECTIF :
**
** Créer une fonction permettant de rechercher une valeur
** dans un tableau.
**
** Puis déterminer la complexité de ton algorithme.
**
**
** FONCTION À CRÉER :
**
**     int find_value(int *tab, int size, int value);
**
**
**
** TABLEAU DE TEST :
**
**     [4, 8, 15, 16, 23, 42]
**
**
** VALEUR À RECHERCHER :
**
**     23
**
**
** COMPORTEMENT ATTENDU :
**
** Si la valeur est trouvée :
**
**     retourner son indice.
**
** Exemple :
**
**     23 se trouve à l'indice 4
**
**
** Si la valeur n'est pas trouvée :
**
**     retourner -1
**
**
**
** CONSIGNES :
**
** 1. Créer le tableau :
**
**        int tab[] = {4, 8, 15, 16, 23, 42};
**
**
** 2. Calculer sa taille.
**
** 3. Demander ou définir une valeur à rechercher.
**
** 4. Appeler :
**
**        find_value(tab, size, value);
**
**
** 5. Afficher l'indice trouvé.
**
** 6. Si la fonction retourne -1, afficher que la valeur
**    n'existe pas dans le tableau.
**
**
**
** CONTRAINTES :
**
** - Utiliser une boucle.
** - Parcourir le tableau élément par élément.
** - Ne pas utiliser de fonction de recherche toute faite.
** - La fonction doit retourner un indice.
** - Retourner -1 si la valeur n'est pas trouvée.
**
**
**
** QUESTIONS À TE POSER :
**
** 1. Où commence le tableau ?
**
** 2. Quel indice correspond au premier élément ?
**
** 3. Jusqu'à quel indice dois-je parcourir le tableau ?
**
** 4. Que dois-je comparer à value ?
**
**
**        tab[i] == value
**
** 5. Que dois-je retourner lorsque je trouve la valeur ?
**
** 6. Que dois-je retourner si toute la boucle est terminée
**    sans avoir trouvé la valeur ?
**
**
**
** MENTAL MODEL :
**
** Tableau :
**
**     [4, 8, 15, 16, 23, 42]
**      ↑  ↑   ↑   ↑   ↑   ↑
**      0  1   2   3   4   5
**
**
** Recherche de 23 :
**
**     tab[0] → 4  → pas trouvé
**     tab[1] → 8  → pas trouvé
**     tab[2] → 15 → pas trouvé
**     tab[3] → 16 → pas trouvé
**     tab[4] → 23 → TROUVÉ
**
**
** Résultat :
**
**     4
**
**
**
** COMPLEXITÉ :
**
** Une fois ton algorithme terminé, détermine sa complexité.
**
** Question importante :
**
**     Combien d'éléments dois-je potentiellement parcourir ?
**
**
** Exemple :
**
**     [4, 8, 15, 16, 23, 42]
**
** Si je recherche 4 :
**
**     → trouvé immédiatement
**
** Si je recherche 23 :
**
**     → plusieurs éléments sont parcourus
**
** Si je recherche 42 :
**
**     → presque tout le tableau est parcouru
**
** Si je recherche 100 :
**
**     → tout le tableau est parcouru
**
**
** Tu dois donc distinguer :
**
**     Meilleur cas
**     Pire cas
**
**
** À déterminer toi-même :
**
**     Meilleur cas : ?
**
**     Pire cas : ?
**
**     Complexité globale : ?
**
**
**
** INDICE :
**
** La recherche parcourt les éléments un par un.
**
** Plus le tableau est grand, plus il peut être nécessaire
** de parcourir d'éléments.
**
**
**
** BONUS :
**
** Teste plusieurs recherches :
**
**     4
**     15
**     23
**     42
**     100
**
**
** Pour chaque recherche, note combien d'éléments sont
** examinés avant de trouver la valeur ou de déterminer
** qu'elle n'existe pas.
**
**
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable de regarder un algorithme de recherche
** et de répondre rapidement :
**
**     "Je parcours potentiellement tout le tableau."
**
**
**     → O(n)
**
**
** Puis être capable d'expliquer pourquoi.
*/