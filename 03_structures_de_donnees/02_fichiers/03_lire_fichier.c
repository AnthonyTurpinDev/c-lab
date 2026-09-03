/*
** EXERCICE : Lire un fichier
**
** OBJECTIF :
**
** Lire le fichier "notes.txt" créé dans l'exercice précédent
** et afficher son contenu directement dans le terminal.
**
** Tu vas découvrir la fonction :
**
**      fgets()
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer un pointeur de fichier :
**
**      FILE *file;
**
** 2. Ouvrir "notes.txt" en mode lecture :
**
**      "r"
**
** 3. Vérifier que fopen() a réussi.
**
** 4. Créer un tableau de caractères pour stocker
**    temporairement chaque ligne lue.
**
**    Exemple de capacité :
**
**      char line[100];
**
** 5. Utiliser fgets() pour lire le fichier ligne par ligne.
**
** 6. Afficher chaque ligne dans le terminal.
**
** 7. Continuer la lecture jusqu'à atteindre la fin du fichier.
**
** 8. Fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** FICHIER À LIRE :
**
**      notes.txt
**
** CONTENU :
**
** C
** Git
** Linux
** Bash
** Epitech
**
** ---------------------------------------------------------
**
** RÉSULTAT ATTENDU DANS LE TERMINAL :
**
** C
** Git
** Linux
** Bash
** Epitech
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser fopen().
** - Utiliser le mode "r".
** - Utiliser fgets().
** - Utiliser fclose().
** - Vérifier si fopen() retourne NULL.
** - Ne pas utiliser fscanf().
** - Ne pas utiliser fgetc() pour cet exercice.
** - Lire le fichier ligne par ligne.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Que signifie le mode "r" ?
**
** 2. Que retourne fopen() ?
**
** 3. Pourquoi utilise-t-on un tableau char[] ?
**
** 4. Que récupère fgets() ?
**
** 5. Pourquoi fgets() est-elle pratique pour lire une ligne ?
**
** 6. Comment savoir quand on est arrivé à la fin du fichier ?
**
** 7. Pourquoi faut-il fermer le fichier avec fclose() ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      fopen("notes.txt", "r")
**                ↓
**             FILE *
**                ↓
**          ┌───────────┐
**          │  fgets()  │ ← lit une ligne
**          └─────┬─────┘
**                ↓
**             printf()
**                ↓
**          ligne suivante
**                ↓
**          fin du fichier
**                ↓
**             fclose()
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Affiche le numéro de chaque ligne :
**
**      Ligne 1 : C
**      Ligne 2 : Git
**      ...
**
** 2. Compte le nombre total de lignes du fichier.
**
** 3. Teste ce qui se passe si "notes.txt" n'existe pas.
*/