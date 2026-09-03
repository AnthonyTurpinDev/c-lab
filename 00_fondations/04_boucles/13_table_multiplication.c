/*
** EXERCICE : Table de multiplication
**
** FICHIER : 13_table_multiplication.c
**
** CONSIGNE :
**
** Demande à l'utilisateur un nombre N.
**
** Affiche sa table de multiplication de 1 à 10.
**
** EXEMPLE :
**
** Si l'utilisateur entre :
**
**     5
**
** Le programme doit afficher :
**
**     5 x 1 = 5
**     5 x 2 = 10
**     5 x 3 = 15
**     5 x 4 = 20
**     5 x 5 = 25
**     5 x 6 = 30
**     5 x 7 = 35
**     5 x 8 = 40
**     5 x 9 = 45
**     5 x 10 = 50
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - Utilise une variable compteur.
** - Utilise scanf pour récupérer N.
** - Utilise une multiplication.
**
** 💡 RÉFLEXION :
**
** Tu dois comprendre la relation entre :
**
**     N
**     i
**     N * i
**
** Exemple avec N = 5 :
**
**     i = 1 → 5 * 1
**     i = 2 → 5 * 2
**     i = 3 → 5 * 3
**     ...
**     i = 10 → 5 * 10
**
** Pose-toi ces questions avant de coder :
**
** 1. Quelle doit être la valeur initiale de i ?
** 2. Quelle condition doit arrêter la boucle ?
** 3. Comment faire évoluer i à chaque tour ?
** 4. Quelle expression permet de calculer le résultat ?
**
** BONUS :
**
** Essaie ensuite de modifier ton programme pour afficher
** la table de multiplication de 1 à 10 pour chaque nombre
** de 1 à 10.
**
** Exemple :
**
**     1 x 1 = 1
**     1 x 2 = 2
**     ...
**     2 x 1 = 2
**     2 x 2 = 4
**     ...
*/