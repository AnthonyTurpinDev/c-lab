/*
** EXERCICE : Recherche linéaire
**
** OBJECTIF :
**
** Implémenter une recherche linéaire dans un tableau.
**
** Puis expliquer la complexité de ton algorithme.
**
**
** FONCTION À CRÉER :
**
**     int linear_search(int *tab, int size, int value);
**
**
**
** PRINCIPE :
**
** Une recherche linéaire consiste à parcourir le tableau
** élément par élément jusqu'à :
**
**     - trouver la valeur recherchée ;
**     - ou atteindre la fin du tableau.
**
**
**
** TABLEAU DE TEST :
**
**     int tab[] = {10, 25, 7, 42, 18, 30};
**
**
** Recherches à effectuer :
**
**     42
**     10
**     30
**     100
**
**
**
** COMPORTEMENT ATTENDU :
**
** Si la valeur est trouvée :
**
**     retourner son indice.
**
**
** Exemple :
**
**     42 → indice 3
**
**
** Si la valeur n'est pas présente :
**
**     retourner -1
**
**
**
** CONSIGNES :
**
** 1. Créer la fonction :
**
**        int linear_search(int *tab, int size, int value);
**
**
** 2. Parcourir le tableau avec une boucle.
**
** 3. Comparer chaque élément avec value :
**
**        tab[i] == value
**
**
** 4. Si la valeur est trouvée :
**
**        retourner i
**
**
** 5. Si la boucle se termine sans trouver la valeur :
**
**        retourner -1
**
**
**
** CONTRAINTES :
**
** - Utiliser une boucle.
** - Ne pas utiliser de fonction de recherche toute faite.
** - Utiliser le pointeur int *tab.
** - Utiliser size pour connaître la taille du tableau.
** - Retourner l'indice de la valeur.
** - Retourner -1 si la valeur n'existe pas.
**
**
**
** MENTAL MODEL :
**
** Tableau :
**
**     [10, 25, 7, 42, 18, 30]
**       0   1  2   3   4   5
**
**
** Recherche de 42 :
**
**     tab[0] → 10 → pas trouvé
**     tab[1] → 25 → pas trouvé
**     tab[2] → 7  → pas trouvé
**     tab[3] → 42 → TROUVÉ
**
**
** Résultat :
**
**     3
**
**
**
** CAS 1 — VALEUR AU DÉBUT
**
** Recherche :
**
**     10
**
**
** Le premier élément correspond.
**
** La fonction peut donc s'arrêter immédiatement.
**
**
** Combien d'éléments sont examinés ?
**
**     1
**
**
**
** CAS 2 — VALEUR AU MILIEU
**
** Recherche :
**
**     42
**
**
** Plusieurs éléments doivent être examinés avant de trouver
** la valeur.
**
**
**
** CAS 3 — VALEUR À LA FIN
**
** Recherche :
**
**     30
**
**
** Il faut parcourir presque tout le tableau.
**
**
**
** CAS 4 — VALEUR ABSENTE
**
** Recherche :
**
**     100
**
**
** Aucun élément ne correspond.
**
**
** Il faut donc parcourir tout le tableau.
**
**
**
** ANALYSE DE COMPLEXITÉ :
**
** Tu dois distinguer plusieurs cas.
**
**
** MEILLEUR CAS :
**
** La valeur se trouve immédiatement au premier élément.
**
**
** Nombre d'opérations :
**
**     1
**
**
** Complexité :
**
**     O(1)
**
**
**
** PIRE CAS :
**
** La valeur se trouve au dernier élément ou n'existe pas.
**
**
** Il faut alors parcourir le tableau entier.
**
**
** Nombre d'opérations :
**
**     n
**
**
** Complexité :
**
**     O(n)
**
**
**
** COMPLEXITÉ GLOBALE :
**
** Pour caractériser l'algorithme, on retient généralement
** le pire cas.
**
**
** Donc :
**
**     O(n)
**
**
**
** POURQUOI "LINÉAIRE" ?
**
** Parce que le nombre d'éléments examinés augmente
** proportionnellement à la taille du tableau.
**
**
** Exemple :
**
**     n = 10
**     → jusqu'à 10 éléments examinés
**
**     n = 100
**     → jusqu'à 100 éléments examinés
**
**     n = 1 000
**     → jusqu'à 1 000 éléments examinés
**
**
**
** SI n DOUBLE :
**
**     n → 2n
**
**
** Dans le pire cas, le nombre d'éléments examinés
** double également.
**
**
**
** COMPARAISON :
**
**     Recherche au début
**         → O(1)
**
**     Recherche au milieu
**         → O(n) dans l'analyse asymptotique
**
**     Recherche à la fin
**         → O(n)
**
**     Valeur absente
**         → O(n)
**
**
**
** QUESTION IMPORTANTE :
**
** Pourquoi peut-on dire que la complexité globale est O(n)
** alors que le meilleur cas est O(1) ?
**
**
** Parce que Big O est généralement utilisé ici pour décrire
** le comportement dans le pire cas.
**
**
**
** BONUS :
**
** Ajoute un compteur :
**
**     int comparisons = 0;
**
**
** Incrémente-le à chaque comparaison :
**
**     comparisons++;
**
**
** Puis affiche le nombre de comparaisons effectuées.
**
**
** Teste :
**
**     10
**     42
**     30
**     100
**
**
** Observe la différence entre les cas.
**
**
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable de reconnaître immédiatement une recherche
** linéaire :
**
**     Parcours élément par élément
**              ↓
**          jusqu'à n
**              ↓
**            O(n)
**
**
** Et savoir distinguer :
**
**     meilleur cas → O(1)
**     pire cas     → O(n)
**     global        → O(n)
**
**
** RÉFLEXE :
**
**     "Je peux être obligé de parcourir tout le tableau."
**
**                    ↓
**
**                  O(n)
*/