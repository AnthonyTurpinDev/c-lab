/*
** EXERCICE : Tableau dynamique avec malloc
**
** Écrire un programme qui crée dynamiquement un tableau
** de n entiers.
**
** Le programme doit :
**
** - demander une taille n à l'utilisateur ;
** - allouer dynamiquement un tableau de n entiers ;
** - vérifier que malloc() a réussi ;
** - remplir le tableau ;
** - afficher le tableau ;
** - libérer correctement la mémoire avec free().
**
** EXEMPLE :
**
** Taille : 5
**
** Valeurs :
** 10 20 30 40 50
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Ne pas utiliser un tableau de taille fixe pour stocker
**   les valeurs.
** - Vérifier le retour de malloc().
** - Utiliser un pointeur pour accéder au tableau.
** - Utiliser free() lorsque le tableau n'est plus nécessaire.
**
** OBJECTIF :
**
** Comprendre le fonctionnement de malloc(), la mémoire
** dynamique et la libération avec free().
**
** IMPORTANT :
**
** Toute mémoire obtenue avec malloc() doit être libérée
** avec free() lorsque vous n'en avez plus besoin.
*/