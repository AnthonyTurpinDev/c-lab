/*
** EXERCICE : Utiliser calloc()
**
** CONSIGNE :
**
** Créer dynamiquement un tableau de 10 entiers
** en utilisant calloc().
**
**
** OBJECTIF :
**
** Observer ce que fait calloc() lorsqu'il réserve
** une nouvelle zone mémoire.
**
**
** ÉTAPES :
**
** 1. Déclarer un pointeur vers int :
**
**        int *tab;
**
**
** 2. Utiliser calloc() pour réserver la mémoire
**    nécessaire à 10 int.
**
**
** 3. Vérifier que l'allocation a réussi.
**
**    Si calloc() retourne NULL, afficher un message
**    d'erreur et arrêter le programme.
**
**
** 4. Afficher immédiatement les 10 valeurs du tableau
**    avec une boucle.
**
**    ⚠️ IMPORTANT :
**
**    Ne remplis PAS le tableau avant de l'afficher.
**
**    Le but est d'observer les valeurs présentes
**    juste après l'appel à calloc().
**
**
** Résultat attendu :
**
**     0 0 0 0 0 0 0 0 0 0
**
**
** 5. Libérer la mémoire avec free().
**
**
** CONTRAINTES :
**
** - Utiliser calloc().
** - Allouer exactement 10 int.
** - Utiliser un pointeur int *.
** - Ne pas initialiser manuellement les éléments
**   avant l'affichage.
** - Utiliser une boucle pour afficher les valeurs.
** - Vérifier que calloc() ne retourne pas NULL.
** - Utiliser free() à la fin.
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelles valeurs obtiens-tu juste après calloc() ?
**
** 2. Pourquoi toutes les cases affichent-elles 0 ?
**
** 3. Quelle différence principale existe entre :
**
**        malloc()
**
**    et :
**
**        calloc()
**
**    concernant l'état initial de la mémoire ?
**
** 4. Que représente la mémoire réservée par calloc() ?
**
** 5. Pourquoi doit-on quand même utiliser free() après
**    avoir utilisé calloc() ?
**
**
** BONUS :
**
** Après avoir affiché les valeurs initiales, modifier
** quelques éléments du tableau :
**
**     10 20 30 ...
**
**
** Puis afficher à nouveau le tableau.
**
** Observer que calloc() initialise la mémoire au départ,
** mais que les valeurs peuvent ensuite être modifiées
** normalement.
**
**
** BONUS 2 :
**
** Réaliser le même exercice avec malloc().
**
**
** ⚠️ Ne cherche pas à obtenir volontairement un résultat
** particulier avec malloc() : le contenu d'une mémoire
** nouvellement allouée par malloc() n'est pas initialisé
** de la même manière que celle obtenue avec calloc().
**
**
** OBJECTIF FINAL :
**
** Comprendre cette différence :
**
**        malloc()
**           ↓
**    mémoire non initialisée
**
**
**        calloc()
**           ↓
**    mémoire initialisée à zéro
**
**
** Puis dans les deux cas :
**
**        ↓
**
**       free()
*/