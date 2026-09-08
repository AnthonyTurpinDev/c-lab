/*
** EXERCICE : Rechercher une chaîne
**
** OBJECTIF :
**
** Créer une fonction capable de rechercher une chaîne de
** caractères dans une liste chaînée.
**
** ---------------------------------------------------------
**
** FONCTION À CRÉER :
**
**      struct Node *find_string(struct Node *head, char *str);
**
** ---------------------------------------------------------
**
** EXEMPLE :
**
**      Liste :
**
**      C → Git → Linux → Bash → NULL
**
**      Recherche :
**
**      Linux
**
**      Résultat :
**
**      Chaîne trouvée !
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Recevoir le début de la liste :
**
**      struct Node *head
**
** 2. Recevoir la chaîne recherchée :
**
**      char *str
**
** 3. Créer un pointeur temporaire :
**
**      struct Node *current;
**
** 4. Commencer au début de la liste :
**
**      current = head;
**
** 5. Parcourir la liste avec une boucle :
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
**    Utilise strcmp().
**
** 7. Si les deux chaînes sont identiques, retourner :
**
**      current
**
** 8. Sinon, avancer :
**
**      current = current->next;
**
** 9. Si toute la liste a été parcourue sans trouver
**    la chaîne, retourner :
**
**      NULL
**
** ---------------------------------------------------------
**
** 🧠 RAPPEL SUR strcmp :
**
** strcmp() compare deux chaînes de caractères.
**
** Elle retourne :
**
**      0
**
** lorsque les deux chaînes sont identiques.
**
** Exemple mental :
**
**      strcmp("Linux", "Linux")
**                    ↓
**                    0
**
**      strcmp("Linux", "Git")
**                    ↓
**                 différent
**
** ---------------------------------------------------------
**
** ⚠️ TRÈS IMPORTANT :
**
** Ne fais PAS :
**
**      current->data == str
**
** Pour comparer deux chaînes.
**
** En C, == compare les adresses des chaînes,
** pas leur contenu.
**
** Pour comparer le contenu :
**
**      strcmp()
**
** ---------------------------------------------------------
**
** 🎯 POURQUOI LA FONCTION RETOURNE UN Node * ?
**
** Parce que tu ne veux pas seulement savoir si la chaîne
** existe.
**
** Tu veux récupérer le maillon qui contient cette chaîne.
**
** Exemple :
**
**      C → Git → Linux → Bash → NULL
**                 ↑
**              résultat
**
** find_string(head, "Linux")
**
** retourne l'adresse du Node contenant "Linux".
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
** Recherche : "Linux"
**
**      current
**         ↓
**      [C] → [Git] → [Linux] → [Bash] → NULL
**
**      strcmp("C", "Linux")
**              ↓
**           différent
**
**      current = current->next
**
**                     current
**                        ↓
**      [C] → [Git] → [Linux] → [Bash] → NULL
**
**      strcmp("Git", "Linux")
**                ↓
**             différent
**
**      current = current->next
**
**                              current
**                                 ↓
**      [C] → [Git] → [Linux] → [Bash] → NULL
**
**      strcmp("Linux", "Linux")
**                   ↓
**                   0
**
**                   ↓
**
**             return current
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi utiliser strcmp() ?
**
** 2. Que signifie strcmp() == 0 ?
**
** 3. Pourquoi == ne permet-il pas de comparer
**    correctement deux chaînes ?
**
** 4. Pourquoi retourner current lorsqu'on trouve
**    la chaîne ?
**
** 5. Pourquoi retourner NULL si elle n'existe pas ?
**
** 6. Que se passe-t-il si head == NULL ?
**
** 7. Pourquoi current doit-il avancer avec :
**
**      current = current->next;
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser struct Node *head.
** - Utiliser struct Node * comme valeur de retour.
** - Utiliser char *str.
** - Utiliser strcmp().
** - Parcourir la liste avec current.
** - Utiliser current->data.
** - Retourner current si la chaîne est trouvée.
** - Retourner NULL si elle n'est pas trouvée.
** - Ne pas utiliser == pour comparer les chaînes.
**
** ---------------------------------------------------------
**
** 🧪 TEST MINIMUM :
**
** Crée la liste :
**
**      C → Git → Linux → Bash → NULL
**
** Puis recherche :
**
**      Linux
**
** Si find_string() retourne autre chose que NULL :
**
**      Chaîne trouvée !
**
** Sinon :
**
**      Chaîne introuvable.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Recherche une chaîne qui n'existe pas :
**
**      Python
**
** Résultat :
**
**      Chaîne introuvable.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Si la chaîne est trouvée, affiche le contenu du Node
** retourné :
**
**      struct Node *result;
**
** Le résultat doit permettre d'accéder à :
**
**      result->data
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Teste plusieurs recherches :
**
**      C
**      Git
**      Linux
**      Bash
**      Python
**
** ---------------------------------------------------------
**
** 🔥 OBJECTIF PISCINE :
**
** Maîtriser le trio :
**
**      current
**          ↓
**      current->data
**          ↓
**      strcmp()
**
** pour rechercher une information dans une liste.
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Pour comparer des chaînes :
**
**      strcmp(a, b) == 0
**
** signifie :
**
**      a et b contiennent le même texte.
**
** ---------------------------------------------------------
**
** ⚠️ ATTENTION :
**
** La fonction retourne un POINTEUR vers le Node :
**
**      struct Node *
**
** Elle ne retourne pas :
**
**      int
**
** et ne retourne pas directement :
**
**      current->data
**
** Tu dois retourner le maillon trouvé.
*/