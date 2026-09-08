/*
** EXERCICE : PGCD récursif
**
** OBJECTIF :
** Calculer le plus grand commun diviseur
** de deux nombres.
**
** EXEMPLE :
**
** PGCD(48, 18)
**
** Résultat :
** 6
**
** INDICE :
**
** Utiliser l'algorithme d'Euclide :
**
** PGCD(a, b) = PGCD(b, a % b)
**
** jusqu'à ce que b == 0.
**
** FONCTION :
**
** int gcd(int a, int b);
**
** CONTRAINTES :
** - Pas de boucle.
** - Utiliser la récursivité.
**
** BONUS :
** Afficher toutes les étapes de l'algorithme.
*/