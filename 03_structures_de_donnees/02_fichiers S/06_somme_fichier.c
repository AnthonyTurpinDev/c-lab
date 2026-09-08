/*
** EXERCICE : Calculer la somme des nombres d'un fichier
**
** OBJECTIF :
**
** Lire tous les nombres présents dans un fichier
** et calculer leur somme.
**
** ---------------------------------------------------------
**
** FICHIER À LIRE :
**
**      nombres.txt
**
** CONTENU :
**
** 10
** 20
** 30
** 40
**
** ---------------------------------------------------------
**
** RÉSULTAT ATTENDU :
**
**      Somme = 100
**
** ---------------------------------------------------------
**
** ÉTAPES :
**
** 1. Déclarer un pointeur de fichier :
**
**      FILE *file;
**
** 2. Déclarer une variable pour stocker chaque nombre lu :
**
**      int number;
**
** 3. Déclarer une variable pour stocker la somme :
**
**      int sum = 0;
**
** 4. Ouvrir "nombres.txt" en mode lecture "r".
**
** 5. Vérifier que fopen() a réussi.
**
** 6. Utiliser une boucle avec fscanf() pour lire
**    tous les nombres du fichier.
**
** 7. À chaque nombre lu, l'ajouter à la somme.
**
** 8. Une fois la lecture terminée, afficher la somme :
**
**      Somme = 100
**
** 9. Fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser fopen().
** - Utiliser le mode "r".
** - Utiliser fscanf().
** - Utiliser une boucle.
** - Utiliser une variable "sum" initialisée à 0.
** - Utiliser fclose().
** - Vérifier si fopen() retourne NULL.
** - Ne pas écrire les nombres directement dans le programme.
** - Les nombres doivent être lus depuis le fichier.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi initialiser sum à 0 ?
**
** 2. Que dois-tu faire à chaque nombre lu ?
**
** 3. Pourquoi utiliser une boucle ?
**
** 4. Pourquoi utiliser &number avec fscanf() ?
**
** 5. Quand la boucle doit-elle s'arrêter ?
**
** 6. Pourquoi afficher la somme après la boucle ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      nombres.txt
**           ↓
**         fopen()
**           ↓
**        fscanf()
**           ↓
**       number = 10
**           ↓
**       sum = sum + number
**           ↓
**        fscanf()
**           ↓
**       number = 20
**           ↓
**       sum = sum + number
**           ↓
**          ...
**           ↓
**       Somme = 100
**           ↓
**        fclose()
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Affiche le nombre de valeurs lues :
**
**      Nombres lus : 4
**
** 2. Calcule également la moyenne.
**
** 3. Trouve le plus grand nombre du fichier.
**
** 4. Trouve le plus petit nombre du fichier.
**
** 5. Teste ton programme avec 10, 20, 30, 40, 50.
**
**    Résultat attendu :
**
**      Somme = 150
*/