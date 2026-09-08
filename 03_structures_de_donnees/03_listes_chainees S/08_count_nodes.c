/*
** EXERCICE : Compter les maillons
**
** OBJECTIF :
**
** Créer une fonction capable de compter le nombre de
** maillons présents dans une liste chaînée.
**
** ---------------------------------------------------------
**
** FONCTION À CRÉER :
**
**      int count_nodes(struct Node *head);
**
** ---------------------------------------------------------
**
** EXEMPLE :
**
**      C → Git → Linux → Bash → NULL
**
** Résultat :
**
**      Nombre de chaînes : 4
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Recevoir le début de la liste :
**
**      struct Node *head
**
** 2. Créer une variable compteur :
**
**      int count = 0;
**
** 3. Créer un pointeur temporaire :
**
**      struct Node *current;
**
** 4. Commencer au premier maillon :
**
**      current = head;
**
** 5. Parcourir la liste tant que current n'est pas NULL :
**
**      while (current != NULL)
**
** 6. À chaque maillon rencontré, augmenter le compteur :
**
**      count++;
**
** 7. Passer au maillon suivant :
**
**      current = current->next;
**
** 8. Lorsque current devient NULL, retourner count.
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      head
**       ↓
**      [C] → [Git] → [Linux] → [Bash] → NULL
**       ↑
**     current
**       count = 0
**
**
** Premier passage :
**
**      current → C
**      count = 1
**
** Deuxième passage :
**
**      current → Git
**      count = 2
**
** Troisième passage :
**
**      current → Linux
**      count = 3
**
** Quatrième passage :
**
**      current → Bash
**      count = 4
**
** Puis :
**
**      current → NULL
**
** La boucle s'arrête.
**
**      return 4;
**
** ---------------------------------------------------------
**
** 🎯 POINT IMPORTANT :
**
** Cet exercice reprend exactement le mécanisme de
** print_list().
**
** Dans print_list() :
**
**      current->data
**
** permet d'afficher le maillon.
**
** Ici, tu n'as pas besoin de lire data.
**
** Tu dois simplement compter chaque Node rencontré.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi le compteur commence-t-il à 0 ?
**
** 2. Quand dois-tu faire count++ ?
**
** 3. Pourquoi la boucle utilise-t-elle :
**
**      current != NULL
**
** 4. Pourquoi faut-il faire :
**
**      current = current->next;
**
** 5. Que retourne la fonction si head == NULL ?
**
** 6. Est-ce que tu dois modifier head ?
**
** 7. Pourquoi utiliser current plutôt que head ?
**
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser struct Node *head.
** - Utiliser un pointeur current.
** - Utiliser une boucle while.
** - Utiliser current->next.
** - Retourner un int.
** - Ne pas utiliser de tableau.
** - Ne pas utiliser de variable globale.
**
** ---------------------------------------------------------
**
** 🧪 TEST MINIMUM :
**
** Crée la liste :
**
**      C → Git → Linux → Bash → NULL
**
** Puis :
**
**      int count = count_nodes(head);
**
**
** Affiche :
**
**      Nombre de chaînes : 4
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Teste avec une liste vide :
**
**      struct Node *head = NULL;
**
**
** Résultat attendu :
**
**      Nombre de chaînes : 0
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Teste avec un seul maillon :
**
**      C → NULL
**
**
** Résultat attendu :
**
**      Nombre de chaînes : 1
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Affiche automatiquement :
**
**      0 chaîne
**      1 chaîne
**      2 chaînes
**
** avec une gestion correcte du singulier/pluriel.
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Être capable de parcourir une liste sans modifier
** la structure de la liste.
**
** Le schéma fondamental est :
**
**      current = head;
**
**      while (current != NULL)
**      {
**          // travailler sur current
**
**          current = current->next;
**      }
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Pour compter une liste :
**
**      1 Node rencontré
**          ↓
**      count++
**
**      puis
**
**      current = current->next
**
**      jusqu'à NULL.
**
** ---------------------------------------------------------
**
** ⚠️ ATTENTION :
**
** Ne fais pas :
**
**      count = count + current->data;
**
** data contient une chaîne.
**
** Ici, on compte les maillons, pas leur contenu.
**
** ---------------------------------------------------------
**
** 💡 QUESTION DE RÉFLEXION :
**
** Si la liste est :
**
**      C → Git → Linux → Bash → NULL
**
** Combien de fois la boucle while s'exécute-t-elle ?
**
** Et que vaut count à chaque tour ?
*/