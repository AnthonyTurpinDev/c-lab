/*
** EXERCICE : Puissance
**
** Écrire un programme en langage C qui demande à l'utilisateur
** de saisir deux nombres entiers :
**
** - une base ;
** - un exposant.
**
** Le programme doit calculer la puissance de la base par
** l'exposant, sans utiliser la fonction pow().
**
** EXEMPLE :
**
** Entrée :
** Base : 2
** Exposant : 5
**
** Calcul :
** 2 x 2 x 2 x 2 x 2
**
** Sortie :
** 2^5 = 32
**
** AUTRE EXEMPLE :
**
** Entrée :
** Base : 3
** Exposant : 4
**
** Sortie :
** 3^4 = 81
**
** CAS PARTICULIER :
**
** Toute base élevée à la puissance 0 doit donner 1.
**
** Exemple :
** 5^0 = 1
**
** CONTRAINTES :
**
** - Demander la base et l'exposant à l'utilisateur.
** - Utiliser une boucle pour effectuer les multiplications.
** - Utiliser une variable pour stocker progressivement
**   le résultat.
** - Ne pas utiliser pow() ou une autre fonction de puissance.
** - Afficher le résultat final avec printf.
**
** OBJECTIF :
**
** Comprendre comment reproduire une opération mathématique
** avec une boucle et une variable d'accumulation.
**
** BONUS :
**
** - Gérer les exposants négatifs.
** - Faire une deuxième version avec une boucle while.
** - Tester avec une base égale à 0.
*/