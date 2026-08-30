/*
** EXERCICE : PGCD récursif
**
** Écrire une fonction récursive qui calcule le plus grand
** commun diviseur (PGCD) de deux nombres entiers.
**
** PROTOTYPE :
**
** int my_gcd(int a, int b);
**
** ALGORITHME D'EUCLIDE :
**
** Tant que b n'est pas égal à 0 :
**
**     PGCD(a, b) = PGCD(b, a % b)
**
** Lorsque b vaut 0, le résultat est a.
**
** EXEMPLES :
**
** my_gcd(48, 18) -> 6
** my_gcd(20, 8)  -> 4
**
** CONTRAINTES :
**
** - Utiliser la récursivité.
** - Utiliser l'opérateur %.
** - Ne pas utiliser de boucle.
** - Gérer les cas où un des nombres vaut 0.
**
** OBJECTIF :
**
** Comprendre comment transformer un algorithme mathématique
** en fonction récursive.
*/