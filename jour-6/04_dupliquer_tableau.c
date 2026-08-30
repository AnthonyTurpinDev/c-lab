/*
** EXERCICE : Dupliquer un tableau dynamiquement
**
** Écrire une fonction qui crée une copie dynamique
** d'un tableau d'entiers.
**
** PROTOTYPE CONSEILLÉ :
**
** int *duplicate_array(int *tab, int size);
**
** La fonction doit retourner un nouveau tableau contenant
** les mêmes valeurs que le tableau original.
**
** EXEMPLE :
**
** Original :
** 10 20 30 40
**
** Copie :
** 10 20 30 40
**
** CONTRAINTES :
**
** - Allouer un nouveau tableau avec malloc().
** - Vérifier que malloc() a réussi.
** - Copier chaque élément.
** - Ne pas retourner le tableau original.
** - Les deux tableaux doivent être indépendants.
** - Retourner NULL en cas d'échec d'allocation.
** - Libérer la copie avec free() après utilisation.
**
** OBJECTIF :
**
** Comprendre comment créer une copie indépendante
** d'une zone mémoire dynamique.
**
** BONUS :
**
** - Afficher les adresses des deux tableaux.
** - Modifier la copie et vérifier que l'original ne change pas.
*/