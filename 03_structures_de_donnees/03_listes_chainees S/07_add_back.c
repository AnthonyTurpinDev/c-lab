/*
** EXERCICE : Ajouter un maillon à la fin
**
** OBJECTIF :
**
** Créer une fonction capable d'ajouter une nouvelle chaîne
** à la FIN d'une liste chaînée.
**
** ---------------------------------------------------------
**
** FONCTION À CRÉER :
**
**      void add_back(struct Node **head, char *str);
**
** ---------------------------------------------------------
**
** EXEMPLE :
**
** Liste de départ :
**
**      C → Git → Linux → NULL
**
** Ajouter :
**
**      "Bash"
**
** Résultat :
**
**      C → Git → Linux → Bash → NULL
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Créer un nouveau Node avec create_node(str).
**
** 2. Vérifier si la liste est vide :
**
**      *head == NULL
**
**    Si elle est vide, le nouveau Node devient le premier :
**
**      *head = new_node;
**
**    Puis terminer la fonction.
**
** 3. Si la liste n'est pas vide, créer un pointeur
**    temporaire :
**
**      struct Node *current;
**
** 4. Faire commencer current au début :
**
**      current = *head;
**
** 5. Parcourir la liste jusqu'au dernier maillon.
**
**    Le dernier maillon est celui dont :
**
**      current->next == NULL
**
** 6. Avancer avec :
**
**      current = current->next;
**
**
** 7. Lorsque current est arrivé au dernier maillon,
**    faire pointer son next vers le nouveau Node :
**
**      current->next = new_node;
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
** AVANT :
**
**      head
**       ↓
**      [C] → [Git] → [Linux] → NULL
**                         ↑
**                       current
**
**
** NOUVEAU NODE :
**
**      [Bash] → NULL
**
**
** APRÈS :
**
**      head
**       ↓
**      [C] → [Git] → [Linux] → [Bash] → NULL
**
** ---------------------------------------------------------
**
** 🎯 LE POINT IMPORTANT :
**
** Pour ajouter à la fin, tu dois trouver le dernier Node.
**
** Comment savoir qu'un Node est le dernier ?
**
**      current->next == NULL
**
** Tant que ce n'est pas le cas :
**
**      current = current->next;
**
**
** ---------------------------------------------------------
**
** 🧠 COMPARAISON AVEC add_front :
**
** add_front :
**
**      nouveau → ancien premier → ...
**         ↑
**        head
**
**
** add_back :
**
**      ancien premier → ... → dernier → nouveau
**                                      ↑
**                                  current->next
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Comment détecter le dernier maillon ?
**
** 2. Pourquoi utiliser current ?
**
** 3. Pourquoi ne faut-il pas déplacer head ?
**
** 4. Que contient current->next avant l'ajout ?
**
** 5. Que doit contenir current->next après l'ajout ?
**
** 6. Pourquoi faut-il tester *head == NULL ?
**
** 7. Pourquoi utilise-t-on struct Node **head
**    et non simplement struct Node *head ?
**
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser create_node().
** - Utiliser malloc() indirectement via create_node().
** - Utiliser struct Node **head.
** - Utiliser un pointeur current.
** - Parcourir la liste avec current->next.
** - Utiliser une boucle.
** - Gérer le cas d'une liste vide.
** - Ne pas utiliser de tableau.
**
** ---------------------------------------------------------
**
** 🧪 TEST MINIMUM :
**
** Crée :
**
**      C → Git → Linux → NULL
**
** Puis :
**
**      add_back(&head, "Bash");
**
**
** Affiche la liste avec print_list().
**
** Résultat :
**
**      C
**      Git
**      Linux
**      Bash
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajoute plusieurs éléments à la fin :
**
**      add_back(&head, "C");
**      add_back(&head, "Git");
**      add_back(&head, "Linux");
**      add_back(&head, "Bash");
**
** Résultat :
**
**      C → Git → Linux → Bash → NULL
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Teste avec une liste vide :
**
**      struct Node *head = NULL;
**
** Puis :
**
**      add_back(&head, "C");
**
**
** Résultat :
**
**      C → NULL
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Compte combien de maillons tu parcours avant d'arriver
** au dernier.
**
** Exemple :
**
**      C → Git → Linux → Bash
**
** Pour ajouter "Make", tu dois parcourir :
**
**      C → Git → Linux → Bash
**
** avant d'ajouter :
**
**      Make
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Maîtriser le parcours d'une liste chaînée :
**
**      current = *head;
**
**      while (current->next != NULL)
**      {
**          current = current->next;
**      }
**
** Puis comprendre :
**
**      current->next = new_node;
**
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Pour trouver le dernier maillon :
**
**      current->next == NULL
**
** Pour avancer :
**
**      current = current->next;
**
**
** Pour ajouter le nouveau maillon :
**
**      current->next = new_node;
**
**
** ---------------------------------------------------------
**
** ⚠️ ATTENTION :
**
** Ne confonds pas :
**
**      current == NULL
**
** et :
**
**      current->next == NULL
**
**
** current == NULL
** → il n'y a plus de maillon.
**
** current->next == NULL
** → current est le DERNIER maillon.
*/