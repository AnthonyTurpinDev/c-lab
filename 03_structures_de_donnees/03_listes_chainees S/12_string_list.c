/*
** EXERCICE : Gestion complète d'une liste de chaînes
**
** OBJECTIF :
**
** Créer un programme complet permettant de gérer une liste
** chaînée dynamique contenant des chaînes de caractères.
**
** Cet exercice regroupe presque tout ce que tu as appris
** dans les exercices précédents.
**
** ---------------------------------------------------------
**
** STRUCTURE À UTILISER :
**
**      struct Node {
**          char *data;
**          struct Node *next;
**      };
**
** ---------------------------------------------------------
**
** MENU :
**
**      1. Ajouter au début
**      2. Ajouter à la fin
**      3. Afficher la liste
**      4. Rechercher une chaîne
**      5. Supprimer une chaîne
**      6. Compter les chaînes
**      7. Vider la liste
**      8. Quitter
**
** ---------------------------------------------------------
**
** EXEMPLE DE SESSION :
**
**      ===== LISTE DE CHAÎNES =====
**
**      1. Ajouter au début
**      2. Ajouter à la fin
**      3. Afficher la liste
**      4. Rechercher une chaîne
**      5. Supprimer une chaîne
**      6. Compter les chaînes
**      7. Vider la liste
**      8. Quitter
**
**      Choix : 1
**
**      Chaîne : C
**
**      Choix : 2
**
**      Chaîne : Git
**
**      Choix : 2
**
**      Chaîne : Linux
**
**      Choix : 3
**
**      C
**      Git
**      Linux
**
**      Choix : 6
**
**      Nombre de chaînes : 3
**
** ---------------------------------------------------------
**
** FONCTIONS QUE TU DEVRAIS UTILISER :
**
**      struct Node *create_node(char *str);
**
**      void add_front(struct Node **head, char *str);
**
**      void add_back(struct Node **head, char *str);
**
**      void print_list(struct Node *head);
**
**      struct Node *find_string(struct Node *head, char *str);
**
**      void delete_string(struct Node **head, char *str);
**
**      int count_nodes(struct Node *head);
**
**      void free_list(struct Node **head);
**
**
** Tu peux reprendre les fonctions que tu as créées
** dans les exercices 04 à 11.
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 1 — INITIALISER LA LISTE
**
** Dans main(), créer :
**
**      struct Node *head = NULL;
**
** Au début, la liste est vide.
**
**      head → NULL
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 2 — AFFICHER LE MENU
**
** Utiliser une boucle pour afficher le menu et demander
** continuellement un choix à l'utilisateur.
**
** Le programme doit continuer tant que l'utilisateur
** ne choisit pas 8.
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 3 — AJOUTER AU DÉBUT
**
** Demander une chaîne à l'utilisateur.
**
** Puis utiliser :
**
**      add_front(&head, str);
**
**
** Exemple :
**
**      C → Git → Linux
**
** Ajouter "Bash" au début :
**
**      Bash → C → Git → Linux
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 4 — AJOUTER À LA FIN
**
** Demander une chaîne puis utiliser :
**
**      add_back(&head, str);
**
**
** Exemple :
**
**      C → Git → Linux
**
** Ajouter "Bash" :
**
**      C → Git → Linux → Bash
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 5 — AFFICHER
**
** Utiliser :
**
**      print_list(head);
**
**
** Si la liste est vide, afficher par exemple :
**
**      Liste vide.
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 6 — RECHERCHER
**
** Demander une chaîne.
**
** Utiliser :
**
**      find_string(head, str);
**
**
** Si la fonction retourne un Node :
**
**      Chaîne trouvée !
**
**
** Sinon :
**
**      Chaîne introuvable.
**
**
** ⚠️ La comparaison doit utiliser strcmp().
**
** Ne jamais faire :
**
**      current->data == str
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 7 — SUPPRIMER
**
** Demander une chaîne.
**
** Utiliser :
**
**      delete_string(&head, str);
**
**
** La fonction doit :
**
**      rechercher
**          ↓
**      modifier les liens
**          ↓
**      free()
**
**
** Elle doit fonctionner pour :
**
**      premier Node
**      Node au milieu
**      dernier Node
**      chaîne inexistante
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 8 — COMPTER
**
** Utiliser :
**
**      count_nodes(head);
**
**
** Exemple :
**
**      C → Git → Linux → Bash
**
** Résultat :
**
**      Nombre de chaînes : 4
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 9 — VIDER LA LISTE
**
** Utiliser :
**
**      free_list(&head);
**
**
** Après cette opération :
**
**      head == NULL
**
**
** Exemple :
**
**      C → Git → Linux → Bash
**
**              ↓
**         free_list(&head)
**
**              ↓
**
**      head → NULL
**
** ---------------------------------------------------------
**
** 🎯 ÉTAPE 10 — QUITTER
**
** Lorsque l'utilisateur choisit 8 :
**
**      8. Quitter
**
** Avant de terminer le programme, vérifie que la liste
** est bien libérée.
**
** Si nécessaire :
**
**      free_list(&head);
**
** ---------------------------------------------------------
**
** 🧠 ARCHITECTURE DU PROGRAMME :
**
**
**                  main()
**                    │
**                    ↓
**                menu / choix
**                    │
**          ┌─────────┼─────────┐
**          ↓         ↓         ↓
**       add_front  add_back  print_list
**          │         │         │
**          └─────────┼─────────┘
**                    ↓
**                 head
**                    ↓
**            [Node] → [Node]
**                       ↓
**                     NULL
**
** ---------------------------------------------------------
**
** 🎯 LES DEUX NIVEAUX DE POINTEURS :
**
** Pour simplement parcourir :
**
**      struct Node *head
**
**
** Pour modifier head :
**
**      struct Node **head
**
**
** Exemple :
**
**      print_list(head);
**
**      find_string(head, "Linux");
**
**
** mais :
**
**      add_front(&head, "C");
**
**      add_back(&head, "Git");
**
**      delete_string(&head, "Linux");
**
**      free_list(&head);
**
** ---------------------------------------------------------
**
** 🧠 MÉMOIRE :
**
** Chaque ajout utilise malloc() indirectement :
**
**      add_front()
**           ↓
**      create_node()
**           ↓
**         malloc()
**
**
** Chaque suppression doit libérer le Node :
**
**      delete_string()
**           ↓
**         free()
**
**
** Et lorsque toute la liste est terminée :
**
**      free_list()
**           ↓
**      free()
**      free()
**      free()
**      ...
**
** ---------------------------------------------------------
**
** ⚠️ POINT TRÈS IMPORTANT SUR char *data :
**
** Chaque Node contient :
**
**      char *data;
**
** Tu dois décider comment stocker correctement la chaîne
** fournie par l'utilisateur.
**
** Une simple affectation :
**
**      node->data = str;
**
** fait pointer data vers la même zone mémoire que str.
**
** Pour une vraie gestion dynamique des chaînes, tu peux
** utiliser une copie dynamique de la chaîne.
**
** Si tu choisis cette approche, pense également à libérer
** la mémoire de data avant de libérer le Node.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi head commence-t-il à NULL ?
**
** 2. Pourquoi add_front() reçoit-il &head ?
**
** 3. Pourquoi print_list() reçoit-il simplement head ?
**
** 4. Pourquoi find_string() retourne-t-il un Node * ?
**
** 5. Pourquoi utilise-t-on strcmp() ?
**
** 6. Comment supprimer le premier Node ?
**
** 7. Comment supprimer un Node au milieu ?
**
** 8. Pourquoi faut-il un previous dans delete_string() ?
**
** 9. Pourquoi sauvegarder next avant free() ?
**
** 10. Pourquoi faut-il mettre head à NULL après
**     free_list() ?
**
** 11. Combien de malloc() sont effectués si tu ajoutes
**     5 Nodes ?
**
** 12. Combien de free() faut-il pour vider ces 5 Nodes ?
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser struct Node.
** - Utiliser char *.
** - Utiliser malloc().
** - Utiliser free().
** - Utiliser des pointeurs.
** - Utiliser des double pointeurs.
** - Utiliser des boucles.
** - Utiliser des conditions.
** - Utiliser strcmp().
** - Utiliser une liste chaînée.
** - Gérer une liste vide.
** - Gérer plusieurs maillons.
** - Ne pas utiliser de tableau pour stocker la liste.
** - Ne pas utiliser de variable globale pour head.
**
** ---------------------------------------------------------
**
** 🧪 TEST OBLIGATOIRE :
**
** 1. Démarre avec une liste vide.
**
** 2. Ajoute :
**
**      C
**      Git
**      Linux
**      Bash
**
** 3. Affiche.
**
**      C
**      Git
**      Linux
**      Bash
**
** 4. Recherche :
**
**      Linux
**
**    → trouvée
**
** 5. Recherche :
**
**      Python
**
**    → introuvable
**
** 6. Compte :
**
**      4
**
** 7. Supprime :
**
**      Git
**
** 8. Affiche :
**
**      C
**      Linux
**      Bash
**
** 9. Supprime :
**
**      C
**
** 10. Affiche :
**
**      Linux
**      Bash
**
** 11. Vide la liste.
**
** 12. Vérifie :
**
**      head == NULL
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajouter une option :
**
**      9. Afficher le menu
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Afficher les maillons avec leur numéro :
**
**      [1] C
**      [2] Git
**      [3] Linux
**      [4] Bash
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Ajouter une option :
**
**      9. Supprimer toutes les occurrences
**
** Exemple :
**
**      C → Git → C → Linux
**
** Supprimer "C" :
**
**      Git → Linux
**
** ---------------------------------------------------------
**
** ⭐ BONUS 4 :
**
** Afficher le nombre de Nodes après chaque opération.
**
** Exemple :
**
**      Nombre de chaînes : 3
**
** ---------------------------------------------------------
**
** ⭐ BONUS 5 :
**
** Ajouter une fonction :
**
**      void reverse_list(struct Node **head);
**
**
** Exemple :
**
**      C → Git → Linux → Bash
**
** devient :
**
**      Bash → Linux → Git → C
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Cet exercice doit te permettre de réunir :
**
**      struct
**        +
**      char *
**        +
**      malloc
**        +
**      free
**        +
**      pointeurs
**        +
**      double pointeurs
**        +
**      boucles
**        +
**      conditions
**        +
**      strcmp
**        +
**      listes chaînées
**
** ---------------------------------------------------------
**
** 🏆 OBJECTIF FINAL :
**
** Être capable d'expliquer chaque opération :
**
**      Ajouter
**        ↓
**      créer un Node
**        ↓
**      relier les Nodes
**
**      Rechercher
**        ↓
**      parcourir
**        ↓
**      strcmp
**
**      Supprimer
**        ↓
**      trouver
**        ↓
**      réparer les liens
**        ↓
**      free
**
**      Vider
**        ↓
**      parcourir
**        ↓
**      free chaque Node
**        ↓
**      head = NULL
**
** Si tu comprends réellement ce programme,
** tu as fait un gros pas vers la maîtrise des listes
** chaînées dynamiques en C.
*/