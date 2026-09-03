/*
** EXERCICE : Parcours d'un arbre binaire
**
** OBJECTIF :
** Créer un arbre binaire et utiliser la récursivité
** pour parcourir ses éléments.
**
** STRUCTURE :
**
** struct Node {
**     int value;
**     struct Node *left;
**     struct Node *right;
** };
**
** CRÉER :
**
**         10
**        /  \
**       5    15
**      / \     \
**     2   7     20
**
** FONCTIONS :
**
** void inorder(struct Node *root);
** void preorder(struct Node *root);
** void postorder(struct Node *root);
**
** CONTRAINTES :
** - Utiliser la récursivité.
** - Utiliser des pointeurs.
** - Pas de boucle pour les parcours.
**
** BONUS :
**
** - compter les nœuds
** - trouver la valeur maximale
** - trouver la valeur minimale
** - rechercher une valeur
** - calculer la hauteur de l'arbre
** - libérer entièrement l'arbre
**
** OBJECTIF :
** Maîtriser la récursivité avec des pointeurs.
*/