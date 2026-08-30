/*
** EXERCICE : Tours de Hanoï
**
** Écrire un programme récursif qui affiche les étapes nécessaires
** pour déplacer N disques d'une tour de départ vers une tour
** d'arrivée en utilisant une tour intermédiaire.
**
** RÈGLES :
**
** - Un seul disque peut être déplacé à la fois.
** - Un disque ne peut être placé que sur un disque plus grand.
** - Il faut déplacer tous les disques de la tour de départ
**   vers la tour d'arrivée.
**
** EXEMPLE POUR 2 DISQUES :
**
** Déplacer le disque 1 de A vers B
** Déplacer le disque 2 de A vers C
** Déplacer le disque 1 de B vers C
**
** PROTOTYPE POSSIBLE :
**
** void hanoi(int n, char depart, char intermediaire, char arrivee);
**
** CONTRAINTES :
**
** - Utiliser obligatoirement la récursivité.
** - Ne pas utiliser de boucle pour résoudre le problème.
** - Définir clairement le cas de base.
** - Afficher chaque déplacement.
** - Utiliser trois tours : départ, intermédiaire et arrivée.
**
** OBJECTIF :
**
** Comprendre une récursion composée de plusieurs appels
** récursifs et apprendre à décomposer un problème complexe
** en sous-problèmes plus petits.
**
** BONUS :
**
** - Compter le nombre total de déplacements.
** - Tester avec 1, 2, 3 puis 4 disques.
** - Observer comment le nombre de déplacements évolue.
*/