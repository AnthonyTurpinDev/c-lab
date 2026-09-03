/*
** EXERCICE : Allocation dynamique avec saisie utilisateur
**
** CONSIGNE :
**
** Demander à l'utilisateur combien de nombres il souhaite
** stocker.
**
** La taille du tableau doit être déterminée pendant
** l'exécution du programme.
**
**
** EXEMPLE :
**
**     Combien de nombres ? 5
**
**     Entrez les nombres :
**
**     10
**     20
**     30
**     40
**     50
**
**     Résultat :
**
**     10 20 30 40 50
**
**
** OBJECTIFS :
**
** Apprendre à :
**
**     - récupérer une taille auprès de l'utilisateur
**     - utiliser malloc() avec une taille variable
**     - créer un tableau dynamique
**     - remplir un tableau avec une boucle
**     - afficher un tableau avec une boucle
**     - libérer la mémoire avec free()
**
**
** ÉTAPES :
**
** 1. Demander à l'utilisateur combien de nombres
**    il souhaite stocker.
**
**
** 2. Stocker cette valeur dans une variable entière.
**
**
** 3. Allouer dynamiquement un tableau contenant
**    exactement le nombre d'entiers demandé.
**
**
** 4. Vérifier que malloc() a réussi.
**
**    Si malloc() retourne NULL, afficher un message
**    d'erreur et arrêter le programme.
**
**
** 5. Demander à l'utilisateur de saisir chaque nombre.
**
**    Utiliser une boucle pour remplir le tableau.
**
**
** 6. Afficher tous les nombres du tableau sur une seule
**    ligne, séparés par des espaces.
**
**
** 7. Libérer la mémoire avec free().
**
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Utiliser un pointeur int *.
** - La taille du tableau doit être choisie
**   par l'utilisateur.
** - Ne pas utiliser de tableau statique de taille fixe.
** - Utiliser une boucle pour la saisie.
** - Utiliser une boucle pour l'affichage.
** - Vérifier que malloc() ne retourne pas NULL.
** - Utiliser free() à la fin.
**
**
** ⚠️ IMPORTANT :
**
** Tu ne dois pas écrire :
**
**     int tab[5];
**
**
** car la taille doit être déterminée pendant l'exécution.
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi ne peut-on pas connaître la taille
**    du tableau avant de demander la valeur à l'utilisateur ?
**
** 2. Que doit contenir la variable représentant la taille ?
**
** 3. Comment utiliser cette variable avec malloc() ?
**
** 4. Si l'utilisateur choisit 10 nombres, combien
**    d'éléments faut-il allouer ?
**
** 5. Pourquoi doit-on vérifier le résultat de malloc() ?
**
** 6. Pourquoi peut-on utiliser :
**
**        tab[i]
**
**    alors que tab est un pointeur ?
**
** 7. Pourquoi faut-il appeler free() après avoir terminé
**    d'utiliser le tableau ?
**
**
** BONUS :
**
** Après l'affichage, calculer et afficher la somme
** de tous les nombres.
**
** Exemple :
**
**     Somme = 150
**
**
** BONUS 2 :
**
** Afficher également le nombre d'éléments stockés :
**
**     Nombre d'éléments = 5
**
**
** OBJECTIF FINAL :
**
** Comprendre ce fonctionnement :
**
**     utilisateur
**          ↓
**     taille du tableau
**          ↓
**        malloc()
**          ↓
**    int *tab
**          ↓
**     saisie des valeurs
**          ↓
**       affichage
**          ↓
**       free(tab)
**
**
** Cette notion est essentielle avant de passer à des
** exercices plus avancés sur l'allocation dynamique.
*/