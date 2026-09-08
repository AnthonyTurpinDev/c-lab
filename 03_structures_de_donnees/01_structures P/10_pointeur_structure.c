/*
** EXERCICE : Pointeur vers une structure
**
** OBJECTIF :
**
** Comprendre la différence entre :
**
**      personne.age
**
** et :
**
**      p->age
**
**
** CONSIGNE :
**
** 1. Créer une structure `Personne` contenant :
**
**      - nom : tableau de 50 caractères
**      - age : entier
**
** 2. Dans `main`, créer une personne.
**
**    Exemple :
**
**      Nom : Anthony
**      Age : 20
**
** 3. Afficher les informations directement avec
**    la variable `personne`.
**
**    Tu dois notamment utiliser :
**
**      personne.nom
**      personne.age
**
** 4. Créer ensuite un pointeur vers cette personne.
**
**    Le pointeur doit contenir l'adresse de `personne`.
**
** 5. Afficher à nouveau les informations, mais cette fois
**    en utilisant le pointeur.
**
**    Tu dois utiliser :
**
**      p->nom
**      p->age
**
** AFFICHAGE ATTENDU :
**
**      --- Avec la structure ---
**      Nom : Anthony
**      Age : 20
**
**      --- Avec le pointeur ---
**      Nom : Anthony
**      Age : 20
**
**
** CONTRAINTES :
**
** - Utiliser `struct Personne`.
** - Créer une variable `personne`.
** - Créer un pointeur vers cette personne.
** - Le pointeur doit contenir l'adresse de `personne`.
** - Utiliser `.` pour accéder directement aux champs.
** - Utiliser `->` pour accéder aux champs via le pointeur.
** - Ne pas utiliser malloc.
** - Ne pas modifier la structure dans cet exercice.
**
**
** QUESTIONS À TE POSER :
**
** 1. Que contient `personne` ?
**
**      La structure elle-même.
**
** 2. Que contient `p` ?
**
**      Une adresse mémoire.
**
** 3. Pourquoi utilise-t-on :
**
**      personne.age
**
**    ?
**
** 4. Pourquoi utilise-t-on :
**
**      p->age
**
**    ?
**
** 5. Est-ce que `personne` et `p` contiennent
**    la même chose ?
**
** 6. Quelle est la relation entre :
**
**      p
**
**    et :
**
**      &personne
**
** 7. Essaie de comprendre cette équivalence :
**
**      p->age
**
**    revient conceptuellement à :
**
**      (*p).age
**
**
** IMPORTANT :
**
** `.` et `->` permettent tous les deux d'accéder
** à un champ d'une structure.
**
** Mais ils ne s'utilisent pas dans la même situation.
**
**
**      personne.age
**          ↑
**      personne est une structure
**
**
**      p->age
**        ↑
**      p est un pointeur vers une structure
**
**
** MENTAL MODEL :
**
**      personne
**          │
**          ├── nom
**          └── age
**
**          ↑
**          │
**          p
**          │
**          └── contient l'adresse de personne
**
**
**      personne.age
**           ↓
**      accès direct
**
**      p->age
**           ↓
**      accès indirect via le pointeur
**
**
** BONUS :
**
** Afficher également l'adresse de `personne`
** et la valeur contenue dans `p`.
**
** Tu devrais constater que :
**
**      &personne
**
** et :
**
**      p
**
** désignent la même adresse.
**
**
** BONUS 2 :
**
** Modifier l'âge avec le pointeur :
**
**      p->age
**
** puis afficher `personne.age`.
**
** Vérifie que la modification est bien visible
** dans la structure originale.
**
**
** OBJECTIF FINAL :
**
** Être capable de compléter automatiquement :
**
**      structure → .
**
**      pointeur vers structure → ->
**
** RETENIR :
**
**      .   = structure
**
**      ->  = pointeur vers structure
*/