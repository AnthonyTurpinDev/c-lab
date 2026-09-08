/*
** EXERCICE : Écrire plusieurs lignes dans un fichier
**
** OBJECTIF :
**
** Créer un fichier "notes.txt" et écrire plusieurs lignes
** à l'intérieur en utilisant fprintf().
**
** CONTENU ATTENDU DU FICHIER :
**
** C
** Git
** Linux
** Bash
** Epitech
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer un pointeur de fichier :
**
**      FILE *file;
**
** 2. Ouvrir le fichier "notes.txt" en mode écriture "w".
**
** 3. Vérifier que fopen() a réussi.
**
** 4. Utiliser fprintf() pour écrire les 5 lignes :
**
**      C
**      Git
**      Linux
**      Bash
**      Epitech
**
**    Une information doit être écrite par ligne.
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
** - Ne pas utiliser fputs() ou fwrite().
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Quel type doit avoir la variable qui représente le fichier ?
**
** 2. Que retourne fopen() ?
**
** 3. Que signifie le mode "w" ?
**
** 4. Comment faire un retour à la ligne avec fprintf() ?
**
** 5. Pourquoi doit-on appeler fclose() ?
**
** 6. Que se passe-t-il si notes.txt existe déjà ?
**
** ---------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable de :
**
** fopen()
** fprintf()
** fclose()
**
** sans regarder la correction.
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** Ajoute une sixième ligne :
**
**      C programming
**
** Puis ajoute un message dans le terminal indiquant que
** le fichier a été créé avec succès.
*/