/*
** EXERCICE : Ajouter un maillon au début
**
** OBJECTIF :
**
** Créer une fonction capable d'ajouter une nouvelle chaîne
** au début d'une liste chaînée.
**
** ---------------------------------------------------------
**
** FONCTION À CRÉER :
**
**      void add_front(struct Node **head, char *str);
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
** SITUATION DE DÉPART :
**
**      head
**       ↓
**      C → Git → Linux → NULL
**
** Tu dois ajouter :
**
**      Bash
**
** ---------------------------------------------------------
**
** RÉSULTAT ATTENDU :
**
**      head
**       ↓
**      Bash → C → Git → Linux → NULL
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Recevoir l'adresse du pointeur head.
**
** 2. Créer un nouveau Node avec ta fonction
**    create_node() de l'exercice précédent.
**
** 3. Faire pointer le nouveau Node vers l'ancien premier
**    maillon.
**
**      new_node->next = *head;
**
** 4. Faire pointer head vers le nouveau Node.
**
**      *head = new_node;
**
** ---------------------------------------------------------
**
** ⚠️ POINT CENTRAL DE L'EXERCICE :
**
** Comprendre :
**
**      struct Node *head
**
** versus :
**
**      struct Node **head
**
** ---------------------------------------------------------
**
** 🧠 RAPPEL :
**
** Dans main(), tu peux avoir :
**
**      struct Node *head;
**
**
** head contient l'adresse du premier maillon.
**
**
** Si add_front() doit modifier head lui-même,
** il faut transmettre son adresse :
**
**      &head
**
**
** Donc la fonction reçoit :
**
**      struct Node **head
**
**
** Schéma :
**
**      main()
**
**      head
**       │
**       ↓
**      [ C ]
**       ↓
**     [ Git ]
**
**      &
**      │
**      ↓
**
**      struct Node **head
**
** ---------------------------------------------------------
**
** 🎯 À COMPRENDRE ABSOLUMENT :
**
** head
**      → représente le pointeur vers le premier Node
**
** *head
**      → représente le premier Node lui-même
**         (ou NULL si la liste est vide)
**
** &head
**      → adresse de la variable head
**
** ---------------------------------------------------------
**
** Pour ajouter au début :
**
**      ancien head
**           ↓
**      C → Git → Linux
**
**      nouveau Node :
**
**      Bash
**
** Première étape :
**
**      Bash → C → Git → Linux
**             ↑
**           ancien head
**
** Deuxième étape :
**
**      head → Bash
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi create_node() retourne-t-elle un
**    struct Node * ?
**
** 2. Pourquoi add_front() reçoit-elle un
**    struct Node ** ?
**
** 3. Que contient head ?
**
** 4. Que représente *head ?
**
** 5. Que représente &head dans main() ?
**
** 6. Pourquoi ne peut-on pas simplement utiliser :
**
**      struct Node *head
**
**    si on veut modifier le premier maillon ?
**
** 7. Que doit devenir new_node->next ?
**
** 8. Que doit devenir head après l'insertion ?
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser malloc() indirectement via create_node().
** - Utiliser struct Node.
** - Utiliser struct Node **head.
** - Utiliser -> pour accéder aux champs d'un pointeur.
** - Ne pas recréer create_node() avec une deuxième logique.
** - La fonction doit fonctionner même si la liste est vide.
**
** ---------------------------------------------------------
**
** 🧪 TEST MINIMUM :
**
** Construis dans main() une liste :
**
**      C → Git → Linux → NULL
**
** Puis appelle :
**
**      add_front(&head, "Bash");
**
** Affiche ensuite la liste.
**
** Résultat :
**
**      Bash
**      C
**      Git
**      Linux
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Teste avec une liste vide :
**
**      head = NULL;
**
** Puis :
**
**      add_front(&head, "C");
**
**
** Résultat :
**
**      C → NULL
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Ajoute plusieurs éléments au début :
**
**      add_front(&head, "C");
**      add_front(&head, "Git");
**      add_front(&head, "Linux");
**      add_front(&head, "Bash");
**
** Observe attentivement l'ordre final.
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Maîtriser ce schéma :
**
**      head
**       ↓
**      Node
**
** et surtout :
**
**      &head
**       ↓
**      Node **
**
** Une fonction qui doit modifier directement un pointeur
** utilise généralement un pointeur vers ce pointeur.
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Si la fonction doit seulement lire/modifier le Node :
**
**      struct Node *head
**
**
** Si la fonction doit modifier la variable head elle-même :
**
**      struct Node **head
**
*/