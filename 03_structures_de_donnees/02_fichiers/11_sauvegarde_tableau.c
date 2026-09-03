/*
** EXERCICE : Sauvegarde d'un tableau dynamique
**
** OBJECTIF :
**
** Créer dynamiquement un tableau d'entiers, sauvegarder
** son contenu dans un fichier, puis relire ce fichier
** afin de reconstruire le tableau en mémoire.
**
** Cet exercice combine :
**
**      malloc
**      fopen
**      fprintf
**      fscanf
**      realloc
**      free
**
** ---------------------------------------------------------
**
** EXEMPLE DE TABLEAU :
**
**      10 20 30 40 50
**
** Le fichier doit contenir les mêmes valeurs.
**
** ---------------------------------------------------------
**
** PARTIE 1 — CRÉER LE TABLEAU
**
** 1. Demander à l'utilisateur combien d'entiers
**    il souhaite stocker.
**
** 2. Allouer dynamiquement le tableau avec malloc().
**
** 3. Vérifier que malloc() a réussi.
**
** 4. Remplir le tableau avec des entiers.
**
** Exemple :
**
**      10 20 30 40 50
**
** 5. Afficher le tableau pour vérifier son contenu.
**
** ---------------------------------------------------------
**
** PARTIE 2 — SAUVEGARDER LE TABLEAU
**
** 1. Créer le fichier :
**
**      tableau.txt
**
** 2. Ouvrir le fichier en mode écriture "w".
**
** 3. Vérifier que fopen() a réussi.
**
** 4. Utiliser fprintf() pour enregistrer les entiers.
**
** 5. Fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** PARTIE 3 — LIBÉRER LA MÉMOIRE
**
** Après la sauvegarde :
**
**      free()
**
** doit être utilisé pour libérer le premier tableau.
**
** ---------------------------------------------------------
**
** PARTIE 4 — RECONSTRUIRE LE TABLEAU
**
** Maintenant, imagine que le programme doit récupérer
** les données uniquement à partir du fichier.
**
** 1. Ouvrir "tableau.txt" en mode lecture "r".
**
** 2. Créer un nouveau pointeur :
**
**      int *new_array;
**
** 3. Commencer avec une petite capacité.
**
** 4. Lire les nombres avec fscanf().
**
** 5. Lorsque le tableau est plein, augmenter sa taille
**    avec realloc().
**
** Exemple :
**
**      capacité 2
**          ↓
**      tableau plein
**          ↓
**      realloc()
**          ↓
**      capacité 4
**          ↓
**      tableau plein
**          ↓
**      realloc()
**          ↓
**      capacité 8
**
** 6. Ajouter chaque nombre lu dans le nouveau tableau.
**
** 7. Continuer jusqu'à la fin du fichier.
**
** 8. Fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** PARTIE 5 — AFFICHER LE TABLEAU RECONSTRUIT
**
** Afficher le contenu du nouveau tableau.
**
** Exemple :
**
**      Tableau reconstruit :
**      10 20 30 40 50
**
** ---------------------------------------------------------
**
** PARTIE 6 — LIBÉRER LA MÉMOIRE
**
** À la fin du programme, libérer le tableau reconstruit
** avec free().
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Utiliser realloc().
** - Utiliser free().
** - Utiliser fopen().
** - Utiliser fprintf().
** - Utiliser fscanf().
** - Utiliser fclose().
** - Vérifier le retour de malloc().
** - Vérifier le retour de realloc().
** - Vérifier le retour de fopen().
** - Ne pas utiliser de tableau statique pour stocker
**   les nombres.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi utiliser malloc() pour le premier tableau ?
**
** 2. Pourquoi ne peut-on pas simplement utiliser :
**
**      int array[100];
**
** 3. Pourquoi utilise-t-on realloc() pendant la lecture ?
**
** 4. Que se passe-t-il lorsque le tableau atteint
**    sa capacité maximale ?
**
** 5. Pourquoi faut-il vérifier le retour de realloc() ?
**
** 6. Pourquoi faut-il appeler free() ?
**
** 7. Pourquoi utilise-t-on deux tableaux différents
**    dans cet exercice ?
**
** 8. Comment le programme sait-il combien de nombres
**    ont été reconstruits ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**        CRÉATION
**           ↓
**        malloc()
**           ↓
**      tableau dynamique
**           ↓
**       10 20 30 40 50
**           ↓
**        fopen("w")
**           ↓
**        fprintf()
**           ↓
**      tableau.txt
**           ↓
**        fclose()
**           ↓
**         free()
**
** ---------------------------------------------------------
**
**        RECONSTRUCTION
**
**      tableau.txt
**           ↓
**        fopen("r")
**           ↓
**        fscanf()
**           ↓
**      nouveau tableau
**           ↓
**       capacité pleine ?
**           ↓
**          OUI
**           ↓
**        realloc()
**           ↓
**      capacité augmentée
**           ↓
**        fscanf()
**           ↓
**           ...
**           ↓
**        fclose()
**           ↓
**         free()
**
** ---------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Comprendre qu'un fichier peut servir de sauvegarde
** persistante pour des données qui étaient stockées
** dynamiquement en mémoire.
**
**      MÉMOIRE
**         ↕
**       FICHIER
**
**      malloc()
**         ↓
**      tableau
**         ↓
**      fprintf()
**         ↓
**      fichier
**
**      fichier
**         ↓
**      fscanf()
**         ↓
**      realloc()
**         ↓
**      nouveau tableau
**
** ---------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Sauvegarde également le nombre d'éléments.
**
** Exemple de fichier :
**
**      5
**      10
**      20
**      30
**      40
**      50
**
** Puis utilise cette information lors de la reconstruction.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Crée deux fonctions :
**
**      void save_array(int *array, int size);
**
**      int *load_array(int *size);
**
** L'objectif est de séparer la sauvegarde et la lecture.
**
** ---------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Après avoir reconstruit le tableau, calcule :
**
**      - la somme
**      - la moyenne
**      - le minimum
**      - le maximum
**
** ---------------------------------------------------------
**
** ⭐ BONUS 4 — NIVEAU PISCINE :
**
** Fais en sorte que le programme fonctionne avec
** un nombre quelconque d'entiers sans connaître
** leur quantité à l'avance lors de la lecture du fichier.
*/