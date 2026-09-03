/*
** EXERCICE : Liste chaînée avancée d'étudiants
**
** OBJECTIF :
**
** Créer une liste chaînée contenant des étudiants.
**
** Cette fois, chaque Node ne contient plus seulement
** une chaîne : il contient une structure complète.
**
** ---------------------------------------------------------
**
** STRUCTURES À UTILISER :
**
**      struct Etudiant {
**          char nom[50];
**          int age;
**          float moyenne;
**      };
**
**
**      struct Node {
**          struct Etudiant student;
**          struct Node *next;
**      };
**
** ---------------------------------------------------------
**
** EXEMPLE :
**
**      head
**       ↓
**
**      [Anthony | 20 | 15.5]
**              ↓
**      [Lucas   | 19 | 12.8]
**              ↓
**      [Thomas  | 21 | 16.2]
**              ↓
**             NULL
**
** ---------------------------------------------------------
**
** PROGRAMME :
**
** Créer un menu :
**
**      1. Ajouter un étudiant au début
**      2. Ajouter un étudiant à la fin
**      3. Afficher les étudiants
**      4. Rechercher un étudiant
**      5. Supprimer un étudiant
**      6. Afficher le meilleur étudiant
**      7. Calculer la moyenne générale
**      8. Compter les étudiants
**      9. Vider la liste
**      10. Quitter
**
** ---------------------------------------------------------
**
** FONCTIONS À CRÉER :
**
**      struct Node *create_node(struct Etudiant student);
**
**      void add_front(struct Node **head,
**                     struct Etudiant student);
**
**      void add_back(struct Node **head,
**                    struct Etudiant student);
**
**      void print_students(struct Node *head);
**
**      struct Node *find_student(struct Node *head,
**                                char *name);
**
**      void delete_student(struct Node **head,
**                          char *name);
**
**      struct Node *find_best_student(struct Node *head);
**
**      float calculate_general_average(struct Node *head);
**
**      int count_students(struct Node *head);
**
**      void free_list(struct Node **head);
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 1 — CRÉER UN ÉTUDIANT
**
** Demander :
**
**      Nom :
**      Age :
**      Moyenne :
**
** Exemple :
**
**      Nom : Anthony
**      Age : 20
**      Moyenne : 15.5
**
** Créer ensuite :
**
**      struct Etudiant student;
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 2 — CRÉER UN NODE
**
** create_node() doit :
**
**      - utiliser malloc()
**      - stocker la structure Etudiant
**      - mettre next à NULL
**      - retourner le Node *
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 3 — AJOUTER
**
** Tester les deux méthodes :
**
**      add_front()
**
** et :
**
**      add_back()
**
**
** Exemple :
**
**      add_front(Anthony)
**      add_back(Lucas)
**      add_back(Thomas)
**
** Résultat :
**
**      Anthony → Lucas → Thomas
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 4 — AFFICHER
**
** Afficher chaque étudiant :
**
**      Nom : Anthony
**      Age : 20
**      Moyenne : 15.50
**
**      ----------------
**
**      Nom : Lucas
**      Age : 19
**      Moyenne : 12.80
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 5 — RECHERCHER
**
** Demander un nom.
**
** Exemple :
**
**      Recherche : Lucas
**
** Si trouvé :
**
**      Étudiant trouvé !
**
**      Nom : Lucas
**      Age : 19
**      Moyenne : 12.80
**
** Utiliser :
**
**      strcmp()
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 6 — SUPPRIMER
**
** Demander un nom :
**
**      Suppression : Lucas
**
** Avant :
**
**      Anthony → Lucas → Thomas
**
** Après :
**
**      Anthony → Thomas
**
** Utiliser :
**
**      previous
**      current
**      strcmp()
**      free()
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 7 — MEILLEUR ÉTUDIANT
**
** Parcourir toute la liste.
**
** Comparer :
**
**      student.moyenne
**
** Trouver la plus grande moyenne.
**
** Exemple :
**
**      Anthony → 15.5
**      Lucas   → 12.8
**      Thomas  → 16.2
**
** Résultat :
**
**      Meilleur étudiant : Thomas
**      Moyenne : 16.2
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 8 — MOYENNE GÉNÉRALE
**
** Parcourir tous les Nodes.
**
** Additionner les moyennes.
**
** Puis diviser par le nombre d'étudiants.
**
** Exemple :
**
**      15.5 + 12.8 + 16.2
**      -----------------
**               3
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 9 — COMPTER
**
** Retourner le nombre de Nodes.
**
** Exemple :
**
**      Anthony → Lucas → Thomas → NULL
**
**      Nombre d'étudiants : 3
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 10 — LIBÉRER
**
** free_list(&head);
**
** Tous les Nodes doivent être libérés.
**
** À la fin :
**
**      head == NULL
**
** ---------------------------------------------------------
**
** 🧠 STRUCTURE DES DONNÉES :
**
** Cette fois tu as plusieurs niveaux :
**
**      head
**       ↓
**      Node
**       ↓
**      Etudiant
**       ↓
**      nom / age / moyenne
**
**
** Exemple :
**
**      head
**       ↓
**      Node
**       ├── student
**       │    ├── nom
**       │    ├── age
**       │    └── moyenne
**       │
**       └── next
**             ↓
**           Node
**
** ---------------------------------------------------------
**
** 🎯 ACCÈS AUX DONNÉES :
**
** Attention à la différence :
**
**      current->student.nom
**
**      current->student.age
**
**      current->student.moyenne
**
**
** current est un pointeur vers Node.
**
** student est directement contenu dans Node.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi mettre une structure Etudiant dans Node ?
**
** 2. Quelle différence entre :
**
**      current
**
** et :
**
**      current->student
**
**
** 3. Pourquoi utilise-t-on :
**
**      current->student.moyenne
**
**
** 4. Pourquoi create_node() reçoit-elle un
**    struct Etudiant et retourne un Node * ?
**
** 5. Pourquoi add_front() utilise-t-elle Node ** ?
**
** 6. Pourquoi find_student() retourne-t-elle Node * ?
**
** 7. Pourquoi faut-il previous pour supprimer un Node ?
**
** 8. Pourquoi faut-il free() ?
**
** 9. Que devient head après free_list() ?
**
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser deux structures.
** - Utiliser malloc().
** - Utiliser free().
** - Utiliser des pointeurs.
** - Utiliser des double pointeurs.
** - Utiliser strcmp().
** - Utiliser des boucles.
** - Utiliser des conditions.
** - Utiliser une liste chaînée.
** - Ne pas utiliser de tableau pour stocker les étudiants.
** - Gérer le cas d'une liste vide.
** - Gérer le cas d'un seul étudiant.
** - Gérer plusieurs étudiants.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajouter une fonction :
**
**      void sort_students(struct Node **head);
**
** Trier les étudiants par moyenne décroissante.
**
** Exemple :
**
**      Lucas 12.8
**      Anthony 15.5
**      Thomas 16.2
**
** devient :
**
**      Thomas 16.2
**      Anthony 15.5
**      Lucas 12.8
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Ajouter :
**
**      void print_successful_students(struct Node *head);
**
** Afficher uniquement les étudiants ayant :
**
**      moyenne >= 10
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Ajouter une fonction permettant de rechercher
** l'étudiant ayant le plus jeune âge.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 4 :
**
** Ajouter un identifiant unique :
**
**      int id;
**
** dans struct Etudiant.
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre qu'une structure de données peut contenir
** elle-même d'autres structures.
**
**      struct Etudiant
**             ↓
**      contenu du Node
**             ↓
**      liste chaînée
**             ↓
**      gestion dynamique
**
** ---------------------------------------------------------
**
** 🏆 NIVEAU :
**
** ★★★★☆ DIFFICILE
**
** Tu combines maintenant :
**
**      struct
**      +
**      struct imbriquée
**      +
**      malloc
**      +
**      free
**      +
**      pointeurs
**      +
**      double pointeurs
**      +
**      listes chaînées
**      +
**      strcmp
**      +
**      recherche
**      +
**      suppression
**      +
**      calcul
**
** Cet exercice doit être réalisé sans regarder les
** solutions des exercices précédents.
*/