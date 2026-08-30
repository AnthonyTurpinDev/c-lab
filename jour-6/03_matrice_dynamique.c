/*
** EXERCICE : Matrice dynamique
**
** Créer dynamiquement une matrice d'entiers composée de
** plusieurs lignes et colonnes.
**
** Le programme doit :
**
** - demander le nombre de lignes ;
** - demander le nombre de colonnes ;
** - allouer dynamiquement la matrice ;
** - remplir la matrice ;
** - afficher la matrice ;
** - libérer correctement toute la mémoire.
**
** EXEMPLE :
**
** Lignes : 2
** Colonnes : 3
**
** Matrice :
**
** 1 2 3
** 4 5 6
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Utiliser un tableau de pointeurs vers les lignes.
** - Vérifier chaque allocation.
** - Remplir chaque élément.
** - Afficher chaque élément.
** - Libérer chaque ligne.
** - Libérer ensuite le tableau principal de pointeurs.
**
** IMPORTANT :
**
** Si une allocation échoue au milieu de la création,
** libérer correctement les allocations déjà effectuées.
**
** OBJECTIF :
**
** Comprendre les allocations dynamiques multiples
** et apprendre à éviter les fuites mémoire.
**
** BONUS :
**
** - Créer une fonction pour allouer la matrice.
** - Créer une fonction pour l'afficher.
** - Créer une fonction pour la libérer.
*/