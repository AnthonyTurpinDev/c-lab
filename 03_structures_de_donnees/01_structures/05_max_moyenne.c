/*
** EXERCICE : Meilleure moyenne
**
** OBJECTIF :
**
** Apprendre à :
** - manipuler un tableau de structures
** - parcourir un tableau dans une fonction
** - comparer les valeurs d'un champ
** - trouver le maximum
** - réfléchir au type de retour d'une fonction
**
** CONSIGNE :
**
** 1. Créer une structure `Etudiant` contenant :
**
**    - nom : tableau de 50 caractères
**    - age : entier
**    - moyenne : float
**
** 2. Dans `main`, créer un tableau de 5 étudiants.
**
** 3. Donner une moyenne différente à chaque étudiant.
**
**    Exemple :
**
**    Alex   → 14.5
**    Lucas  → 12.0
**    Emma   → 16.5
**    Thomas → 11.5
**    Sarah  → 15.0
**
** 4. Créer une fonction :
**
**      int find_best_student(...);
**
**    Cette fonction doit parcourir le tableau et
**    déterminer quel étudiant possède la meilleure moyenne.
**
** 5. IMPORTANT :
**
**    Réfléchis à ce que la fonction doit retourner.
**
**    Elle ne doit pas forcément retourner la moyenne.
**
**    Elle doit permettre à `main` de savoir QUEL étudiant
**    est le meilleur.
**
**    Indice :
**
**    Le tableau possède des indices :
**
**      0 → Alex
**      1 → Lucas
**      2 → Emma
**      3 → Thomas
**      4 → Sarah
**
**    Quel type de valeur pourrait représenter
**    la position du meilleur étudiant ?
**
** 6. Dans `main`, récupérer le résultat de la fonction
**    puis afficher les informations de l'étudiant trouvé.
**
** AFFICHAGE ATTENDU :
**
**    Meilleur étudiant :
**    Nom : Emma
**    Age : 20
**    Moyenne : 16.5
**
** CONTRAINTES :
**
** - Utiliser une structure `Etudiant`.
** - Utiliser un tableau de 5 étudiants.
** - Utiliser une fonction `find_best_student`.
** - La fonction doit retourner un `int`.
** - Parcourir le tableau avec une boucle.
** - Comparer les moyennes.
** - Ne pas trier le tableau.
** - Ne pas utiliser de pointeur pour retourner l'étudiant.
**
** QUESTIONS À TE POSER :
**
** 1. Si le meilleur étudiant est `Emma`, quelle est
**    sa position dans le tableau ?
**
** 2. Pourquoi la fonction retourne-t-elle un `int` ?
**
** 3. Quelle variable dois-tu utiliser pour mémoriser
**    l'indice du meilleur étudiant ?
**
** 4. Par quel étudiant dois-tu commencer la comparaison ?
**
** 5. Est-ce que tu dois mémoriser la meilleure moyenne
**    ET l'indice, ou seulement l'indice ?
**
** 6. Une fois l'indice retourné, comment `main` peut-il
**    accéder à l'étudiant correspondant ?
**
** INDICE DE RÉFLEXION :
**
**    find_best_student(...)
**             │
**             ↓
**       cherche dans le tableau
**             │
**             ↓
**       trouve une position
**             │
**             ↓
**       retourne un int
**             │
**             ↓
**       main récupère l'indice
**             │
**             ↓
**       etudiants[indice]
**
** BONUS :
**
** Modifier les moyennes et vérifier que la fonction
** retourne toujours le bon étudiant.
**
** BONUS 2 :
**
** Créer une fonction :
**
**      void print_student(Etudiant student);
**
** pour afficher les informations d'un étudiant.
**
** BONUS 3 :
**
** Gérer le cas où le tableau contient 0 étudiant.
**
** RAPPEL :
**
** La fonction ne doit pas nécessairement retourner
** l'objet entier.
**
** Ici, on cherche surtout à retourner SA POSITION.
**
** Exemple :
**
**    tableau :
**
**      [0] Alex
**      [1] Lucas
**      [2] Emma    ← meilleur
**      [3] Thomas
**      [4] Sarah
**
**    find_best_student(...)
**              ↓
**             2
**
**    puis dans main :
**
**      etudiants[2]
**
** MENTAL MODEL :
**
**    TABLEAU
**       ↓
**    comparer les moyennes
**       ↓
**    trouver le meilleur
**       ↓
**    mémoriser son indice
**       ↓
**    retourner l'indice
**       ↓
**    accéder à etudiants[indice]
*/