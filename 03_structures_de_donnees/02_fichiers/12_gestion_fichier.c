/*
** EXERCICE : Gestion d'étudiants avec fichier
**
** OBJECTIF :
**
** Créer un programme complet permettant de gérer une liste
** d'étudiants en mémoire et de sauvegarder / charger
** cette liste depuis un fichier.
**
** ---------------------------------------------------------
**
** STRUCTURE À UTILISER :
**
**      struct Etudiant {
**          char nom[50];
**          int age;
**          float moyenne;
**      };
**
** ---------------------------------------------------------
**
** MENU :
**
**      1. Ajouter un étudiant
**      2. Afficher les étudiants
**      3. Rechercher un étudiant
**      4. Calculer la moyenne
**      5. Sauvegarder
**      6. Charger
**      7. Quitter
**
** ---------------------------------------------------------
**
** PARTIE 1 — TABLEAU DYNAMIQUE
**
** Au début du programme, aucun étudiant n'est enregistré.
**
** Créer un tableau dynamique d'étudiants avec malloc().
**
** Exemple :
**
**      struct Etudiant *etudiants;
**
** La taille du tableau doit pouvoir évoluer.
**
** Lorsque le tableau est plein, utiliser realloc()
** pour augmenter sa capacité.
**
** ---------------------------------------------------------
**
** PARTIE 2 — AJOUTER UN ÉTUDIANT
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
** Ajouter l'étudiant dans le tableau dynamique.
**
** Si le tableau est plein :
**
**      realloc()
**
** pour augmenter sa capacité.
**
** ---------------------------------------------------------
**
** PARTIE 3 — AFFICHER LES ÉTUDIANTS
**
** Lorsque l'utilisateur choisit :
**
**      2. Afficher les étudiants
**
** Parcourir le tableau avec une boucle.
**
** Exemple :
**
**      Étudiant 1
**      Nom : Anthony
**      Age : 20
**      Moyenne : 14.5
**
**      Étudiant 2
**      Nom : Lucas
**      Age : 19
**      Moyenne : 12.8
**
** ---------------------------------------------------------
**
** PARTIE 4 — RECHERCHER UN ÉTUDIANT
**
** Lorsque l'utilisateur choisit :
**
**      3. Rechercher un étudiant
**
** Demander son nom.
**
** Parcourir le tableau et comparer les noms.
**
** Si l'étudiant est trouvé :
**
**      Nom : Anthony
**      Age : 20
**      Moyenne : 14.5
**
** Sinon :
**
**      Étudiant introuvable.
**
** ---------------------------------------------------------
**
** PARTIE 5 — CALCULER LA MOYENNE
**
** Lorsque l'utilisateur choisit :
**
**      4. Calculer la moyenne
**
** Calculer la moyenne générale de tous les étudiants.
**
** Exemple :
**
**      Anthony → 14.5
**      Lucas   → 12.8
**      Thomas  → 15.2
**
**      Moyenne générale : 14.16
**
** Attention :
**
** - parcourir tous les étudiants ;
** - additionner les moyennes ;
** - diviser par le nombre d'étudiants ;
** - gérer le cas où aucun étudiant n'existe.
**
** ---------------------------------------------------------
**
** PARTIE 6 — SAUVEGARDER
**
** Lorsque l'utilisateur choisit :
**
**      5. Sauvegarder
**
** Créer / ouvrir :
**
**      etudiants.txt
**
** en mode écriture "w".
**
** Enregistrer chaque étudiant avec fprintf().
**
** Exemple :
**
**      Anthony 20 14.5
**      Lucas 19 12.8
**      Thomas 21 15.2
**
** Puis fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** PARTIE 7 — CHARGER
**
** Lorsque l'utilisateur choisit :
**
**      6. Charger
**
** Ouvrir "etudiants.txt" en mode lecture "r".
**
** Lire les étudiants avec fscanf() ou fgets().
**
** Ajouter chaque étudiant lu dans le tableau dynamique.
**
** Si le tableau n'a plus assez de place :
**
**      realloc()
**
** doit être utilisé.
**
** Attention :
**
** Le programme doit pouvoir charger un nombre d'étudiants
** supérieur à la capacité initiale du tableau.
**
** ---------------------------------------------------------
**
** PARTIE 8 — QUITTER
**
** Lorsque l'utilisateur choisit :
**
**      7. Quitter
**
** Le programme doit :
**
**      1. libérer la mémoire avec free()
**      2. quitter proprement
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser struct.
** - Utiliser des fonctions.
** - Utiliser des pointeurs.
** - Utiliser malloc().
** - Utiliser realloc().
** - Utiliser free().
** - Utiliser fopen().
** - Utiliser fclose().
** - Utiliser fprintf().
** - Utiliser fscanf() ou fgets().
** - Utiliser des boucles.
** - Utiliser des conditions.
** - Vérifier les retours de malloc(), realloc()
**   et fopen().
**
** ---------------------------------------------------------
**
** FONCTIONS CONSEILLÉES :
**
** Tu peux organiser ton programme avec des fonctions
** comme :
**
**      void add_student(...);
**
**      void print_students(...);
**
**      int find_student(...);
**
**      float calculate_average(...);
**
**      void save_students(...);
**
**      void load_students(...);
**
**
** Tu es libre de choisir les paramètres.
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA GLOBAL :
**
**                 PROGRAMME
**                     ↓
**                  MENU
**                     ↓
**       ┌─────────────┼─────────────┐
**       ↓             ↓             ↓
**    AJOUTER       AFFICHER      RECHERCHER
**       ↓             ↓             ↓
**    malloc/        boucle       strcmp
**    realloc
**
**                     ↓
**              CALCULER MOYENNE
**                     ↓
**                   boucle
**
**                     ↓
**               SAUVEGARDER
**                     ↓
**                 fopen("w")
**                     ↓
**                 fprintf()
**                     ↓
**                 fclose()
**
**                     ↓
**                  CHARGER
**                     ↓
**                 fopen("r")
**                     ↓
**                 fscanf()
**                     ↓
**                 realloc()
**                     ↓
**                 fclose()
**
**                     ↓
**                  QUITTER
**                     ↓
**                   free()
**
** ---------------------------------------------------------
**
** 🔥 FONCTIONS FICHIER À CONNAÎTRE POUR LA PISCINE :
**
**      fopen()
**      fclose()
**      fprintf()
**      fscanf()
**      fgets()
**      fgetc()
**
** ---------------------------------------------------------
**
** 🎯 RÉFLEXE ABSOLU :
**
** Toujours vérifier le retour de fopen().
**
**      FILE *file = fopen("test.txt", "r");
**
**      if (file == NULL) {
**          // erreur
**      }
**
** Ne jamais utiliser le fichier si fopen() a échoué.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi le tableau doit-il être dynamique ?
**
** 2. Quand utiliser malloc() ?
**
** 3. Quand utiliser realloc() ?
**
** 4. Pourquoi utiliser un pointeur vers Etudiant ?
**
** 5. Pourquoi utiliser fclose() ?
**
** 6. Quelle différence entre fopen("r") et fopen("w") ?
**
** 7. Pourquoi fprintf() pour sauvegarder ?
**
** 8. Pourquoi fscanf() pour charger ?
**
** 9. Comment détecter la fin du fichier ?
**
** 10. Pourquoi faut-il utiliser free() avant de quitter ?
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajouter une option :
**
**      8. Supprimer un étudiant
**
** Supprimer l'étudiant correspondant à un nom.
**
** Décaler les éléments suivants dans le tableau.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Ajouter :
**
**      9. Sauvegarder automatiquement
**
** Le programme sauvegarde automatiquement les étudiants
** avant de quitter.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Ajouter :
**
**      10. Afficher le meilleur étudiant
**
** Trouver l'étudiant ayant la meilleure moyenne.
**
** ---------------------------------------------------------
**
** 🔥 BONUS PISCINE :
**
** Sépare complètement ton programme en fonctions.
**
** Le main() doit principalement gérer :
**
**      - le menu ;
**      - le choix de l'utilisateur ;
**      - l'appel des fonctions.
**
** Évite de mettre toute la logique dans main().
**
** ---------------------------------------------------------
**
** 🎯 OBJECTIF FINAL :
**
** Être capable de passer de :
**
**      struct
**        ↓
**      pointeur
**        ↓
**      malloc
**        ↓
**      realloc
**        ↓
**      tableau dynamique
**        ↓
**      fichier
**        ↓
**      sauvegarde
**        ↓
**      lecture
**        ↓
**      reconstruction en mémoire
**
** sans correction.
*/