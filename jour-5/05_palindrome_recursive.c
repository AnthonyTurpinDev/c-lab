/*
** EXERCICE : Palindrome récursif
**
** Écrire une fonction récursive qui vérifie si une chaîne
** de caractères est un palindrome.
**
** PROTOTYPE CONSEILLÉ :
**
** int is_palindrome(char *str, int debut, int fin);
**
** RAPPEL :
**
** Un palindrome se lit de la même manière dans les deux sens.
**
** EXEMPLES :
**
** "radar"    -> palindrome
** "level"    -> palindrome
** "bonjour"  -> pas un palindrome
**
** CONTRAINTES :
**
** - Utiliser la récursivité.
** - Comparer le caractère au début avec celui de la fin.
** - Réduire progressivement la zone à vérifier.
** - Définir un cas de base lorsque les indices se croisent
**   ou se rejoignent.
** - Ne pas utiliser de boucle.
**
** OBJECTIF :
**
** Comprendre comment une récursion peut progressivement
** réduire une partie d'une chaîne à analyser.
*/