/*
** EXERCICE : Compter les occurrences
**
** OBJECTIF :
**
** Créer une fonction qui compte combien de fois une valeur
** apparaît dans un tableau.
**
** ------------------------------------------------------------
**
** FONCTION À CRÉER :
**
** int count_occurrences(int *tab, int size, int value);
**
** La fonction doit :
**
** - parcourir tout le tableau ;
** - comparer chaque élément avec value ;
** - augmenter un compteur lorsqu'une correspondance est trouvée ;
** - retourner le nombre total d'occurrences.
**
** ------------------------------------------------------------
**
** EXEMPLE :
**
** Tableau :
**
** [2, 5, 2, 8, 2, 10]
**
** Recherche :
**
** 2
**
** Résultat :
**
** Occurrences : 3
**
** ------------------------------------------------------------
**
** AUTRES TESTS :
**
** [2, 5, 2, 8, 2, 10]
**
** Recherche : 5
** → Occurrences : 1
**
** Recherche : 8
** → Occurrences : 1
**
** Recherche : 10
** → Occurrences : 1
**
** Recherche : 99
** → Occurrences : 0
**
** ------------------------------------------------------------
**
** 🧠 PRINCIPE :
**
** Utilise une variable compteur :
**
** int count = 0;
**
** Puis parcours le tableau.
**
** À chaque fois que :
**
** tab[i] == value
**
** → augmente le compteur.
**
** À la fin :
**
** → retourne count.
**
** ⚠️ Contrairement à l'exercice précédent, tu ne peux PAS
** retourner dès la première correspondance.
**
** Tu dois continuer jusqu'à la fin du tableau.
**
** ------------------------------------------------------------
**
** 🎯 DANS MAIN :
**
** Crée le tableau :
**
** int tab[] = {2, 5, 2, 8, 2, 10};
**
** Demande à l'utilisateur une valeur.
**
** Appelle :
**
** count_occurrences(tab, 6, value);
**
**
** Affiche :
**
** Occurrences : X
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTES :
**
** - Utiliser une boucle.
** - Utiliser un compteur.
** - Parcourir tout le tableau.
** - Ne pas modifier le tableau.
** - Ne pas utiliser de fonction toute faite.
** - Retourner un int.
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi dois-tu parcourir tout le tableau ?
**
** 2. Pourquoi ne peux-tu pas retourner dès que tu trouves
**    une correspondance ?
**
** 3. Que vaut le compteur si la valeur n'existe pas ?
**
** 4. Quelle différence avec find_position() ?
**
** 5. Quelle est la complexité de cette fonction ?
**
** 6. Combien d'éléments dois-tu examiner pour n = 1000 ?
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
** Explique pourquoi dans un commentaire.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Trouve la valeur qui apparaît le plus souvent.
**
** Exemple :
**
** [2, 5, 2, 8, 2, 5]
**
** Résultat :
**
** Valeur la plus fréquente : 2
** Occurrences : 3
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Affiche toutes les valeurs qui apparaissent au moins
** deux fois.
**
** Exemple :
**
** [2, 5, 2, 8, 2, 5]
**
** Résultat :
**
** 2 → 3 occurrences
** 5 → 2 occurrences
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Maîtriser les recherches et les parcours de tableaux.
**
** Réflexe à retenir :
**
** "Je cherche une seule occurrence → je peux m'arrêter."
**
** "Je compte toutes les occurrences → je dois parcourir
** tout le tableau."
*/