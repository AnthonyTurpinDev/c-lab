/*
** EXERCICE : Tours de Hanoï
**
** OBJECTIF :
** Résoudre le problème des Tours de Hanoï
** avec une fonction récursive.
**
** PRINCIPE :
**
** Tu possèdes plusieurs disques empilés.
**
** Objectif :
** déplacer tous les disques de A vers C.
**
** RÈGLES :
**
** - Un seul disque peut être déplacé à la fois.
** - Un grand disque ne peut jamais être placé
**   sur un petit disque.
** - Tu peux utiliser la tour B comme intermédiaire.
**
** FONCTION :
**
** void hanoi(int n, char from, char to, char temp);
**
** CONTRAINTES :
** - Utiliser uniquement la récursivité.
** - Pas de boucle pour résoudre le problème.
**
** EXEMPLE :
**
** Pour 2 disques :
**
** A -> B
** A -> C
** B -> C
**
** BONUS :
** Compter le nombre total de mouvements.
**
** OBJECTIF PISCINE :
** Apprendre à comprendre une fonction récursive
** qui réalise plusieurs appels récursifs.
*/