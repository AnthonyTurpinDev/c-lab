/*
** EXERCICE : Recherche binaire
**
** OBJECTIF :
**
** Implémenter une recherche binaire dans un tableau trié.
**
** Puis comparer son fonctionnement et sa complexité avec
** la recherche linéaire.
**
**
** FONCTION À CRÉER :
**
**     int binary_search(int *tab, int size, int value);
**
**
**
** ATTENTION :
**
** La recherche binaire fonctionne uniquement si le tableau
** est TRIÉ.
**
**
**
** TABLEAU DE TEST :
**
**     [2, 5, 8, 12, 16, 23, 38, 42, 57]
**
**
** Valeurs à rechercher :
**
**     23
**     2
**     57
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
** Si la valeur n'est pas trouvée :
**
**     retourner -1.
**
**
**
** CONSIGNES :
**
** 1. Créer le tableau trié.
**
** 2. Créer la fonction :
**
**        int binary_search(int *tab, int size, int value);
**
**
** 3. Utiliser trois variables :
**
**        int left;
**        int right;
**        int middle;
**
**
** 4. Initialiser :
**
**        left = 0;
**        right = size - 1;
**
**
** 5. Tant que la zone de recherche est valide :
**
**        left <= right
**
**
** 6. Calculer le milieu du tableau.
**
** 7. Comparer tab[middle] avec value.
**
**
** 8. Si :
**
**        tab[middle] == value
**
**    retourner middle.
**
**
** 9. Si la valeur recherchée est plus petite :
**
**        rechercher dans la moitié gauche.
**
**
** 10. Si la valeur recherchée est plus grande :
**
**        rechercher dans la moitié droite.
**
**
** 11. Si la boucle se termine sans trouver la valeur :
**
**        retourner -1.
**
**
**
** MENTAL MODEL :
**
** Tableau :
**
**     [2, 5, 8, 12, 16, 23, 38, 42, 57]
**
**      0  1  2   3   4   5   6   7   8
**
**
** Recherche de 23 :
**
** Première zone :
**
**     [2, 5, 8, 12, 16, 23, 38, 42, 57]
**
**                  ↑
**                milieu
**
**
** Compare avec la valeur recherchée.
**
** Puis élimine toute la moitié qui ne peut pas contenir
** la valeur.
**
**
** Tu recommences sur la moitié restante.
**
**
**
** L'IDÉE FONDAMENTALE :
**
** La recherche binaire ne regarde PAS tous les éléments
** un par un.
**
**
** À chaque étape, elle élimine environ la moitié des
** possibilités.
**
**
**
** EXEMPLE :
**
**     16 éléments
**          ↓
**     environ 8
**          ↓
**     environ 4
**          ↓
**     environ 2
**          ↓
**     environ 1
**
**
** Le nombre d'étapes augmente donc très lentement
** lorsque la taille du tableau augmente.
**
**
**
** COMPARAISON AVEC LA RECHERCHE LINÉAIRE :
**
**
** Recherche linéaire :
**
**     [2, 5, 8, 12, 16, 23, 38, 42, 57]
**      ↓  ↓  ↓  ↓  ↓  ↓
**      on avance élément par élément
**
**
** Recherche binaire :
**
**     [2, 5, 8, 12, 16, 23, 38, 42, 57]
**                  ↓
**          on regarde le milieu
**                  ↓
**          on élimine une moitié
**                  ↓
**          on recommence
**
**
**
** COMPLEXITÉ DE LA RECHERCHE LINÉAIRE :
**
** Dans le pire cas, on peut devoir parcourir tout le tableau.
**
**
**     n éléments
**
** Donc :
**
**     O(n)
**
**
**
** COMPLEXITÉ DE LA RECHERCHE BINAIRE :
**
** À chaque étape, la taille de la zone de recherche
** est divisée approximativement par 2.
**
**
**     n
**     ↓
**     n / 2
**     ↓
**     n / 4
**     ↓
**     n / 8
**     ↓
**     ...
**     ↓
**     1
**
**
** Le nombre de divisions nécessaires est logarithmique.
**
**
** Donc :
**
**     O(log n)
**
**
**
** QUESTION CENTRALE :
**
** Pourquoi le logarithme apparaît-il ?
**
**
** Parce qu'on cherche combien de fois on peut diviser n
** par 2 avant d'arriver à 1.
**
**
** Exemple :
**
**     8 → 4 → 2 → 1
**
**     3 divisions
**
**
**     16 → 8 → 4 → 2 → 1
**
**     4 divisions
**
**
**     32 → 16 → 8 → 4 → 2 → 1
**
**     5 divisions
**
**
**
** À DÉTERMINER :
**
** Pour un tableau de :
**
**     8 éléments
**     16 éléments
**     32 éléments
**     64 éléments
**     128 éléments
**
**
** Combien d'étapes sont nécessaires approximativement
** pour réduire la recherche à un seul élément ?
**
**
**
** COMPARAISON :
**
**     Recherche linéaire
**         → regarde potentiellement chaque élément
**         → O(n)
**
**
**     Recherche binaire
**         → élimine environ la moitié à chaque étape
**         → O(log n)
**
**
**
** ATTENTION :
**
** La recherche binaire nécessite un tableau trié.
**
**
** Exemple :
**
**     [2, 5, 8, 12, 16, 23, 38]
**
** fonctionne.
**
**
** Mais :
**
**     [12, 2, 38, 5, 23, 8, 16]
**
** ne permet pas d'utiliser correctement la recherche
** binaire telle qu'elle est demandée ici.
**
**
**
** BONUS :
**
** Ajoute :
**
**     int comparisons = 0;
**
**
** Compte le nombre de comparaisons effectuées.
**
**
** Compare ensuite le nombre de comparaisons entre :
**
**     linear_search()
**
** et :
**
**     binary_search()
**
**
** sur un grand tableau trié.
**
**
**
** QUESTION DE RÉFLEXION :
**
** Si un tableau contient 1 000 000 d'éléments :
**
**     Recherche linéaire :
**         combien d'éléments peut-on devoir examiner ?
**
**
**     Recherche binaire :
**         combien d'étapes environ sont nécessaires ?
**
**
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable d'expliquer sans réciter :
**
**     O(n)
**
** signifie :
**
**     "Je peux devoir parcourir n éléments."
**
**
**
**     O(log n)
**
** signifie :
**
**     "À chaque étape, je réduis fortement la taille
**      du problème, ici environ de moitié."
**
**
**
** RÉFLEXE :
**
**     Tableau trié
**          ↓
**     recherche binaire possible
**          ↓
**     moitié supprimée à chaque étape
**          ↓
**     O(log n)
*/