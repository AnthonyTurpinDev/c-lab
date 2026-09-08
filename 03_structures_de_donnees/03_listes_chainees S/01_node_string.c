/*
** EXERCICE : Créer un maillon contenant une chaîne
**
** OBJECTIF :
**
** Découvrir les bases d'une liste chaînée en créant
** manuellement un seul maillon.
**
** Tu vas travailler avec :
**
** - une structure
** - un pointeur
** - un pointeur vers char
** - un pointeur vers une autre structure
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
** OBJECTIF :
**
** Créer un seul maillon contenant :
**
**      Bonjour
**
** Puis afficher son contenu.
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer la structure Node donnée ci-dessus.
**
** 2. Dans main(), créer une variable de type Node.
**
** 3. Faire en sorte que data pointe vers la chaîne :
**
**      "Bonjour"
**
** 4. Pour l'instant, le maillon ne pointe vers aucun
**    autre maillon.
**
**    next doit donc contenir :
**
**      NULL
**
** 5. Afficher le contenu de data.
**
** Résultat attendu :
**
**      Bonjour
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser exactement la structure Node donnée.
** - Utiliser char *data.
** - Utiliser struct Node *next.
** - Utiliser NULL pour indiquer qu'il n'y a pas
**   de maillon suivant.
** - Créer un seul maillon.
** - Ne pas utiliser malloc() pour cet exercice.
** - Ne pas créer de deuxième maillon.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Que contient data ?
**
** 2. Pourquoi data est-il un char * et non un char ?
**
** 3. Vers quoi data doit-il pointer ?
**
** 4. Que contient next ?
**
** 5. Pourquoi next vaut-il NULL ?
**
** 6. Quelle différence entre :
**
**      node.data
**
**    et :
**
**      node.next
**
** 7. Que signifie le * dans :
**
**      char *data;
**
** 8. Que signifie le * dans :
**
**      struct Node *next;
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      node
**       │
**       ├── data ──────→ "Bonjour"
**       │
**       └── next ──────→ NULL
**
** ---------------------------------------------------------
**
** 🎯 À COMPRENDRE :
**
** data est un pointeur vers des caractères.
**
**      char *data
**
** signifie que data contient l'adresse du premier
** caractère de la chaîne.
**
** next est un pointeur vers un autre Node.
**
**      struct Node *next
**
** signifie que next pourra contenir l'adresse
** d'un autre maillon.
**
** Pour l'instant :
**
**      next = NULL
**
** car il n'existe aucun maillon suivant.
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Affiche également l'adresse contenue dans data.
**
** 2. Affiche l'adresse de next.
**
** 3. Crée un deuxième Node uniquement pour comprendre
**    comment next pourrait pointer vers lui.
**
**    Ne transforme pas encore le programme en liste.
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Avant de passer à malloc() et aux listes chaînées,
** tu dois être capable de visualiser :
**
**      Node
**       │
**       ├── data → chaîne
**       │
**       └── next → autre Node ou NULL
**
** C'est le modèle mental à retenir.
*/