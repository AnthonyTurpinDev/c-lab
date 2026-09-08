/*
** EXERCICE : Lire des nombres depuis un fichier
**
** OBJECTIF :
**
** Lire les nombres contenus dans le fichier "nombres.txt"
** créé dans l'exercice précédent et les afficher dans
** le terminal.
**
** Tu vas découvrir la fonction :
**
**      fscanf()
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
** 50
**
** ---------------------------------------------------------
**
** RÉSULTAT ATTENDU DANS LE TERMINAL :
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
** 2. Déclarer une variable entière pour stocker
**    temporairement chaque nombre :
**
**      int number;
**
** 3. Ouvrir "nombres.txt" en mode lecture "r".
**
** 4. Vérifier que fopen() a réussi.
**
** 5. Utiliser une boucle pour lire les nombres
**    avec fscanf().
**
** 6. À chaque lecture réussie, afficher le nombre
**    dans le terminal.
**
** 7. Continuer jusqu'à ce qu'il n'y ait plus de nombres
**    à lire.
**
** 8. Fermer le fichier avec fclose().
**
** ---------------------------------------------------------
**
** CONTRAINTES :
**
** - Utiliser fopen().
** - Utiliser le mode "r".
** - Utiliser fscanf().
** - Utiliser une boucle.
** - Utiliser un int pour stocker le nombre lu.
** - Utiliser fclose().
** - Vérifier si fopen() retourne NULL.
** - Ne pas utiliser fgets() pour cet exercice.
**
** ---------------------------------------------------------
**
** QUESTIONS À TE POSER :
**
** 1. Que signifie le mode "r" ?
**
** 2. Quelle variable va recevoir le nombre lu ?
**
** 3. Quel format utiliser pour lire un int avec fscanf() ?
**
** 4. Pourquoi fscanf() a-t-elle besoin de l'adresse
**    de la variable ?
**
** 5. Pourquoi fscanf() doit-elle être utilisée dans
**    la condition de la boucle ?
**
** 6. Comment savoir si la lecture a réussi ?
**
** 7. Que se passe-t-il lorsque fscanf() n'arrive plus
**    à lire de nombre ?
**
** ---------------------------------------------------------
**
** 🧠 SCHÉMA MENTAL :
**
**      fopen("nombres.txt", "r")
**                ↓
**             FILE *
**                ↓
**          ┌─────────────┐
**          │   fscanf()   │
**          └──────┬──────┘
**                 ↓
**            int number
**                 ↓
**              printf()
**                 ↓
**          nombre suivant
**                 ↓
**        fin du fichier
**                 ↓
**             fclose()
**
** ---------------------------------------------------------
**
** ⭐ BONUS :
**
** 1. Compte le nombre de nombres lus.
**
** 2. Calcule leur somme.
**
** 3. Calcule leur moyenne.
**
** 4. Affiche uniquement les nombres supérieurs à 25.
**
** 5. Utilise une boucle pour afficher :
**
**      Nombre 1 : 10
**      Nombre 2 : 20
**      ...
*/