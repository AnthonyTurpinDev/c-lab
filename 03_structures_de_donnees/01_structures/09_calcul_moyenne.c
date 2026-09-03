/*
** EXERCICE : Calculer la moyenne d'un étudiant
**
** OBJECTIF :
**
** Combiner plusieurs notions :
**
** - structure
** - tableau
** - pointeur
** - fonction
** - boucle
** - calcul
** - opérateur `->`
**
** CONSIGNE :
**
** 1. Créer une structure `Etudiant` contenant :
**
**      - nom : tableau de 50 caractères
**      - notes : tableau de 5 float
**
** 2. Dans `main`, créer un étudiant.
**
**    Exemple :
**
**      Nom : Anthony
**
**      Notes :
**      12.0
**      15.0
**      14.0
**      16.0
**      13.0
**
** 3. Créer exactement la fonction :
**
**      float calculate_average(struct Etudiant *student);
**
**
** 4. Cette fonction doit :
**
**      - recevoir un pointeur vers un étudiant
**      - parcourir les 5 notes avec une boucle
**      - additionner toutes les notes
**      - calculer la moyenne
**      - retourner la moyenne
**
** 5. Dans `main`, appeler la fonction et récupérer
**    le résultat.
**
** 6. Afficher la moyenne obtenue.
**
** AFFICHAGE ATTENDU :
**
**      Nom : Anthony
**      Moyenne : 14.00
**
** CONTRAINTES :
**
** - Utiliser `struct Etudiant`.
** - Le champ `notes` doit être un tableau de 5 `float`.
** - Utiliser exactement :
**
**      float calculate_average(struct Etudiant *student);
**
**
** - Utiliser une boucle pour parcourir les notes.
** - Utiliser `->` pour accéder aux champs via le pointeur.
** - La fonction ne doit pas modifier les notes.
** - Retourner la moyenne avec `return`.
** - Ne pas utiliser de tableau supplémentaire.
**
** QUESTIONS À TE POSER :
**
** 1. Que contient `student` dans la fonction ?
**
**      Une structure ?
**      Ou l'adresse d'une structure ?
**
** 2. Puisque `student` est un pointeur, comment accéder
**    au tableau `notes` ?
**
**    Indice :
**
**      student->notes
**
** 3. Comment accéder à une note particulière ?
**
**    Exemple :
**
**      student->notes[i]
**
** 4. Combien de fois la boucle doit-elle s'exécuter ?
**
** 5. Quelle variable dois-tu utiliser pour stocker
**    la somme ?
**
** 6. Pourquoi le résultat doit-il être un `float` ?
**
** 7. Pourquoi faut-il faire attention à la division
**    entre un entier et un nombre décimal ?
**
** 8. Est-ce que `calculate_average()` doit modifier
**    l'étudiant ?
**
**    Non : elle doit seulement lire ses notes et
**    retourner un résultat.
**
** RAPPEL :
**
** Structure :
**
**      struct Etudiant student;
**
** Accès normal :
**
**      student.notes[i]
**
**
** Pointeur vers structure :
**
**      struct Etudiant *student;
**
** Accès avec pointeur :
**
**      student->notes[i]
**
**
** MENTAL MODEL :
**
**      student
**         │
**         ↓
**    struct Etudiant
**         │
**         ├── nom
**         │
**         └── notes
**              │
**              ├── [0]
**              ├── [1]
**              ├── [2]
**              ├── [3]
**              └── [4]
**
**      student->notes[i]
**                │
**                └── accède à la note numéro i
**
** CALCUL :
**
**      notes[0]
**        +
**      notes[1]
**        +
**      notes[2]
**        +
**      notes[3]
**        +
**      notes[4]
**        ↓
**      somme
**        ↓
**      somme / 5
**        ↓
**      moyenne
**
** BONUS :
**
** Créer une fonction :
**
**      void print_student(struct Etudiant *student);
**
** qui affiche le nom, les 5 notes et la moyenne.
**
** BONUS 2 :
**
** Modifier `calculate_average()` pour qu'elle fonctionne
** avec un nombre de notes variable.
**
** Exemple :
**
**      float calculate_average(struct Etudiant *student,
**                              int size);
**
** BONUS 3 :
**
** Créer une fonction qui retourne la meilleure note :
**
**      float find_best_note(struct Etudiant *student);
**
** BONUS 4 :
**
** Afficher la moyenne avec exactement deux chiffres
** après la virgule.
**
** OBJECTIF FINAL :
**
** Être capable de comprendre cette combinaison :
**
**      struct
**        ↓
**      pointeur
**        ↓
**      ->
**        ↓
**      tableau
**        ↓
**      boucle
**        ↓
**      calcul
**        ↓
**      return
**
** Cet exercice est une synthèse importante avant
** de passer à des structures plus complexes.
*/