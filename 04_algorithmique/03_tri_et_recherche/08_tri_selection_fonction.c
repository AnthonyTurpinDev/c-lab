/*
** EXERCICE : Selection Sort avec fonction
**
** OBJECTIF :
**
** Organiser ton programme en séparant :
**
** - la création des données ;
** - l'algorithme de tri ;
** - l'affichage.
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** void selection_sort(int *tab, int size);
**
** La fonction doit trier le tableau dans l'ordre croissant.
**
** Exemple :
**
** Avant :
** 64 25 12 22 11
**
** Après :
** 11 12 22 25 64
**
** ------------------------------------------------------------
**
** 🎯 CONTRAINTE PRINCIPALE :
**
** Le main doit être MINIMAL.
**
** Il doit uniquement :
**
** 1. Créer le tableau.
**
** 2. Appeler selection_sort().
**
** 3. Afficher le résultat.
**
** Exemple de structure attendue :
**
** int main(void)
** {
**     int tab[] = {64, 25, 12, 22, 11};
**
**     selection_sort(tab, 5);
**
**     // afficher le tableau
**
**     return 0;
** }
**
** ------------------------------------------------------------
**
** ⚠️ IMPORTANT :
**
** Toute la logique du Selection Sort doit être dans :
**
** selection_sort()
**
** Le main ne doit PAS :
**
** - rechercher le minimum ;
** - effectuer les échanges ;
** - contenir les boucles du tri ;
** - trier lui-même le tableau.
**
** ------------------------------------------------------------
**
** 🧠 RAPPEL DU SELECTION SORT :
**
** Pour chaque position :
**
** 1. Chercher le plus petit élément dans la partie
**    non triée.
**
** 2. Mémoriser son indice.
**
** 3. Échanger avec l'élément de la position actuelle.
**
** 4. Passer à la position suivante.
**
** ------------------------------------------------------------
**
** 🎯 TESTS :
**
** Test 1 :
**
** {64, 25, 12, 22, 11}
** → 11 12 22 25 64
**
** Test 2 :
**
** {5, 4, 3, 2, 1}
** → 1 2 3 4 5
**
** Test 3 :
**
** {1, 2, 3, 4, 5}
** → 1 2 3 4 5
**
** Test 4 :
**
** {7}
** → 7
**
** ------------------------------------------------------------
**
** ⚠️ CONTRAINTES :
**
** - Utiliser un pointeur vers le tableau.
** - Utiliser size.
** - Ne pas créer de deuxième tableau.
** - Modifier directement tab.
** - Ne pas utiliser qsort().
** - Toute la logique du tri doit être dans la fonction.
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi int *tab permet-il de modifier le tableau
**    depuis la fonction ?
**
** 2. Pourquoi doit-on transmettre size ?
**
** 3. Pourquoi selection_sort() est-elle de type void ?
**
** 4. Où se trouve le tableau après l'appel de la fonction ?
**
** 5. Pourquoi le main n'a-t-il pas besoin de récupérer
**    une valeur retournée ?
**
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ :
**
** Analyse uniquement selection_sort().
**
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
** Complexité  : O(?)
**
** Explique pourquoi.
**
** ------------------------------------------------------------
**
** ⭐ BONUS :
**
** Crée une deuxième fonction :
**
** void print_array(int *tab, int size);
**
** Le main devient alors encore plus propre :
**
** - création du tableau ;
** - affichage avant ;
** - appel du tri ;
** - affichage après.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Apprendre à sortir la logique d'un algorithme du main.
**
** Tu dois commencer à avoir ce réflexe :
**
** main()
**   ↓
** prépare les données
**   ↓
** appelle une fonction
**   ↓
** affiche le résultat
**
** Et la fonction :
**
** selection_sort()
**   ↓
** contient toute la logique du tri.
*/