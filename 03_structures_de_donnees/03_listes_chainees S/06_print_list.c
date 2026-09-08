/*
** EXERCICE : Afficher une liste chaînée
**
** OBJECTIF :
**
** Créer une fonction capable de parcourir une liste chaînée
** et d'afficher toutes les chaînes contenues dans les maillons.
**
** ---------------------------------------------------------
**
** FONCTION À CRÉER :
**
**      void print_list(struct Node *head);
**
** ---------------------------------------------------------
**
** STRUCTURE :
**
**      struct Node {
**          char *data;
**          struct Node *next;
**      };
**
** ---------------------------------------------------------
**
** EXEMPLE DE LISTE :
**
**      head
**       ↓
**      Bonjour → C → Epitech → Linux → NULL
**
** AFFICHAGE ATTENDU :
**
**      Bonjour
**      C
**      Epitech
**      Linux
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Recevoir le premier maillon avec :
**
**      struct Node *head
**
** 2. Créer un pointeur temporaire :
**
**      struct Node *current;
**
** 3. Faire commencer current sur le premier maillon :
**
**      current = head;
**
** 4. Parcourir la liste avec :
**
**      while (current != NULL)
**
** 5. Afficher la chaîne du maillon actuel :
**
**      current->data
**
** 6. Passer au maillon suivant :
**
**      current = current->next;
**
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      current
**         ↓
**      [Bonjour]
**         ↓
**       [C]
**         ↓
**     [Epitech]
**         ↓
**      [Linux]
**         ↓
**        NULL
**
**
** À chaque tour :
**
**      afficher current->data
**      puis
**      current = current->next
**
** ---------------------------------------------------------
**
** 🎯 POINT IMPORTANT :
**
** Tu ne dois PAS modifier head.
**
** Utilise un pointeur current pour te déplacer.
**
**      head
**       ↓
**      [Bonjour] → [C] → [Epitech] → NULL
**
**      current
**       ↓
**      [Bonjour]
**
** Puis :
**
**      current = current->next;
**
**
**      head
**       ↓
**      [Bonjour] → [C] → [Epitech] → NULL
**
**                     current
**                       ↓
**                      [C]
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi utilise-t-on un pointeur current ?
**
** 2. Pourquoi ne faut-il pas déplacer directement head ?
**
** 3. Que signifie :
**
**      current != NULL
**
** 4. Que contient :
**
**      current->data
**
** 5. Que contient :
**
**      current->next
**
** 6. Que se passe-t-il lorsque current devient NULL ?
**
** 7. Pourquoi la boucle s'arrête-t-elle à ce moment-là ?
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser une liste chaînée.
** - Utiliser struct Node *head.
** - Utiliser un pointeur current.
** - Utiliser une boucle while.
** - Utiliser current->data.
** - Utiliser current->next.
** - Ne pas utiliser de tableau pour parcourir la liste.
**
** ---------------------------------------------------------
**
** 🧪 TEST MINIMUM :
**
** Construis cette liste :
**
**      Bonjour → C → Epitech → Linux → NULL
**
** Puis appelle :
**
**      print_list(head);
**
**
** Résultat :
**
**      Bonjour
**      C
**      Epitech
**      Linux
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Afficher les éléments sur une seule ligne :
**
**      Bonjour → C → Epitech → Linux
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Compter le nombre de maillons affichés :
**
**      Nombre de maillons : 4
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Tester le comportement avec :
**
**      head = NULL;
**
** La fonction ne doit pas provoquer de crash.
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Maîtriser le parcours fondamental d'une liste chaînée :
**
**      current = head;
**
**      while (current != NULL)
**      {
**          afficher current->data;
**          current = current->next;
**      }
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Pour parcourir une liste :
**
**      current → current->next → current->next → ...
**
** jusqu'à :
**
**      current == NULL
**
** ---------------------------------------------------------
**
** ⚠️ ATTENTION :
**
** Ne fais pas :
**
**      head = head->next;
**
** dans cette fonction.
**
** Tu risquerais de perdre ton point d'entrée vers la liste.
**
** Utilise plutôt :
**
**      current = current->next;
*/