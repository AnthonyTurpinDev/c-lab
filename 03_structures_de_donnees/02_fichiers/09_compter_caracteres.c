/*
** EXERCICE : Compter les caractères d'un fichier
**
** OBJECTIF :
**
** Lire un fichier caractère par caractère et compter
** le nombre total de caractères qu'il contient.
**
** ---------------------------------------------------------
**
** FICHIER À LIRE :
**
**      texte.txt
**
** EXEMPLE DE CONTENU :
**
** Bonjour
** Je suis étudiant
**
** ---------------------------------------------------------
**
** RÉSULTAT ATTENDU :
**
**      Nombre de caractères : XX
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer un pointeur de fichier :
**
**      FILE *file;
**
** 2. Déclarer une variable pour stocker le caractère lu :
**
**      int character;
**
** 3. Déclarer un compteur :
**
**      int count = 0;
**
** 4. Ouvrir "texte.txt" en mode lecture "r".
**
** 5. Vérifier que fopen() a réussi.
**
** 6. Utiliser fgetc() pour lire le fichier
**    caractère par caractère.
**
** 7. Utiliser une boucle qui continue tant que
**    la fin du fichier n'est pas atteinte.
**
** 8. Pour chaque caractère lu, augmenter le compteur :
**
**      count++
**
** 9. Une fois la lecture terminée, afficher :
**
**      Nombre de caractères : XX
**
** 10. Fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser fopen().
** - Utiliser le mode "r".
** - Utiliser fgetc().
** - Utiliser une boucle.
** - Utiliser un compteur initialisé à 0.
** - Utiliser fclose().
** - Vérifier si fopen() retourne NULL.
** - Lire le fichier caractère par caractère.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Que retourne fgetc() ?
**
** 2. Pourquoi la variable character est-elle un int
**    et non un char ?
**
** 3. Comment détecter la fin du fichier ?
**
** 4. À quel moment dois-tu faire count++ ?
**
** 5. Les espaces sont-ils des caractères ?
**
** 6. Les retours à la ligne sont-ils des caractères ?
**
** 7. Pourquoi fermer le fichier avec fclose() ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**       texte.txt
**           ↓
**        fopen()
**           ↓
**         fgetc()
**           ↓
**      caractère lu
**           ↓
**        count++
**           ↓
**        fgetc()
**           ↓
**      caractère suivant
**           ↓
**           ...
**           ↓
**       EOF atteint
**           ↓
**   printf() → compteur
**           ↓
**        fclose()
**
** ---------------------------------------------------------
**
** 🎯 NOTION IMPORTANTE :
**
** fgetc() lit UN SEUL caractère à la fois.
**
** Exemple :
**
**      B → o → n → j → o → u → r → ...
**
** Chaque caractère lu doit être comptabilisé.
**
** ---------------------------------------------------------
**
** ⚠️ ATTENTION :
**
** EOF signifie "End Of File".
**
** Ne confonds pas EOF avec '\0'.
**
** EOF indique que la lecture du fichier est terminée.
** '\0' indique la fin d'une chaîne de caractères.
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Compte séparément :
**
**      - les lettres
**      - les espaces
**      - les retours à la ligne
**
** 2. Affiche le nombre de caractères sans compter
**    les retours à la ligne.
**
** 3. Demande à l'utilisateur le nom du fichier
**    à analyser.
*/