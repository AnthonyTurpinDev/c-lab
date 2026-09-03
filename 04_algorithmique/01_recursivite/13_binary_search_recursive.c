/*
** EXERCICE : Recherche binaire récursive
**
** OBJECTIF :
** Rechercher une valeur dans un tableau trié
** avec une recherche binaire récursive.
**
** EXEMPLE :
**
** Tableau :
** {2, 5, 8, 12, 16, 20, 25}
**
** Recherche :
** 16
**
** Résultat :
** trouvé
**
** FONCTION :
**
** int binary_search(int *array, int left, int right, int value);
**
** CONTRAINTES :
** - Le tableau doit être trié.
** - Pas de boucle.
** - Utiliser la récursivité.
**
** PRINCIPE :
**
** 1. Calculer le milieu.
** 2. Comparer array[mid] avec value.
** 3. Chercher à gauche ou à droite.
** 4. Arrêter lorsque la zone de recherche est vide.
**
** BONUS :
** Retourner l'index de la valeur.
** Retourner -1 si elle n'existe pas.
*/