/*
** EXERCICE : Supprimer un maillon
**
** OBJECTIF :
**
** Créer une fonction capable de rechercher puis supprimer
** un maillon contenant une chaîne précise.
**
** La mémoire du maillon supprimé doit être libérée avec free().
**
** ---------------------------------------------------------
**
** FONCTION À CRÉER :
**
**      void delete_string(struct Node **head, char *str);
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
** Supprimer :
**
**      "Git"
**
** APRÈS :
**
**      head
**       ↓
**      C → Linux → Bash → NULL
**
** Le Node contenant "Git" doit être libéré avec free().
**
** ---------------------------------------------------------
**
** ⚠️ POINT CENTRAL DE L'EXERCICE :
**
** Tu dois gérer les liens entre les maillons.
**
** Avant :
**
**      [C] → [Git] → [Linux]
**
** Après :
**
**      [C] ─────────→ [Linux]
**
** Le Node [Git] est ensuite libéré.
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Vérifier si la liste est vide :
**
**      *head == NULL
**
**    Dans ce cas, il n'y a rien à supprimer.
**
** 2. Créer un pointeur pour parcourir la liste :
**
**      struct Node *current;
**
** 3. Créer également un pointeur permettant de garder
**    une trace du maillon précédent :
**
**      struct Node *previous;
**
** 4. Commencer au début :
**
**      current = *head;
**
**      previous = NULL;
**
** 5. Parcourir la liste avec :
**
**      while (current != NULL)
**
** 6. Comparer :
**
**      current->data
**
**    avec :
**
**      str
**
**    en utilisant strcmp().
**
** 7. Si la chaîne correspond, tu dois supprimer current.
**
** ---------------------------------------------------------
**
** 🎯 CAS 1 : LE PREMIER NODE EST SUPPRIMÉ
**
** Exemple :
**
**      C → Git → Linux
**      ↑
**     head
**
** Suppression de "C".
**
** Le nouveau début doit devenir :
**
**      head
**       ↓
**      Git → Linux
**
** Il faut donc modifier *head.
**
** ---------------------------------------------------------
**
** 🎯 CAS 2 : UN NODE AU MILIEU EST SUPPRIMÉ
**
** Exemple :
**
**      C → Git → Linux
**           ↑
**        current
**
** Après suppression :
**
**      C → Linux
**
** Le Node précédent doit donc contourner current.
**
** Schéma :
**
**      previous → current → next
**
** devient :
**
**      previous ─────────→ next
**
** ---------------------------------------------------------
**
** 🎯 CAS 3 : LE DERNIER NODE EST SUPPRIMÉ
**
** Exemple :
**
**      C → Git → Linux
**                   ↑
**                current
**
** Après :
**
**      C → Git → NULL
**
** Le précédent doit simplement pointer vers NULL.
**
** ---------------------------------------------------------
**
** 8. Une fois le bon Node trouvé, sauvegarder son
**    successeur si nécessaire avant de modifier les liens.
**
** 9. Modifier le lien précédent OU head.
**
** 10. Libérer le maillon supprimé avec :
**
**      free(current);
**
** 11. Terminer la fonction.
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
** AVANT :
**
**      previous
**         ↓
**        [C] → [Git] → [Linux]
**                ↑
**             current
**
** On veut supprimer current.
**
** Il faut obtenir :
**
**      previous
**         ↓
**        [C] ─────────→ [Linux]
**
** Puis :
**
**      free(current);
**
**
** ---------------------------------------------------------
**
** 🎯 POURQUOI struct Node **head ?
**
** Parce que la fonction peut devoir modifier head.
**
** Exemple :
**
**      C → Git → Linux
**      ↑
**     head
**
** Si on supprime C :
**
**      Git → Linux
**      ↑
**     head
**
** La variable head elle-même doit changer.
**
** C'est pourquoi on transmet :
**
**      &head
**
** et la fonction reçoit :
**
**      struct Node **head
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi faut-il un pointeur previous ?
**
** 2. Pourquoi current seul ne suffit-il pas toujours ?
**
** 3. Que représente previous ?
**
** 4. Que représente current ?
**
** 5. Que se passe-t-il si current == *head ?
**
** 6. Pourquoi faut-il traiter séparément la suppression
**    du premier maillon ?
**
** 7. Pourquoi utiliser strcmp() ?
**
** 8. Pourquoi faut-il appeler free(current) ?
**
** 9. Que se passe-t-il si on oublie free() ?
**
** 10. Que se passe-t-il si on libère current avant
**     d'avoir réparé les liens ?
**
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser struct Node **head.
** - Utiliser struct Node *current.
** - Utiliser un pointeur previous.
** - Utiliser strcmp().
** - Parcourir la liste avec une boucle.
** - Gérer la suppression du premier Node.
** - Gérer la suppression d'un Node au milieu.
** - Gérer la suppression du dernier Node.
** - Utiliser free().
** - Si la chaîne n'existe pas, ne rien modifier.
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
**      delete_string(&head, "Git");
**
** Affiche la liste.
**
** Résultat :
**
**      C
**      Linux
**      Bash
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Teste la suppression du premier :
**
**      delete_string(&head, "C");
**
** Résultat :
**
**      Git → Linux → Bash
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Teste la suppression du dernier :
**
**      delete_string(&head, "Bash");
**
** Résultat :
**
**      C → Git → Linux
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Recherche une chaîne inexistante :
**
**      delete_string(&head, "Python");
**
**
** La liste doit rester exactement identique.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 4 :
**
** Supprime tous les éléments un par un jusqu'à obtenir :
**
**      head = NULL
**
** Vérifie que le programme ne provoque aucun crash.
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre ce schéma fondamental :
**
**      previous → current → next
**
** Pour supprimer current :
**
**      previous → next
**
** puis :
**
**      free(current);
**
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Supprimer un Node signifie deux choses :
**
**      1. Réparer les liens
**      2. Libérer la mémoire
**
**      liens réparés
**          ↓
**      free(current)
**
** ---------------------------------------------------------
**
** ⚠️ ATTENTION :
**
** Ne fais jamais simplement :
**
**      free(current);
**
**
** sans réparer les liens de la liste.
**
** Sinon un autre Node pourrait continuer à pointer
** vers une zone mémoire qui vient d'être libérée.
**
** ---------------------------------------------------------
**
** 💡 DÉFI :
**
** Essaie de gérer les trois situations sans copier
** toute la liste :
**
**      [PREMIER]
**
**      [MILIEU]
**
**      [DERNIER]
**
** Si tu maîtrises ces trois cas, tu commences réellement
** à maîtriser les listes chaînées.
*/