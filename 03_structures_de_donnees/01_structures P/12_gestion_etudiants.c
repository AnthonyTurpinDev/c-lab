/*
** EXERCICE : Gestion dynamique d'étudiants
**
** OBJECTIF :
**
** Créer un mini programme complet permettant de gérer
** plusieurs étudiants dans un tableau dynamique.
**
** Cet exercice combine :
**
** - struct
** - tableau dynamique
** - malloc
** - realloc
** - free
** - fonctions
** - pointeurs
** - boucles
** - conditions
** - chaînes de caractères
**
**
** STRUCTURE :
**
** Créer :
**
**      struct Etudiant {
**          char nom[50];
**          int age;
**          float moyenne;
**      };
**
**
** MENU :
**
**      1. Ajouter un étudiant
**      2. Afficher les étudiants
**      3. Rechercher un étudiant
**      4. Afficher la meilleure moyenne
**      5. Supprimer un étudiant
**      6. Quitter
**
**
** ============================================================
** PARTIE 1 — INITIALISATION
** ============================================================
**
** Dans `main`, créer un pointeur vers `struct Etudiant`.
**
** Le tableau doit être dynamique.
**
** Au départ, il n'y a aucun étudiant.
**
** Réfléchis à la manière de représenter :
**
**      - le tableau
**      - le nombre actuel d'étudiants
**      - la capacité du tableau
**
** Tu devras utiliser `malloc` pour créer la première
** zone mémoire.
**
** Vérifier que l'allocation a réussi.
**
**
** ============================================================
** PARTIE 2 — AJOUTER UN ÉTUDIANT
** ============================================================
**
** Lorsque l'utilisateur choisit :
**
**      1. Ajouter un étudiant
**
** Demander :
**
**      Nom :
**      Age :
**      Moyenne :
**
** Ajouter ensuite l'étudiant dans le tableau dynamique.
**
** Si le tableau n'a plus suffisamment de place :
**
**      utiliser `realloc`
**
** pour agrandir la mémoire.
**
** Réfléchis à la différence entre :
**
**      taille actuelle
**
** et :
**
**      capacité mémoire
**
** Exemple :
**
**      capacité = 2
**      étudiants = 2
**
** Le tableau est plein.
**
** Il faut alors l'agrandir avant d'ajouter
** un troisième étudiant.
**
**
** ============================================================
** PARTIE 3 — AFFICHER LES ÉTUDIANTS
** ============================================================
**
** Lorsque l'utilisateur choisit :
**
**      2. Afficher les étudiants
**
** Parcourir le tableau avec une boucle.
**
** Afficher pour chaque étudiant :
**
**      Etudiant 1
**      Nom : Alex
**      Age : 18
**      Moyenne : 14.50
**
**      Etudiant 2
**      Nom : Lucas
**      Age : 19
**      Moyenne : 15.20
**
**      ...
**
** Si aucun étudiant n'existe :
**
**      Aucun étudiant enregistré.
**
**
** ============================================================
** PARTIE 4 — RECHERCHER UN ÉTUDIANT
** ============================================================
**
** Lorsque l'utilisateur choisit :
**
**      3. Rechercher un étudiant
**
** Demander un nom.
**
** Exemple :
**
**      Nom à rechercher : Lucas
**
** Parcourir le tableau et comparer les noms.
**
** Si l'étudiant est trouvé :
**
**      Etudiant trouvé !
**      Age : 19
**      Moyenne : 15.20
**
** Sinon :
**
**      Etudiant introuvable.
**
** Utiliser `strcmp` pour comparer les chaînes.
**
**
** ============================================================
** PARTIE 5 — MEILLEURE MOYENNE
** ============================================================
**
** Lorsque l'utilisateur choisit :
**
**      4. Afficher la meilleure moyenne
**
** Parcourir tous les étudiants.
**
** Trouver celui qui possède la meilleure moyenne.
**
** Afficher :
**
**      Meilleur étudiant :
**      Nom : Emma
**      Age : 20
**      Moyenne : 17.50
**
** Réfléchis à ce que ta fonction doit retourner.
**
** Une possibilité est de retourner l'indice du meilleur
** étudiant.
**
** Exemple :
**
**      [0] Alex
**      [1] Lucas
**      [2] Emma  ← meilleure moyenne
**      [3] Thomas
**
** La fonction pourrait retourner :
**
**      2
**
**
** ============================================================
** PARTIE 6 — SUPPRIMER UN ÉTUDIANT
** ============================================================
**
** Lorsque l'utilisateur choisit :
**
**      5. Supprimer un étudiant
**
** Demander le nom de l'étudiant à supprimer.
**
** Exemple :
**
**      Nom à supprimer : Lucas
**
** Si Lucas existe :
**
**      Etudiant supprimé.
**
** Si Lucas n'existe pas :
**
**      Etudiant introuvable.
**
**
** Pour supprimer l'étudiant :
**
**      1. rechercher son indice
**
**      2. décaler les étudiants suivants vers la gauche
**
**      3. diminuer le nombre d'étudiants
**
**      4. éventuellement réduire la mémoire avec `realloc`
**
** Exemple :
**
**      AVANT :
**
**      [0] Alex
**      [1] Lucas
**      [2] Emma
**      [3] Thomas
**
**      Suppression de [1]
**
**      APRÈS :
**
**      [0] Alex
**      [1] Emma
**      [2] Thomas
**
** L'ordre des étudiants doit être conservé.
**
**
** ============================================================
** PARTIE 7 — QUITTER
** ============================================================
**
** Lorsque l'utilisateur choisit :
**
**      6. Quitter
**
** Le programme doit libérer toute la mémoire utilisée
** avec `free`.
**
** Aucun bloc mémoire ne doit rester alloué inutilement.
**
**
** ============================================================
** ORGANISATION CONSEILLÉE
** ============================================================
**
** Tu peux créer plusieurs fonctions.
**
** Par exemple :
**
**      void print_student(struct Etudiant *student);
**
**      void print_students(struct Etudiant *students,
**                          int size);
**
**      int find_student(struct Etudiant *students,
**                       int size,
**                       char *name);
**
**      int find_best_student(struct Etudiant *students,
**                            int size);
**
**      struct Etudiant *add_student(
**          struct Etudiant *students,
**          int *size,
**          int *capacity
**      );
**
**      struct Etudiant *remove_student(
**          struct Etudiant *students,
**          int *size
**      );
**
** Tu peux adapter les fonctions si tu trouves
** une meilleure organisation.
**
**
** ============================================================
** CONTRAINTES
** ============================================================
**
** - Utiliser `struct Etudiant`.
**
** - Le tableau d'étudiants doit être dynamique.
**
** - Utiliser `malloc`.
**
** - Utiliser `realloc`.
**
** - Utiliser `free`.
**
** - Utiliser plusieurs fonctions.
**
** - Utiliser des pointeurs.
**
** - Utiliser `->` lorsqu'une fonction reçoit un pointeur
**   vers un étudiant.
**
** - Utiliser des boucles.
**
** - Utiliser des conditions.
**
** - Utiliser `strcmp` pour comparer les noms.
**
** - Vérifier les erreurs de `malloc`.
**
** - Vérifier les erreurs de `realloc`.
**
** - Ne pas utiliser un tableau statique pour stocker
**   tous les étudiants.
**
**
** ============================================================
** QUESTIONS À TE POSER
** ============================================================
**
** 1. Où est stocké le tableau des étudiants ?
**
** 2. Quelle variable représente le nombre actuel
**    d'étudiants ?
**
** 3. Quelle variable représente la capacité du tableau ?
**
** 4. Quand dois-tu utiliser `realloc` ?
**
** 5. Pourquoi dois-tu transmettre `size` par adresse
**    à certaines fonctions ?
**
** 6. Pourquoi dois-tu transmettre `capacity` par adresse ?
**
** 7. Pourquoi utiliser `->` dans :
**
**      student->nom
**
** 8. Comment trouver l'indice d'un étudiant ?
**
** 9. Comment décaler les étudiants après une suppression ?
**
** 10. Pourquoi faut-il utiliser `free` à la fin ?
**
** 11. Que se passe-t-il si `realloc` échoue ?
**
** 12. Pourquoi ne faut-il pas perdre l'ancien pointeur
**     directement lors d'un `realloc` ?
**
**
** ============================================================
** MENTAL MODEL GLOBAL
** ============================================================
**
**
**                  PROGRAMME
**                      │
**                      ↓
**                    MENU
**                      │
**          ┌───────────┼───────────┐
**          ↓           ↓           ↓
**       AJOUTER     AFFICHER    RECHERCHER
**          │           │           │
**          ↓           ↓           ↓
**       malloc/     boucle      strcmp
**       realloc
**
**          │
**          ↓
**       TABLEAU DYNAMIQUE
**
**      [0] Etudiant
**      [1] Etudiant
**      [2] Etudiant
**      [3] Etudiant
**           ...
**
**          │
**          ├──────→ meilleure moyenne
**          │
**          └──────→ suppression
**                       │
**                       ↓
**                    décalage
**                       │
**                       ↓
**                    realloc
**
**          │
**          ↓
**        QUITTER
**          │
**          ↓
**         free
**
**
** ============================================================
** BONUS 1 — FONCTION D'AFFICHAGE
** ============================================================
**
** Créer une fonction `print_student()` et l'utiliser
** partout où tu dois afficher un étudiant.
**
**
** BONUS 2 — CAPACITÉ
** ============================================================
**
** Afficher la capacité actuelle du tableau.
**
** Exemple :
**
**      Etudiants : 3
**      Capacite : 4
**
**
** BONUS 3 — AGRANDISSEMENT
** ============================================================
**
** Commencer avec une capacité de 2.
**
** Lorsque le tableau est plein, doubler sa capacité :
**
**      2 → 4 → 8 → 16 → ...
**
** Cela permet de limiter le nombre de `realloc`.
**
**
** BONUS 4 — STATISTIQUES
** ============================================================
**
** Ajouter une option :
**
**      7. Afficher les statistiques
**
** Et afficher :
**
**      Nombre d'étudiants : 5
**      Moyenne générale : 14.8
**      Meilleure moyenne : 17.5
**      Plus jeune : Alex
**      Plus âgé : Sarah
**
**
** ============================================================
** OBJECTIF FINAL
** ============================================================
**
** Tu dois être capable de construire le programme
** progressivement sans essayer de tout coder d'un coup.
**
** ORDRE CONSEILLÉ :
**
**      1. struct Etudiant
**             ↓
**      2. malloc
**             ↓
**      3. afficher
**             ↓
**      4. ajouter
**             ↓
**      5. realloc
**             ↓
**      6. rechercher
**             ↓
**      7. meilleure moyenne
**             ↓
**      8. supprimer
**             ↓
**      9. menu
**             ↓
**      10. erreurs malloc/realloc
**             ↓
**      11. free
**
** NE CHERCHE PAS À TOUT FAIRE EN UNE FOIS.
**
** Construis le programme étape par étape et teste
** chaque fonctionnalité avant de passer à la suivante.
**
** C'est un exercice de synthèse : si tu réussis cet exercice
** proprement, tu maîtrises déjà une grosse partie des bases
** des structures et de l'allocation dynamique en C.
*/