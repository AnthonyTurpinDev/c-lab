/*
** EXERCICE : Recherche de la première occurrence
**
** OBJECTIF :
**
** Créer une fonction qui recherche une valeur dans un tableau
** et retourne l'indice de sa PREMIÈRE occurrence.
**
** ------------------------------------------------------------
**
** FONCTION À CRÉER :
**
** int find_position(int *tab, int size, int value);
**
** La fonction doit :
**
** - parcourir le tableau de gauche à droite ;
** - comparer chaque élément avec value ;
** - retourner immédiatement l'indice de la première valeur
**   trouvée ;
** - retourner -1 si la valeur n'existe pas.
**
** ------------------------------------------------------------
**
** EXEMPLE :
**
** Tableau :
**
** [10, 20, 30, 20, 40]
**
** Recherche :
**
** 20
**
** Résultat :
**
** indice 1
**
** ⚠️ Même si 20 apparaît également à l'indice 3,
** la fonction doit retourner 1.
**
** ------------------------------------------------------------
**
** AUTRES TESTS :
**
** [10, 20, 30, 20, 40]
**
** Recherche : 10
** → indice 0
**
** Recherche : 30
** → indice 2
**
** Recherche : 40
** → indice 4
**
** Recherche : 99
** → -1
**
** ------------------------------------------------------------
**
** 🧠 POINT IMPORTANT :
**
** Dès que tu trouves la valeur :
**
** → tu dois retourner l'indice.
**
** Tu ne dois PAS continuer à chercher les autres occurrences.
**
** ------------------------------------------------------------
**
** 🎯 DANS MAIN :
**
** Crée le tableau :
**
** int tab[] = {10, 20, 30, 20, 40};
**
** Demande une valeur à rechercher.
**
** Appelle :
**
** find_position(tab, 5, value);
**
**
** Si le résultat est différent de -1 :
**
** "Valeur trouvée à l'indice X"
**
** Sinon :
**
** "Valeur non trouvée"
**
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTES :
**
** - Utiliser une boucle.
** - Ne pas modifier le tableau.
** - Ne pas utiliser de fonction de recherche toute faite.
** - Retourner uniquement l'indice.
** - Retourner -1 si aucune occurrence n'existe.
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi doit-on parcourir le tableau de gauche à droite ?
**
** 2. Pourquoi peut-on retourner immédiatement lorsqu'on trouve
**    la valeur ?
**
** 3. Que se passe-t-il si la valeur apparaît 3 fois ?
**
** 4. Quelle différence avec find_value() de l'exercice précédent ?
**
** 5. Quelle est la complexité dans le meilleur cas ?
**
** 6. Quelle est la complexité dans le pire cas ?
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
** Explique ta réponse dans un commentaire.
**
** ------------------------------------------------------------
**
** ⭐ BONUS :
**
** Crée une deuxième fonction :
**
** int count_occurrences(int *tab, int size, int value);
**
** Elle doit compter combien de fois la valeur apparaît.
**
** Exemple :
**
** [10, 20, 30, 20, 40]
**
** Recherche : 20
**
** Résultat :
**
** 2 occurrences
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Maîtriser les recherches simples dans un tableau.
**
** Réflexe :
**
** tableau → boucle → comparaison → retour de l'indice
**
**
** Et surtout :
**
** "Première occurrence = je retourne dès que je trouve."
*/