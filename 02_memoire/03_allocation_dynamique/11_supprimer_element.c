/*
** EXERCICE : Supprimer un élément d'un tableau dynamique
**
** CONSIGNE :
**
** Créer dynamiquement un tableau contenant :
**
**     10 20 30 40 50
**
**
** Demander ensuite à l'utilisateur quel index il souhaite
** supprimer.
**
**
** EXEMPLE :
**
**     Index à supprimer : 2
**
**
** Avant :
**
**     10 20 30 40 50
**
**
** Après :
**
**     10 20 40 50
**
**
** ⚠️ ATTENTION :
**
** L'index 2 correspond à la valeur 30.
**
**
** OBJECTIFS :
**
** Apprendre à combiner :
**
**     - malloc()
**     - realloc()
**     - tableau dynamique
**     - pointeurs
**     - indices
**     - boucles
**     - décalage de valeurs
**     - modification d'un tableau
**     - changement de taille
**     - free()
**
**
** ÉTAPES :
**
** 1. Créer dynamiquement un tableau de 5 int
**    avec malloc().
**
**
** 2. Remplir le tableau avec :
**
**        10 20 30 40 50
**
**
** 3. Afficher le tableau avant la suppression.
**
**
** 4. Demander à l'utilisateur l'index de l'élément
**    qu'il souhaite supprimer.
**
**
** 5. Vérifier que l'index est valide.
**
**    L'index doit être compris entre :
**
**        0
**
**    et :
**
**        size - 1
**
**
** 6. Supprimer logiquement l'élément.
**
**    Pour cela, décaler tous les éléments situés
**    après l'élément supprimé d'une position vers la gauche.
**
**
**    Exemple avec l'index 2 :
**
**        Avant :
**
**        index :  0   1   2   3   4
**        valeur: 10  20  30  40  50
**
**
**        On supprime 30.
**
**
**        40 prend la place de 30.
**        50 prend la place de 40.
**
**        Résultat temporaire :
**
**        10 20 40 50 50
**
**
** 7. Diminuer la taille logique du tableau de 1.
**
**        size = size - 1
**
**
** 8. Utiliser realloc() pour réduire la mémoire
**    du tableau afin qu'elle corresponde à la nouvelle taille.
**
**
** 9. Vérifier que realloc() a réussi.
**
**
** 10. Afficher le tableau après la suppression.
**
**
** Résultat attendu :
**
**     Avant : 10 20 30 40 50
**
**     Après : 10 20 40 50
**
**
** 11. Libérer la mémoire avec free().
**
**
**
** CONTRAINTES :
**
** - Utiliser malloc() pour créer le tableau.
** - Utiliser realloc() pour réduire le tableau.
** - Demander l'index à l'utilisateur.
** - Vérifier que l'index est valide.
** - Utiliser une boucle pour décaler les éléments.
** - Ne pas créer de deuxième tableau.
** - Modifier directement le tableau.
** - Mettre à jour la taille du tableau.
** - Vérifier le résultat de realloc().
** - Utiliser free() à la fin.
**
**
** ⚠️ POINT IMPORTANT :
**
** Il faut distinguer :
**
**     taille avant suppression
**
** et :
**
**     nouvelle taille
**
**
** Exemple :
**
**     size = 5
**
**     suppression d'un élément
**
**     size = 4
**
**
** La mémoire doit ensuite être redimensionnée
** pour contenir seulement 4 int.
**
**
** QUESTIONS À TE POSER :
**
** 1. Si on supprime tab[2], quel élément doit prendre
**    sa place ?
**
** 2. À partir de quel index faut-il commencer
**    le décalage ?
**
** 3. Jusqu'à quel index faut-il décaler ?
**
** 4. Pourquoi doit-on réduire size après le décalage ?
**
** 5. Pourquoi utilise-t-on realloc() après avoir
**    déplacé les valeurs ?
**
** 6. Quelle différence entre :
**
**        supprimer logiquement un élément
**
**    et :
**
**        réduire réellement la mémoire utilisée ?
**
** 7. Pourquoi faut-il vérifier l'index avant
**    de modifier le tableau ?
**
** 8. Que se passe-t-il si l'utilisateur entre :
**
**        -1
**
**    ou un index supérieur au dernier élément ?
**
**
** BONUS :
**
** Permettre à l'utilisateur de supprimer plusieurs
** éléments successivement.
**
** Après chaque suppression :
**
**     - mettre à jour size
**     - décaler les éléments
**     - utiliser realloc()
**     - afficher le tableau
**
**
** BONUS 2 :
**
** Créer une fonction :
**
**     void print_array(int *tab, int size);
**
**
** Pour afficher le tableau avant et après chaque
** suppression.
**
**
** BONUS 3 :
**
** Réfléchir au cas où le tableau ne contient plus
** aucun élément.
**
** Que doit faire ton programme lorsque :
**
**     size == 0
**
** ?
**
**
** OBJECTIF FINAL :
**
** Comprendre ce processus :
**
**        [10][20][30][40][50]
**                 ↓
**            supprimer 30
**                 ↓
**        décaler les éléments
**                 ↓
**        [10][20][40][50][50]
**                 ↓
**             size = 4
**                 ↓
**             realloc()
**                 ↓
**        [10][20][40][50]
**
**
** Tu dois comprendre qu'une suppression dans un tableau
** dynamique se fait en deux étapes :
**
**     1. déplacer les valeurs
**     2. réduire la mémoire avec realloc()
**
**
** Cet exercice est une synthèse importante de :
**
**     malloc + realloc + pointeurs + tableaux + boucles
*/