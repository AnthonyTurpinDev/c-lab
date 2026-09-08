/*
** EXERCICE : Parcourir trois maillons avec une boucle
**
** OBJECTIF :
**
** Créer trois maillons et les relier pour former :
**
**      C → Git → Linux → NULL
**
** Puis parcourir toute la liste avec une boucle while.
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
** ÉTAPES :
**
** 1. Créer trois maillons :
**
**      node1
**      node2
**      node3
**
** 2. Donner à chaque maillon sa valeur :
**
**      node1 → "C"
**      node2 → "Git"
**      node3 → "Linux"
**
** 3. Relier les maillons :
**
**      node1.next → node2
**      node2.next → node3
**      node3.next → NULL
**
** 4. Créer un pointeur permettant de parcourir
**    la liste :
**
**      struct Node *current;
**
** 5. Faire commencer current sur le premier maillon.
**
** 6. Utiliser une boucle :
**
**      while (current != NULL)
**
** 7. À chaque tour :
**
**    - afficher current->data ;
**    - avancer current vers le maillon suivant.
**
** 8. La boucle doit s'arrêter lorsque current vaut NULL.
**
** ---------------------------------------------------------
**
** RÉSULTAT ATTENDU :
**
**      C
**      Git
**      Linux
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser struct Node.
** - Créer exactement trois maillons.
** - Utiliser struct Node *current.
** - Utiliser une boucle while.
** - Utiliser :
**
**      while (current != NULL)
**
** - Utiliser current->data pour afficher.
** - Utiliser current->next pour avancer.
** - Le dernier maillon doit pointer vers NULL.
** - Ne pas utiliser malloc().
** - Ne pas utiliser un tableau pour parcourir les maillons.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Que contient current au début ?
**
** 2. Pourquoi current doit-il être un pointeur ?
**
** 3. Que contient current->data ?
**
** 4. Que contient current->next ?
**
** 5. Que dois-tu faire à la fin de chaque tour
**    de boucle ?
**
** 6. Pourquoi la boucle s'arrête-t-elle lorsque
**    current == NULL ?
**
** 7. Que se passerait-il si tu oubliais :
**
**      current = current->next;
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      current
**         ↓
**   ┌───────────┐
**   │ C         │
**   │ next ─────┼────→ Git
**   └───────────┘
**
**         ↓
**   ┌───────────┐
**   │ Git       │
**   │ next ─────┼────→ Linux
**   └───────────┘
**
**         ↓
**   ┌───────────┐
**   │ Linux     │
**   │ next ─────┼────→ NULL
**   └───────────┘
**
** ---------------------------------------------------------
**
** 🔥 COMPRENDRE LA BOUCLE :
**
** Au départ :
**
**      current → C
**
** Premier tour :
**
**      afficher C
**      current = current->next
**
** Maintenant :
**
**      current → Git
**
** Deuxième tour :
**
**      afficher Git
**      current = current->next
**
** Maintenant :
**
**      current → Linux
**
** Troisième tour :
**
**      afficher Linux
**      current = current->next
**
** Maintenant :
**
**      current → NULL
**
** La condition :
**
**      current != NULL
**
** devient fausse.
**
** La boucle s'arrête.
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Pour parcourir une liste chaînée :
**
**      current = premier_maillon;
**
**      while (current != NULL) {
**
**          // utiliser current
**
**          current = current->next;
**      }
**
** Le mouvement est toujours :
**
**      current
**         ↓
**      current->next
**         ↓
**      current->next
**         ↓
**      ...
**         ↓
**      NULL
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Compte le nombre de maillons parcourus.
**
** Résultat :
**
**      Nombre de maillons : 3
**
** 2. Affiche les données sur une seule ligne :
**
**      C → Git → Linux
**
** 3. Ajoute un quatrième maillon :
**
**      Bash
**
** pour obtenir :
**
**      C → Git → Linux → Bash → NULL
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Tu dois être capable d'expliquer cette ligne :
**
**      current = current->next;
**
** Elle signifie :
**
**      "current avance vers le prochain maillon."
**
** Et :
**
**      while (current != NULL)
**
** signifie :
**
**      "continue tant qu'il existe un maillon
**       à parcourir."
*/