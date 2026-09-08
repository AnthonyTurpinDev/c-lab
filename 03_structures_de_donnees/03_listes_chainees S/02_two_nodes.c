/*
** EXERCICE : Créer et relier deux maillons
**
** OBJECTIF :
**
** Créer deux maillons de type Node et les relier
** entre eux grâce au pointeur next.
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
** Construire cette chaîne :
**
**      Bonjour → Epitech → NULL
**
** Puis afficher :
**
**      Bonjour
**      Epitech
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer la structure Node.
**
** 2. Dans main(), créer deux variables Node :
**
**      node1
**      node2
**
** 3. Faire pointer node1.data vers :
**
**      "Bonjour"
**
** 4. Faire pointer node2.data vers :
**
**      "Epitech"
**
** 5. Relier node1 à node2 avec next.
**
**    node1.next doit contenir l'adresse de node2.
**
** 6. Le deuxième maillon est le dernier.
**
**    node2.next doit donc être :
**
**      NULL
**
** 7. Afficher le contenu des deux maillons.
**
** ---------------------------------------------------------
**
** RÉSULTAT ATTENDU :
**
**      Bonjour
**      Epitech
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser struct Node.
** - Utiliser char *data.
** - Utiliser struct Node *next.
** - Créer exactement deux maillons.
** - Relier les deux maillons avec next.
** - Le dernier maillon doit pointer vers NULL.
** - Ne pas utiliser malloc().
** - Ne pas utiliser de tableau de Node.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Que contient node1.data ?
**
** 2. Que contient node2.data ?
**
** 3. Que doit contenir node1.next ?
**
** 4. Pourquoi node2.next vaut-il NULL ?
**
** 5. Pourquoi utilise-t-on &node2 pour relier
**    node1 à node2 ?
**
** 6. Quelle différence entre :
**
**      node1.next
**
**    et :
**
**      node2.next
**
** 7. Si node1.next pointe vers node2,
**    comment accéder à "Epitech" à partir de node1 ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      node1                         node2
**   ┌───────────┐                 ┌───────────┐
**   │ data      │──→ "Bonjour"    │ data      │──→ "Epitech"
**   │ next      │────────────────→│ next      │──→ NULL
**   └───────────┘                 └───────────┘
**
**             Bonjour → Epitech → NULL
**
** ---------------------------------------------------------
**
** 🎯 NOTION CLÉ :
**
** Un pointeur next contient l'adresse du prochain maillon.
**
**      node1.next = &node2;
**
** signifie :
**
**      "node1 connaît l'adresse de node2"
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Affiche les deux valeurs en utilisant uniquement
**    node1 et son pointeur next.
**
** 2. Affiche les adresses de node1 et node2.
**
** 3. Essaie d'afficher "Epitech" avec :
**
**      node1.next->data
**
** 4. Ajoute un troisième maillon :
**
**      Bonjour → Epitech → C → NULL
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre qu'une liste chaînée est simplement une
** succession de maillons reliés par des pointeurs.
**
**      Node → Node → Node → NULL
**
** Chaque Node contient :
**
**      data
**      next
*/