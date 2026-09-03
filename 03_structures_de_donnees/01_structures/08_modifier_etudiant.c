/*
** EXERCICE : Modifier un étudiant avec un pointeur
**
** OBJECTIF :
**
** Apprendre à :
** - créer un pointeur vers une structure
** - passer l'adresse d'une structure à une fonction
** - modifier directement la structure originale
** - comprendre `struct Etudiant *student`
** - comprendre l'opérateur `->`
**
** CONSIGNE :
**
** 1. Créer une structure `Etudiant` contenant :
**
**    - nom : tableau de 50 caractères
**    - age : entier
**    - moyenne : float
**
** 2. Créer un étudiant dans `main`.
**
**    Exemple :
**
**      Nom : Alex
**      Age : 18
**      Moyenne : 12.5
**
** 3. Afficher les informations AVANT modification.
**
** 4. Créer exactement la fonction :
**
**      void modify_student(struct Etudiant *student);
**
**
** 5. Dans cette fonction, modifier :
**
**      - le nom → Anthony
**      - l'âge → 20
**      - la moyenne → 15.5
**
** 6. Dans `main`, appeler la fonction en lui donnant
**    l'adresse de l'étudiant.
**
** 7. Afficher les informations APRÈS modification.
**
** AFFICHAGE ATTENDU :
**
**    --- AVANT ---
**    Nom : Alex
**    Age : 18
**    Moyenne : 12.5
**
**    --- APRES ---
**    Nom : Anthony
**    Age : 20
**    Moyenne : 15.5
**
** CONTRAINTES :
**
** - Utiliser `struct Etudiant`.
** - Utiliser un pointeur vers la structure.
** - Utiliser exactement :
**
**      void modify_student(struct Etudiant *student);
**
** - Utiliser `->` dans la fonction.
** - Modifier directement l'étudiant original.
** - Ne pas créer une deuxième structure dans la fonction.
** - Ne pas utiliser malloc.
**
** QUESTIONS À TE POSER :
**
** 1. Que signifie :
**
**      struct Etudiant *student
**
** 2. Est-ce que `student` contient l'étudiant ?
**
**    Ou est-ce qu'il contient son adresse ?
**
** 3. Dans `main`, pourquoi dois-tu donner l'adresse
**    de l'étudiant à la fonction ?
**
** 4. Si `student` est un pointeur vers une structure,
**    comment accéder à son champ `age` ?
**
**    Indice :
**
**      student->age
**
** 5. Pourquoi utilise-t-on `->` ici et non `.` ?
**
** 6. Quelle est la différence entre :
**
**      student.age
**
**    et
**
**      student->age
**
** 7. Que se passerait-il si tu envoyais une copie
**    de l'étudiant à la fonction ?
**
**
** RAPPEL IMPORTANT :
**
** Structure normale :
**
**      struct Etudiant student;
**
**      student.age
**
**
** Pointeur vers une structure :
**
**      struct Etudiant *student;
**
**      student->age
**
**
** MENTAL MODEL :
**
**      main
**       │
**       │ &etudiant
**       ↓
**   modify_student()
**       │
**       │ student
**       ↓
**   adresse de l'étudiant
**       │
**       ├──> nom
**       ├──> age
**       └──> moyenne
**
** La fonction ne travaille donc pas sur une copie :
** elle possède l'adresse de la structure originale.
**
** BONUS :
**
** Créer une deuxième fonction :
**
**      void birthday(struct Etudiant *student);
**
** qui augmente l'âge de l'étudiant de 1.
**
** Exemple :
**
**      Age avant : 20
**      Age après  : 21
**
** BONUS 2 :
**
** Créer une fonction :
**
**      void add_bonus(struct Etudiant *student);
**
** qui augmente la moyenne de 1 point.
**
** BONUS 3 :
**
** Modifier les informations de l'étudiant à partir
** de valeurs saisies par l'utilisateur.
**
** ATTENTION :
**
** Pour modifier le champ `nom`, rappelle-toi que `nom`
** est un tableau de caractères.
**
** Tu devras donc réfléchir à la manière de copier
** une chaîne dans ce tableau.
*/