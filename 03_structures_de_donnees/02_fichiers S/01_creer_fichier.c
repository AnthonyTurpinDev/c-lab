/*
** EXERCICE : Créer un fichier
**
** OBJECTIF :
**
** Découvrir la manipulation de fichiers en C et apprendre à :
**
** - utiliser fopen()
** - ouvrir un fichier en écriture
** - écrire dans un fichier avec fprintf() ou fputs()
** - fermer un fichier avec fclose()
**
**
** CONSIGNE :
**
** 1. Créer un programme qui ouvre ou crée le fichier :
**
**      test.txt
**
** 2. Utiliser `fopen()` pour ouvrir le fichier.
**
**    Le fichier doit être ouvert en mode écriture.
**
** 3. Vérifier que l'ouverture du fichier a réussi.
**
**    Si `fopen()` échoue, afficher un message d'erreur
**    et arrêter le programme proprement.
**
** 4. Écrire exactement :
**
**      Bonjour Epitech !
**
**    dans le fichier.
**
** 5. Fermer le fichier avec :
**
**      fclose()
**
**
** RESULTAT ATTENDU :
**
** Après l'exécution du programme, un fichier :
**
**      test.txt
**
** doit être créé dans le dossier du programme.
**
** Son contenu doit être :
**
**      Bonjour Epitech !
**
**
** CONTRAINTES :
**
** - Utiliser `FILE *`.
** - Utiliser `fopen()`.
** - Utiliser le mode `"w"`.
** - Vérifier le retour de `fopen()`.
** - Écrire dans le fichier.
** - Utiliser `fclose()`.
** - Ne pas utiliser de fonctions système pour créer le fichier.
**
**
** QUESTIONS À TE POSER :
**
** 1. Quel type de variable permet de représenter
**    un fichier en C ?
**
** 2. Que retourne `fopen()` ?
**
** 3. Que signifie le mode `"w"` ?
**
** 4. Pourquoi faut-il vérifier si `fopen()` retourne NULL ?
**
** 5. Comment écrire du texte dans un fichier ?
**
** 6. Pourquoi faut-il fermer le fichier avec `fclose()` ?
**
** 7. Que se passe-t-il si `test.txt` existe déjà
**    lorsque tu utilises le mode `"w"` ?
**
**
** MENTAL MODEL :
**
**      fopen()
**         ↓
**      fichier ouvert
**         ↓
**      écrire
**         ↓
**      fclose()
**         ↓
**      fichier fermé
**
**
** RAPPEL :
**
** Pour travailler avec un fichier, tu vas généralement
** utiliser un pointeur de type :
**
**      FILE *
**
** Exemple conceptuel :
**
**      FILE *fichier;
**
** puis :
**
**      fopen()
**
** puis :
**
**      écrire
**
** puis :
**
**      fclose()
**
**
** BONUS :
**
** Écrire plusieurs lignes dans `test.txt`.
**
** Exemple :
**
**      Bonjour Epitech !
**      Je travaille le C.
**      Les fichiers sont intéressants.
**
**
** BONUS 2 :
**
** Afficher un message dans le terminal après la réussite :
**
**      Fichier créé avec succès !
**
**
** OBJECTIF FINAL :
**
** Maîtriser le cycle de base :
**
**      FILE *
**        ↓
**      fopen()
**        ↓
**      écriture
**        ↓
**      fclose()
*/