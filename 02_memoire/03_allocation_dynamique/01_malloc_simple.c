/*
** EXERCICE : Allocation dynamique d'un entier
**
** CONSIGNE :
**
** Créer dynamiquement une variable de type int
** en utilisant malloc().
**
**
** OBJECTIF :
**
** Apprendre à :
**
**     - utiliser malloc()
**     - récupérer une adresse avec malloc()
**     - stocker une valeur dans une zone mémoire dynamique
**     - lire la valeur grâce à un pointeur
**     - libérer la mémoire avec free()
**
**
** ÉTAPES :
**
** 1. Déclarer un pointeur vers un int :
**
**        int *p;
**
**
** 2. Allouer dynamiquement la mémoire nécessaire
**    pour stocker un int avec malloc().
**
**
** 3. Vérifier que malloc() a réussi.
**
**    Si l'allocation échoue, afficher un message
**    d'erreur et arrêter le programme.
**
**
** 4. Stocker la valeur 42 dans la zone mémoire
**    nouvellement allouée.
**
**
** 5. Afficher la valeur grâce au pointeur.
**
**    Résultat attendu :
**
**        Valeur = 42
**
**
** 6. Libérer la mémoire avec free().
**
**
** 7. Après free(), le pointeur ne doit plus être
**    utilisé pour accéder à la valeur.
**
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Utiliser un pointeur int *.
** - Ne pas créer un tableau.
** - Ne pas utiliser une variable int classique
**   pour stocker la valeur.
** - Vérifier que malloc() ne retourne pas NULL.
** - Utiliser free() à la fin.
**
**
** QUESTIONS À TE POSER :
**
** 1. Que retourne malloc() ?
**
** 2. Pourquoi utilise-t-on un pointeur pour récupérer
**    le résultat de malloc() ?
**
** 3. Quelle différence entre :
**
**        int x;
**
**    et :
**
**        int *p;
**
**        p = malloc(...);
**
** 4. Pourquoi doit-on vérifier si p == NULL ?
**
** 5. Pourquoi doit-on utiliser free() ?
**
** 6. Que se passe-t-il si on oublie free() ?
**
** 7. Si p contient une adresse, que permet de faire :
**
**        *p = 42;
**
**
** BONUS :
**
** Après free(), faire pointer p vers NULL :
**
**        p = NULL;
**
**
** Puis réfléchir à la raison pour laquelle cette
** pratique peut être utile.
**
**
** OBJECTIF FINAL :
**
** Comprendre ce schéma :
**
**        malloc()
**           ↓
**     zone mémoire
**           ↓
**        int *p
**           ↓
**        *p = 42
**           ↓
**      printf("%d", *p)
**           ↓
**        free(p)
**
**
** C'est la première étape avant de travailler avec :
**
**     - tableaux dynamiques
**     - chaînes dynamiques
**     - malloc + fonctions
**     - realloc()
**     - structures dynamiques
*/