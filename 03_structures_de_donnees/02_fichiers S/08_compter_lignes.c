/*
** EXERCICE : Compter les lignes d'un fichier
**
** OBJECTIF :
**
** Lire un fichier texte et compter le nombre de lignes
** qu'il contient.
**
** ---------------------------------------------------------
**
** FICHIER À LIRE :
**
**      texte.txt
**
** CONTENU :
**
** Bonjour
** Je suis étudiant
** J'apprends le C
**
** ---------------------------------------------------------
**
** RÉSULTAT ATTENDU :
**
**      Nombre de lignes : 3
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer un pointeur de fichier :
**
**      FILE *file;
**
** 2. Déclarer une variable pour compter les lignes :
**
**      int lines = 0;
**
** 3. Déclarer un tableau de caractères pour récupérer
**    chaque ligne :
**
**      char line[100];
**
** 4. Ouvrir "texte.txt" en mode lecture "r".
**
** 5. Vérifier que fopen() a réussi.
**
** 6. Utiliser une boucle avec fgets() pour lire
**    le fichier ligne par ligne.
**
** 7. À chaque ligne correctement lue, augmenter
**    le compteur :
**
**      lines++
**
** 8. Une fois arrivé à la fin du fichier, afficher :
**
**      Nombre de lignes : 3
**
** 9. Fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser fopen().
** - Utiliser le mode "r".
** - Utiliser fgets().
** - Utiliser une boucle.
** - Utiliser un compteur initialisé à 0.
** - Utiliser fclose().
** - Vérifier si fopen() retourne NULL.
** - Ne pas compter les lignes manuellement.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi initialiser lines à 0 ?
**
** 2. Quand dois-tu augmenter lines ?
**
** 3. Pourquoi fgets() permet-elle de compter les lignes ?
**
** 4. Quand la boucle s'arrête-t-elle ?
**
** 5. Pourquoi ne faut-il pas faire lines++ après la boucle ?
**
** 6. Que se passe-t-il si le fichier est vide ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      texte.txt
**          ↓
**       fopen()
**          ↓
**        fgets()
**          ↓
**      ligne lue
**          ↓
**       lines++
**          ↓
**        fgets()
**          ↓
**      ligne lue
**          ↓
**       lines++
**          ↓
**          ...
**          ↓
**    fin du fichier
**          ↓
**   Nombre de lignes : 3
**          ↓
**       fclose()
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Chaque fois que fgets() réussit à lire une ligne,
** le compteur doit augmenter de 1.
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Affiche chaque ligne avec son numéro :
**
**      Ligne 1 : Bonjour
**      Ligne 2 : Je suis étudiant
**      Ligne 3 : J'apprends le C
**
** 2. Demande à l'utilisateur le nom du fichier
**    à analyser.
**
** 3. Affiche un message particulier si le fichier
**    est vide :
**
**      Le fichier est vide.
*/