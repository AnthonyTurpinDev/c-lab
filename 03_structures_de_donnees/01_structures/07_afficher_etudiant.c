/*
** EXERCICE : Afficher un étudiant avec une fonction
**
** OBJECTIF :
**
** Apprendre à :
** - utiliser une structure comme paramètre de fonction
** - créer une fonction dédiée à l'affichage
** - accéder aux champs d'une structure dans une fonction
** - réutiliser une fonction pour plusieurs étudiants
**
** CONSIGNE :
**
** 1. Créer une structure `Etudiant` contenant :
**
**    - nom : tableau de 50 caractères
**    - age : entier
**    - moyenne : float
**
** 2. Créer la fonction suivante :
**
**      void print_student(struct Etudiant student);
**
** 3. Cette fonction doit afficher toutes les informations
**    de l'étudiant reçu :
**
**      Nom
**      Age
**      Moyenne
**
** 4. Dans `main`, créer plusieurs étudiants.
**
**    Par exemple :
**
**      Alex   - 18 ans - 14.5
**      Lucas  - 19 ans - 15.2
**      Emma   - 20 ans - 16.5
**
** 5. Utiliser `print_student()` pour afficher chaque étudiant.
**
** AFFICHAGE ATTENDU :
**
**    --- Etudiant 1 ---
**    Nom : Alex
**    Age : 18
**    Moyenne : 14.50
**
**    --- Etudiant 2 ---
**    Nom : Lucas
**    Age : 19
**    Moyenne : 15.20
**
**    --- Etudiant 3 ---
**    Nom : Emma
**    Age : 20
**    Moyenne : 16.50
**
** CONTRAINTES :
**
** - Utiliser `struct Etudiant`.
** - Utiliser exactement la fonction :
**
**      void print_student(struct Etudiant student);
**
** - La fonction doit afficher les informations.
** - `main` doit créer plusieurs étudiants.
** - Appeler `print_student()` pour chaque étudiant.
** - Utiliser l'opérateur `.` pour accéder aux champs.
** - Ne pas utiliser de pointeur pour cet exercice.
** - Ne pas utiliser malloc.
**
** QUESTIONS À TE POSER :
**
** 1. Comment une structure peut-elle être passée
**    comme argument d'une fonction ?
**
** 2. Que représente `student` dans :
**
**      void print_student(struct Etudiant student)
**
** 3. Comment accéder au nom à l'intérieur de la fonction ?
**
**      student.nom
**
** 4. Comment accéder à l'âge ?
**
**      student.age
**
** 5. Comment accéder à la moyenne ?
**
**      student.moyenne
**
** 6. Pourquoi la fonction est-elle `void` ?
**
** 7. Quelle est la différence entre :
**
**      printf(...) dans main
**
**    et
**
**      print_student(...)
**
**    ?
**
** BONUS :
**
** Créer un tableau de 5 étudiants puis utiliser une
** boucle pour appeler `print_student()` sur chacun.
**
** BONUS 2 :
**
** Créer une fonction :
**
**      void print_students(struct Etudiant students[],
**                          int size);
**
** qui affiche tous les étudiants du tableau.
**
** BONUS 3 :
**
** Modifier `print_student()` pour afficher un séparateur
** propre entre chaque étudiant.
**
** RAPPEL :
**
** Une fonction peut recevoir une structure :
**
**    main
**     │
**     │  étudiant
**     ↓
** print_student()
**     │
**     ├── student.nom
**     ├── student.age
**     └── student.moyenne
**
** Ici, la structure est passée à la fonction.
**
** Pour l'instant :
**
**      student.nom
**
** et non :
**
**      student->nom
**
** Le `->` arrivera lorsque tu commenceras à manipuler
** des pointeurs vers des structures.
**
** MENTAL MODEL :
**
**    struct Etudiant
**          ↓
**       étudiant
**          ↓
**    print_student(student)
**          ↓
**    affichage des champs
**
** L'objectif est de séparer les responsabilités :
**
**    main
**      → crée les étudiants
**
**    print_student
**      → affiche un étudiant
*/