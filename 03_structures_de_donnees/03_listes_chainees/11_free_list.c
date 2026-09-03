/*
** EXERCICE : Libérer toute une liste chaînée
**
** OBJECTIF :
**
** Créer une fonction capable de libérer TOUS les maillons
** d'une liste chaînée avec free().
**
** À la fin de la fonction, head doit être égal à NULL.
**
** ---------------------------------------------------------
**
** FONCTION À CRÉER :
**
**      void free_list(struct Node **head);
**
** ---------------------------------------------------------
**
** EXEMPLE :
**
** AVANT :
**
**      head
**       ↓
**      C → Git → Linux → Bash → NULL
**
** Appel :
**
**      free_list(&head);
**
** APRÈS :
**
**      head → NULL
**
** Tous les Nodes ont été libérés.
**
** ---------------------------------------------------------
**
** ⚠️ POINT CENTRAL :
**
** Tu dois libérer les Nodes UN PAR UN.
**
** Tu ne peux pas faire simplement :
**
**      free(*head);
**
**
** Cela ne libérerait que le premier maillon.
**
** Il faut parcourir toute la liste.
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Vérifier si la liste est vide :
**
**      *head == NULL
**
**    Si oui, il n'y a rien à libérer.
**
** 2. Créer un pointeur pour parcourir la liste :
**
**      struct Node *current;
**
** 3. Créer un pointeur permettant de conserver
**    l'adresse du maillon suivant :
**
**      struct Node *next;
**
** 4. Commencer au premier maillon :
**
**      current = *head;
**
** 5. Tant que current n'est pas NULL :
**
**      while (current != NULL)
**
** 6. AVANT de faire free(current), sauvegarder
**    le maillon suivant :
**
**      next = current->next;
**
** 7. Libérer le maillon actuel :
**
**      free(current);
**
** 8. Avancer vers le maillon suivant :
**
**      current = next;
**
** 9. Lorsque tous les Nodes ont été libérés,
**    remettre head à NULL :
**
**      *head = NULL;
**
**
** ---------------------------------------------------------
**
** 🧠 POURQUOI SAUVEGARDER next AVANT free() ?
**
** C'est LE point important de l'exercice.
**
** AVANT free :
**
**      current
**         ↓
**      [C] → [Git] → [Linux] → NULL
**
** Tu peux encore accéder à :
**
**      current->next
**
**
** Tu sauvegardes donc :
**
**      next = current->next;
**
**
** Puis :
**
**      free(current);
**
**
** Maintenant [C] n'existe plus en mémoire.
**
** Mais tu possèdes toujours :
**
**      next
**       ↓
**     [Git]
**
** Tu peux donc continuer :
**
**      current = next;
**
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA COMPLET :
**
**      current
**         ↓
**      [C] → [Git] → [Linux] → [Bash] → NULL
**         ↑
**       next = Git
**
**      free(current)
**
**      current = next
**
**         ↓
**
**      [C]    [Git] → [Linux] → [Bash] → NULL
**                ↑
**             current
**
**      next = current->next
**      free(current)
**      current = next
**
**         ↓
**
**      [C]    [Git]    [Linux] → [Bash] → NULL
**                         ↑
**                      current
**
**      next = current->next
**      free(current)
**      current = next
**
**         ↓
**
**      [C]    [Git]    [Linux]    [Bash] → NULL
**                                    ↑
**                                 current
**
**      next = current->next
**      free(current)
**      current = next
**
**         ↓
**
**      current == NULL
**
**      *head = NULL
**
** ---------------------------------------------------------
**
** 🎯 POURQUOI struct Node **head ?
**
** Parce qu'à la fin, tu dois modifier head lui-même.
**
** Avant :
**
**      head
**       ↓
**      [C] → [Git] → [Linux]
**
** Après :
**
**      head → NULL
**
** La fonction doit donc avoir accès à l'adresse
** de la variable head :
**
**      free_list(&head);
**
** et recevoir :
**
**      struct Node **head
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi ne peut-on pas faire uniquement :
**
**      free(*head);
**
** 2. Pourquoi faut-il parcourir toute la liste ?
**
** 3. Pourquoi doit-on sauvegarder current->next
**    AVANT free(current) ?
**
** 4. Que devient current après free(current) ?
**
** 5. Pourquoi utilise-t-on une variable next ?
**
** 6. Pourquoi remettre *head à NULL à la fin ?
**
** 7. Pourquoi utilise-t-on struct Node **head ?
**
** 8. Que se passe-t-il si la liste est déjà vide ?
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser struct Node **head.
** - Utiliser current.
** - Utiliser next.
** - Utiliser free().
** - Parcourir toute la liste.
** - Sauvegarder le prochain Node avant free().
** - Mettre *head à NULL à la fin.
** - Ne pas utiliser de tableau.
**
** ---------------------------------------------------------
**
** 🧪 TEST MINIMUM :
**
** Crée :
**
**      C → Git → Linux → Bash → NULL
**
** Puis :
**
**      free_list(&head);
**
**
** Vérifie que :
**
**      head == NULL
**
**
** Affiche :
**
**      Liste libérée !
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Appelle deux fois :
**
**      free_list(&head);
**      free_list(&head);
**
** Le programme ne doit pas provoquer de crash.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Teste avec :
**
**      struct Node *head = NULL;
**
** Puis :
**
**      free_list(&head);
**
**
** Rien ne doit être libéré et le programme doit continuer
** normalement.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Construis une liste avec malloc(), puis vérifie avec
** un outil de détection de fuites mémoire que tous les
** maillons sont correctement libérés.
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre le cycle complet de la mémoire dynamique :
**
**      malloc()
**        ↓
**      mémoire réservée
**        ↓
**      utilisation
**        ↓
**      free()
**        ↓
**      mémoire libérée
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Quand tu parcours une liste pour libérer ses Nodes :
**
**      next = current->next;
**      free(current);
**      current = next;
**
** L'ordre est IMPORTANT.
**
** ---------------------------------------------------------
**
** ⚠️ ERREUR CLASSIQUE :
**
** NE FAIS PAS :
**
**      free(current);
**      current = current->next;
**
**
** Après free(current), accéder à current->next
** peut provoquer un accès à une zone mémoire libérée.
**
** ---------------------------------------------------------
**
** 💡 CONCEPT À MAÎTRISER :
**
** malloc() réserve de la mémoire.
**
** free() libère cette mémoire.
**
** Si tu fais malloc() sans free(), tu risques
** une fuite mémoire (memory leak).
**
** Une liste chaînée dynamique doit donc avoir
** un mécanisme permettant de libérer tous ses Nodes.
**
** ---------------------------------------------------------
**
** 🏆 OBJECTIF FINAL :
**
** Être capable de faire :
**
**      struct Node *head = NULL;
**
**      add_front(&head, "C");
**      add_front(&head, "Git");
**      add_back(&head, "Linux");
**
**      print_list(head);
**
**      free_list(&head);
**
** et terminer avec :
**
**      head == NULL
**
** sans fuite mémoire.
*/