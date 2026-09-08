/*
** EXERCICE : Écrire des nombres dans un fichier
**
** OBJECTIF :
**
** Créer un fichier "nombres.txt" et écrire plusieurs nombres
** à l'intérieur, un nombre par ligne.
**
** ---------------------------------------------------------
**
** CONTENU ATTENDU DU FICHIER :
**
** 10
** 20
** 30
** 40
** 50
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer un pointeur de fichier :
**
**      FILE *file;
**
** 2. Ouvrir "nombres.txt" en mode écriture "w".
**
** 3. Vérifier que fopen() a réussi.
**
** 4. Utiliser fprintf() pour écrire :
**
**      10
**      20
**      30
**      40
**      50
**
**    Chaque nombre doit être écrit sur une ligne différente.
**
** 5. Fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser fopen().
** - Utiliser fprintf().
** - Utiliser fclose().
** - Utiliser le mode "w".
** - Vérifier si fopen() retourne NULL.
** - Un nombre par ligne.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Comment écrire un entier avec fprintf() ?
**
** 2. Quel format utiliser pour un int ?
**
** 3. Comment passer à la ligne suivante ?
**
** 4. Pourquoi utiliser "w" ?
**
** 5. Pourquoi fermer le fichier après l'écriture ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      fopen("nombres.txt", "w")
**                ↓
**             FILE *
**                ↓
**            fprintf()
**                ↓
**       10 → 20 → 30 → 40 → 50
**                ↓
**             fclose()
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Écris les nombres de 1 à 100, un par ligne.
**
** 2. Utilise une boucle for pour éviter d'écrire
**    chaque nombre manuellement.
**
** 3. Modifie le programme pour écrire uniquement
**    les nombres pairs de 2 à 100.
*/