/*
** EXERCICE : Somme d'un tableau
**
** OBJECTIF :
**
** Créer une fonction permettant de calculer la somme
** de tous les éléments d'un tableau.
**
** Puis déterminer la complexité de ton algorithme.
**
**
** FONCTION À CRÉER :
**
**     int sum_array(int *tab, int size);
**
**
**
** TABLEAU DE TEST :
**
**     [4, 8, 15, 16, 23, 42]
**
**
** La somme attendue est :
**
**     4 + 8 + 15 + 16 + 23 + 42
**
**
**
** CONSIGNES :
**
** 1. Créer un tableau d'entiers.
**
** 2. Appeler la fonction :
**
**        sum_array(tab, size);
**
** 3. Parcourir tous les éléments du tableau.
**
** 4. Additionner chaque élément dans une variable.
**
** 5. Retourner la somme.
**
** 6. Afficher le résultat dans main().
**
**
**
** CONTRAINTES :
**
** - Utiliser une boucle.
** - Utiliser un pointeur vers le tableau.
** - Parcourir les éléments avec leur indice.
** - Ne pas utiliser de fonction toute faite.
** - La fonction doit retourner un int.
**
**
**
** QUESTIONS À TE POSER :
**
** 1. Où dois-je initialiser ma somme ?
**
** 2. Quelle valeur doit avoir la somme au départ ?
**
** 3. Comment accéder à chaque élément ?
**
**        tab[i]
**
** 4. Combien d'éléments dois-je parcourir ?
**
** 5. Quand dois-je arrêter la boucle ?
**
** 6. Que dois-je retourner à la fin ?
**
**
**
** MENTAL MODEL :
**
** Tableau :
**
**     [4, 8, 15, 16, 23, 42]
**
** Parcours :
**
**     somme = 0
**
**     somme += 4
**     somme += 8
**     somme += 15
**     somme += 16
**     somme += 23
**     somme += 42
**
**
** Résultat :
**
**     somme = 108
**
**
**
** ANALYSE DE LA COMPLEXITÉ :
**
** Une fois ton algorithme terminé, analyse-le.
**
**
** QUESTION PRINCIPALE :
**
**     Est-ce que je peux calculer la somme sans regarder
**     tous les éléments du tableau ?
**
**
** Pour calculer la somme exacte, chaque élément doit être
** pris en compte.
**
**
** Exemple :
**
**     n = 5
**     → 5 éléments parcourus
**
**     n = 100
**     → 100 éléments parcourus
**
**     n = 1 000
**     → 1 000 éléments parcourus
**
**
** Le nombre d'opérations dépend donc de n.
**
**
**
** 🎯 À DÉTERMINER :
**
**     Meilleur cas : ?
**
**     Pire cas : ?
**
**     Complexité globale : ?
**
**
**
** ATTENTION :
**
** Ici, le meilleur et le pire cas sont particuliers.
**
** Contrairement à une recherche, tu ne peux pas arrêter
** le parcours dès que tu trouves quelque chose.
**
** Pour connaître la somme exacte, tu dois parcourir
** tout le tableau.
**
**
**
** QUESTIONS DE RÉFLEXION :
**
** 1. Si le tableau contient 10 éléments, combien d'éléments
**    dois-tu parcourir ?
**
** 2. Si le tableau contient 1 000 éléments ?
**
** 3. Si le tableau contient 1 000 000 éléments ?
**
** 4. Est-ce que la valeur des nombres change le nombre
**    d'éléments à parcourir ?
**
** 5. Est-ce qu'un tableau contenant uniquement des 0
**    permet d'arrêter la boucle plus tôt ?
**
**
**
** BONUS :
**
** Créer ensuite :
**
**     int count_positive(int *tab, int size);
**
**
** Cette fonction doit compter le nombre de valeurs positives.
**
** Puis compare sa complexité avec celle de sum_array().
**
**
**
** 🎯 OBJECTIF PISCINE :
**
** Comprendre la différence entre :
**
**     Recherche
**     → peut parfois s'arrêter avant la fin
**
**     Somme
**     → doit parcourir tout le tableau
**
**
** Et être capable de reconnaître :
**
**     parcours complet du tableau
**              ↓
**            O(n)
*/