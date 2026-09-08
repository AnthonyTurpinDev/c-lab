/*
** EXERCICE : Recherche d'une valeur
**
** OBJECTIF :
**
** Créer une fonction permettant de rechercher une valeur
** dans un tableau d'entiers.
**
** ------------------------------------------------------------
**
** FONCTION À CRÉER :
**
** int find_value(int *tab, int size, int value);
**
** La fonction doit :
**
** - parcourir le tableau de gauche à droite ;
** - comparer chaque élément avec value ;
** - retourner l'indice si la valeur est trouvée ;
** - retourner -1 si la valeur n'existe pas.
**
** ------------------------------------------------------------
**
** EXEMPLE :
**
** Tableau :
**
** 4 8 15 16 23 42
**
** Recherche :
**
** 15
**
** Résultat :
**
** Valeur trouvée à l'indice 2
**
** ------------------------------------------------------------
**
** AUTRE TEST :
**
** Tableau :
**
** 4 8 15 16 23 42
**
** Recherche :
**
** 100
**
** Résultat :
**
** Valeur non trouvée
**
** ------------------------------------------------------------
**
** 🧠 PRINCIPE :
**
** Tu dois regarder les éléments un par un :
**
** tab[0] → comparer avec value
** tab[1] → comparer avec value
** tab[2] → comparer avec value
** ...
**
** Dès que tu trouves la valeur :
**
** → retourner son indice.
**
** ------------------------------------------------------------
**
** 🎯 DANS MAIN :
**
** Crée le tableau :
**
** int tab[] = {4, 8, 15, 16, 23, 42};
**
** Demande à l'utilisateur quelle valeur rechercher.
**
** Appelle find_value().
**
** Puis affiche :
**
** "Valeur trouvée à l'indice X"
**
** ou :
**
** "Valeur non trouvée"
**
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTES :
**
** - Utiliser une boucle.
** - Ne pas utiliser de fonction de recherche toute faite.
** - La fonction doit retourner un int.
** - Utiliser un pointeur pour recevoir le tableau.
** - Ne pas modifier le tableau.
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi reçoit-on int *tab plutôt que int tab[] ?
**
** 2. Pourquoi reçoit-on size ?
**
** 3. Pourquoi retourner -1 si la valeur n'existe pas ?
**
** 4. Que se passe-t-il si la valeur est au premier indice ?
**
** 5. Que se passe-t-il si elle est au dernier indice ?
**
** 6. Combien d'éléments peut-on devoir parcourir ?
**
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ :
**
** Analyse la fonction une fois terminée :
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
** Complexité  : O(?)
**
** Explique pourquoi dans un commentaire.
**
** ------------------------------------------------------------
**
** ⭐ BONUS :
**
** Teste plusieurs recherches :
**
** 4
** 15
** 42
** 100
**
** Puis ajoute un compteur de comparaisons.
**
** Exemple :
**
** Recherche : 42
** Comparaisons : 6
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable d'écrire une recherche linéaire rapidement
** sans aide.
**
** Réflexe à retenir :
**
** tableau → boucle → comparaison → indice
**
*/