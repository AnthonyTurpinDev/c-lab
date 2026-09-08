/*
** EXERCICE : Résoudre un labyrinthe
**
** OBJECTIF :
** Trouver un chemin dans une grille en utilisant
** la récursivité.
**
** Exemple de grille :
**
** 1 = chemin
** 0 = mur
**
** {
**     {1, 0, 1, 1},
**     {1, 1, 1, 0},
**     {0, 1, 0, 1},
**     {1, 1, 1, 1}
** }
**
** Départ :
** (0, 0)
**
** Arrivée :
** (3, 3)
**
** OBJECTIF :
** Trouver un chemin entre les deux.
**
** FONCTION :
**
** int solve_maze(...);
**
** CONTRAINTES :
** - Utiliser la récursivité.
** - Vérifier les cases valides.
** - Éviter de revenir indéfiniment sur les mêmes cases.
**
** CONCEPTS :
** - récursivité
** - tableaux 2D
** - pointeurs
** - conditions
** - backtracking
**
** BONUS :
** Afficher le chemin trouvé.
*/