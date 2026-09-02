/*
** EXERCICE : Échanger deux tableaux
**
** Écrire une fonction qui échange le contenu de deux tableaux
** d'entiers de même taille.
**
** L'échange doit être réalisé directement dans les deux tableaux,
** sans créer de tableau auxiliaire.
**
** EXEMPLE :
**
** Tableau A avant :
** 1 2 3 4 5
**
** Tableau B avant :
** 10 20 30 40 50
**
**
** Après l'échange :
**
** Tableau A :
** 10 20 30 40 50
**
** Tableau B :
** 1 2 3 4 5
**
** PROTOTYPE CONSEILLÉ :
**
** void swap_arrays(int *a, int *b, int taille);
**
** CONTRAINTES :
**
** - Créer une fonction swap_arrays().
** - La fonction doit recevoir deux pointeurs vers les tableaux.
** - La fonction doit recevoir la taille des tableaux.
** - Les deux tableaux ont la même taille.
** - Parcourir les tableaux avec des pointeurs.
** - Échanger les éléments un par un.
** - Utiliser une variable temporaire pour effectuer l'échange.
** - Ne pas créer de tableau auxiliaire.
** - Ne pas utiliser [] dans la fonction.
** - Modifier directement les tableaux d'origine.
** - Tester la fonction dans main().
**
** IMPORTANT :
**
** L'échange doit être réalisé élément par élément.
**
** Exemple :
**
** a[0] <-> b[0]
** a[1] <-> b[1]
** a[2] <-> b[2]
** ...
**
** Mais dans la fonction, utiliser les pointeurs plutôt que
** la notation avec les indices.
**
** OBJECTIF :
**
** Comprendre comment manipuler plusieurs tableaux avec des
** pointeurs et modifier directement leur contenu en mémoire.
**
** BONUS :
**
** - Afficher les deux tableaux avant et après l'échange.
** - Créer une fonction print_array() utilisant uniquement
**   l'arithmétique des pointeurs.
** - Tester avec des tableaux contenant des nombres négatifs.
** - Tester avec des tableaux de différentes tailles en ajoutant
**   une vérification de sécurité.
*/