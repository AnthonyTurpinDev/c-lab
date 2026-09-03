/*
** EXERCICE : Is Even
**
** FICHIER : 07_is_even.c
**
** OBJECTIF :
**
** Créer une fonction qui détermine si un nombre
** est pair ou impair.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     int is_even(int n)
**
** La fonction doit retourner :
**
**     1 → si le nombre est pair
**     0 → si le nombre est impair
**
** EXEMPLES :
**
**     is_even(10) → 1
**     is_even(7)  → 0
**
**
** CONTRAINTES :
**
** - Utilise l'opérateur %.
** - Utilise if.
** - La fonction doit retourner un int.
** - Utilise return.
**
**
** 💡 INDICE :
**
** Un nombre est pair lorsque son reste après une division
** par 2 est égal à 0.
**
** Réfléchis donc à :
**
**     n % 2
**
**
** Pose-toi ces questions :
**
** 1. Que signifie n % 2 ?
**
** 2. Quelle valeur obtient-on lorsqu'un nombre est pair ?
**
** 3. Quelle valeur doit retourner la fonction dans ce cas ?
**
** 4. Que doit-elle retourner si le nombre est impair ?
**
**
** 🎯 OBJECTIFS À VALIDER :
**
** - Utiliser l'opérateur %.
** - Utiliser if dans une fonction.
** - Retourner 1 ou 0.
** - Comprendre qu'une fonction peut être utilisée
**   ensuite dans une condition.
**
** BONUS :
**
** Dans main(), teste la fonction avec plusieurs nombres :
**
**     0
**     1
**     2
**     7
**     10
**     15
**     20
*/