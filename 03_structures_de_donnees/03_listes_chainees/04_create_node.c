/*
** EXERCICE : Créer un maillon dynamiquement
**
** OBJECTIF :
**
** Créer une fonction capable de créer un nouveau maillon
** de liste chaînée en utilisant malloc().
**
** ---------------------------------------------------------
**
** FONCTION À CRÉER :
**
**      struct Node *create_node(char *str);
**
** La fonction reçoit une chaîne de caractères et doit
** créer un nouveau Node contenant cette chaîne.
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
** EXEMPLE D'UTILISATION :
**
**      create_node("Bonjour");
**
** Le maillon créé doit représenter :
**
**      ┌─────────────────┐
**      │ data → Bonjour  │
**      │ next → NULL     │
**      └─────────────────┘
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer la structure Node.
**
** 2. Créer la fonction :
**
**      struct Node *create_node(char *str);
**
** 3. À l'intérieur de la fonction, réserver de la mémoire
**    pour un Node avec malloc().
**
** 4. Vérifier que malloc() a réussi.
**
** 5. Faire en sorte que data contienne la chaîne reçue
**    par la fonction.
**
**      str
**       ↓
**      data
**
** 6. Initialiser next à NULL.
**
** 7. Retourner l'adresse du nouveau Node.
**
** ---------------------------------------------------------
**
** COMPORTEMENT ATTENDU :
**
**      struct Node *node;
**
**      node = create_node("Bonjour");
**
**      printf("%s\n", node->data);
**
** doit afficher :
**
**      Bonjour
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Utiliser struct Node.
** - La fonction doit retourner un struct Node *.
** - data doit recevoir la chaîne str.
** - next doit être initialisé à NULL.
** - Vérifier le retour de malloc().
** - Ne pas créer le Node directement dans main().
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi la fonction retourne-t-elle un pointeur ?
**
** 2. Que doit contenir le pointeur retourné ?
**
** 3. Pourquoi utilise-t-on malloc() ?
**
** 4. Que se passe-t-il si malloc() retourne NULL ?
**
** 5. Pourquoi next doit-il être NULL au moment
**    de la création ?
**
** 6. Quelle différence entre :
**
**      str
**
**    et :
**
**      node->data
**
** 7. Pourquoi utilise-t-on -> pour accéder aux champs
**    du Node retourné par create_node() ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      create_node("Bonjour")
**                ↓
**             malloc()
**                ↓
**          nouveau Node
**          ┌─────────────┐
**          │ data        │────→ "Bonjour"
**          │ next        │────→ NULL
**          └─────────────┘
**                ↑
**                │
**         struct Node *
**                │
**             return
**
** ---------------------------------------------------------
**
** 🎯 À COMPRENDRE :
**
** malloc() crée le maillon en mémoire dynamique.
**
** La fonction retourne ensuite son adresse.
**
**      create_node()
**             ↓
**       adresse du Node
**             ↓
**          node pointer
**
** ---------------------------------------------------------
**
** ⚠️ ATTENTION :
**
** Pour cet exercice, concentre-toi d'abord sur la création
** du Node.
**
** Tu n'as pas encore besoin de créer une liste complète.
**
** La libération avec free() sera importante lorsque le
** programme sera terminé.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Crée trois Nodes avec la fonction :
**
**      create_node("C")
**      create_node("Git")
**      create_node("Linux")
**
** Puis relie-les :
**
**      C → Git → Linux → NULL
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Crée une fonction :
**
**      void print_node(struct Node *node);
**
** qui affiche le contenu d'un maillon.
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre ce mécanisme :
**
**      fonction
**         ↓
**      malloc()
**         ↓
**      Node créé
**         ↓
**      remplissage
**         ↓
**      return Node *
**
** C'est la base pour commencer à construire
** une vraie liste chaînée dynamique.
*/