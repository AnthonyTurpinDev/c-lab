/*
** EXERCICE : Vérifier l'ouverture d'un fichier
**
** OBJECTIF :
**
** Demander à l'utilisateur le nom d'un fichier,
** essayer de l'ouvrir et vérifier si fopen() a réussi.
**
** ---------------------------------------------------------
**
** EXEMPLE :
**
**      Nom du fichier : test.txt
**
** Si le fichier existe et peut être ouvert :
**
**      Fichier ouvert avec succès.
**
** Sinon :
**
**      Impossible d'ouvrir le fichier.
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer un tableau de caractères pour stocker
**    le nom du fichier :
**
**      char filename[100];
**
** 2. Demander à l'utilisateur le nom du fichier.
**
** 3. Récupérer le nom avec scanf().
**
** 4. Déclarer un pointeur de fichier :
**
**      FILE *file;
**
** 5. Essayer d'ouvrir le fichier en mode lecture "r".
**
** 6. Vérifier la valeur retournée par fopen().
**
**    Si fopen() retourne NULL :
**
**      Impossible d'ouvrir le fichier.
**
**    Sinon :
**
**      Fichier ouvert avec succès.
**
** 7. Si le fichier a été ouvert correctement,
**    le fermer avec fclose().
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser fopen().
** - Utiliser le mode "r".
** - Vérifier obligatoirement le retour de fopen().
** - Utiliser NULL pour vérifier l'échec.
** - Utiliser fclose() uniquement si le fichier
**   a réellement été ouvert.
** - Ne pas écrire dans le fichier.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Que retourne fopen() lorsqu'elle réussit ?
**
** 2. Que retourne fopen() lorsqu'elle échoue ?
**
** 3. Que représente NULL ici ?
**
** 4. Pourquoi faut-il vérifier fopen() avant d'utiliser
**    le pointeur FILE * ?
**
** 5. Que pourrait-il se passer si on utilise file
**    alors que fopen() a échoué ?
**
** 6. Pourquoi doit-on fermer le fichier après l'avoir ouvert ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      Nom du fichier
**           ↓
**        fopen()
**           ↓
**     ┌─────┴─────┐
**     ↓           ↓
**  succès       NULL
**     ↓           ↓
**  message      message
**     ↓
**  fclose()
**
** ---------------------------------------------------------
**
** 🎯 RÈGLE À RETENIR :
**
** Toujours vérifier le retour de fopen().
**
**      FILE *file = fopen(...);
**
**      if (file == NULL)
**          → ouverture échouée
**
**      sinon
**          → fichier utilisable
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Affiche également le nom du fichier :
**
**      test.txt : Fichier ouvert avec succès.
**
** 2. Teste ton programme avec un fichier qui existe.
**
** 3. Teste ton programme avec un fichier qui n'existe pas.
**
** 4. Teste avec un chemin de fichier incorrect.
*/