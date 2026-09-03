/*
** EXERCICE : Structure avec malloc
**
** OBJECTIF :
**
** Apprendre à :
** - déclarer un pointeur vers une structure
** - réserver dynamiquement la mémoire avec malloc
** - vérifier que malloc a réussi
** - accéder aux champs avec `->`
** - remplir une structure dynamique
** - libérer la mémoire avec free
**
** CONSIGNE :
**
** 1. Créer une structure `Personne` contenant :
**
**      - nom : tableau de 50 caractères
**      - age : entier
**
** 2. Dans `main`, déclarer :
**
**      struct Personne *personne;
**
**    À ce stade, `personne` est seulement un pointeur.
**
** 3. Utiliser `malloc` pour réserver suffisamment de mémoire
**    pour UNE structure `Personne`.
**
** 4. Vérifier que `malloc` a bien réussi.
**
**    Si l'allocation échoue, afficher un message d'erreur
**    et arrêter le programme proprement.
**
** 5. Remplir les informations de la personne.
**
**    Exemple :
**
**      Nom : Anthony
**      Age : 20
**
** 6. Comme `personne` est un pointeur vers une structure,
**    utiliser `->` pour accéder aux champs.
**
**    Exemple de réflexion :
**
**      personne->nom
**      personne->age
**
** 7. Afficher les informations.
**
** AFFICHAGE ATTENDU :
**
**      Nom : Anthony
**      Age : 20
**
** 8. À la fin du programme, libérer la mémoire avec :
**
**      free(personne);
**
**
** CONTRAINTES :
**
** - Utiliser `struct Personne`.
** - Utiliser :
**
**      struct Personne *personne;
**
** - Utiliser `malloc`.
** - Vérifier le résultat de `malloc`.
** - Utiliser `->` pour accéder aux champs.
** - Utiliser `free(personne)`.
** - Ne pas utiliser de tableau statique de personnes.
**
**
** QUESTIONS À TE POSER :
**
** 1. Que contient `personne` avant le malloc ?
**
** 2. Pourquoi doit-on utiliser `malloc` ?
**
** 3. Combien de structures `Personne` veux-tu créer
**    dynamiquement ?
**
** 4. Quelle quantité de mémoire faut-il réserver ?
**
** 5. Pourquoi doit-on vérifier le résultat de `malloc` ?
**
** 6. Pourquoi utilise-t-on :
**
**      personne->age
**
**    plutôt que :
**
**      personne.age
**
** 7. Quelle est la différence entre :
**
**      personne
**
**    et :
**
**      *personne
**
** 8. Que se passe-t-il si tu oublies `free(personne)` ?
**
**
** MENTAL MODEL :
**
** AVANT MALLOC :
**
**      personne
**         │
**         ↓
**      pointeur
**      (pas encore de structure allouée)
**
**
** APRÈS MALLOC :
**
**      personne
**         │
**         ↓
**      ┌─────────────────────┐
**      │ struct Personne     │
**      │                     │
**      │ nom                 │
**      │ age                 │
**      └─────────────────────┘
**
**
** ACCÈS :
**
**      personne->nom
**      personne->age
**
**
** FIN DU PROGRAMME :
**
**      personne
**         │
**         ↓
**       free()
**         ↓
**      mémoire libérée
**
**
** RAPPEL :
**
** Structure normale :
**
**      struct Personne personne;
**
**      personne.age
**
**
** Pointeur vers structure :
**
**      struct Personne *personne;
**
**      personne->age
**
**
** Structure dynamique :
**
**      struct Personne *personne;
**
**             ↓
**          malloc()
**             ↓
**      personne->age
**             ↓
**          free()
**
**
** BONUS :
**
** Demander le nom et l'âge à l'utilisateur avec `scanf`
** ou `fgets`.
**
** Exemple :
**
**      Nom : Anthony
**      Age : 20
**
**
** BONUS 2 :
**
** Afficher l'adresse contenue dans `personne` avant
** de libérer la mémoire.
**
** BONUS 3 :
**
** Après `free(personne)`, mettre le pointeur à `NULL`
** et réfléchir à l'intérêt de cette pratique.
**
**
** OBJECTIF FINAL :
**
** Être capable de comprendre cette chaîne :
**
**      pointeur
**         ↓
**      malloc
**         ↓
**      structure dynamique
**         ↓
**      ->
**         ↓
**      modification / affichage
**         ↓
**      free
**
** C'est la première vraie étape vers la manipulation
** de plusieurs structures allouées dynamiquement.
*/