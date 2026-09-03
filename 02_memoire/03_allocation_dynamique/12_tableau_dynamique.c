/*
** EXERCICE : Tableau dynamique complet
**
** CONSIGNE :
**
** Construire un petit programme permettant de gérer
** dynamiquement une liste de nombres entiers.
**
** Le programme doit proposer le menu suivant :
**
**     1. Ajouter un nombre
**     2. Afficher les nombres
**     3. Afficher la somme
**     4. Afficher le maximum
**     5. Supprimer un nombre
**     6. Quitter
**
**
** Le tableau doit être créé dynamiquement avec malloc()
** et agrandi avec realloc() lorsque cela est nécessaire.
**
**
** OBJECTIF :
**
** Réaliser une synthèse de tout ce que tu as appris
** sur l'allocation dynamique.
**
** Tu dois être capable de gérer un tableau dont la taille
** évolue pendant l'exécution du programme.
**
**
** FONCTIONS À CRÉER :
**
** Tu dois organiser ton programme avec plusieurs fonctions.
**
** Tu peux notamment créer des fonctions comme :
**
**     void print_array(int *tab, int size);
**
**     int sum_array(int *tab, int size);
**
**     int max_array(int *tab, int size);
**
**     int *add_number(int *tab, int *size, int *capacity);
**
**     int *remove_number(int *tab, int *size);
**
**
** Tu peux adapter les fonctions si tu trouves
** une organisation plus propre.
**
**
** FONCTIONNEMENT DU PROGRAMME :
**
**
** 1. AU DÉMARRAGE
**
** Créer dynamiquement le tableau avec malloc().
**
** Commencer avec une petite capacité.
**
** Exemple :
**
**     capacity = 2
**     size = 0
**
**
** Le tableau est donc vide au départ :
**
**     []
**
**
**
** 2. MENU
**
** Afficher continuellement :
**
**     1. Ajouter un nombre
**     2. Afficher les nombres
**     3. Afficher la somme
**     4. Afficher le maximum
**     5. Supprimer un nombre
**     6. Quitter
**
**
** Demander à l'utilisateur de choisir une option.
**
** Le menu doit continuer à s'afficher tant que
** l'utilisateur ne choisit pas 6.
**
**
**
** 3. AJOUTER UN NOMBRE
**
** Si l'utilisateur choisit 1 :
**
**     - demander un nombre
**     - vérifier si le tableau est plein
**     - si nécessaire, agrandir le tableau avec realloc()
**     - ajouter le nombre
**     - augmenter size
**
**
** Exemple :
**
**     capacity = 2
**     size = 2
**
**     Tableau :
**
**     10 20
**
**
** Le tableau est plein.
**
** Lorsqu'on ajoute 30 :
**
**     realloc()
**
** puis augmenter la capacité.
**
** Par exemple :
**
**     capacity = 4
**
** Le tableau devient :
**
**     10 20 30
**
**
**
** 4. AFFICHER LES NOMBRES
**
** Si l'utilisateur choisit 2 :
**
**     afficher tous les éléments du tableau.
**
**
** Exemple :
**
**     Nombres :
**     10 20 30 40
**
**
** Utiliser une boucle.
**
**
**
** 5. AFFICHER LA SOMME
**
** Si l'utilisateur choisit 3 :
**
**     calculer la somme de tous les éléments
**     et afficher le résultat.
**
**
** Exemple :
**
**     Nombres :
**     10 20 30 40
**
**     Somme : 100
**
**
** Utiliser une fonction dédiée.
**
**
**
** 6. AFFICHER LE MAXIMUM
**
** Si l'utilisateur choisit 4 :
**
**     rechercher la plus grande valeur
**     et l'afficher.
**
**
** Exemple :
**
**     Nombres :
**     10 50 20 30
**
**     Maximum : 50
**
**
** Utiliser une fonction dédiée.
**
**
**
** 7. SUPPRIMER UN NOMBRE
**
** Si l'utilisateur choisit 5 :
**
**     - afficher les nombres
**     - demander l'index à supprimer
**     - vérifier que l'index est valide
**     - décaler les éléments vers la gauche
**     - diminuer size
**     - éventuellement réduire la mémoire avec realloc()
**
**
**
** Exemple :
**
**     Nombres :
**     10 20 30 40 50
**
**     Index à supprimer : 2
**
**
** Suppression de 30 :
**
**     Avant :
**     10 20 30 40 50
**
**     Après :
**     10 20 40 50
**
**
**
** 8. QUITTER
**
** Si l'utilisateur choisit 6 :
**
**     - quitter la boucle principale
**     - libérer la mémoire avec free()
**     - terminer proprement le programme
**
**
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Utiliser realloc().
** - Utiliser free().
** - Utiliser plusieurs fonctions.
** - Utiliser des pointeurs.
** - Utiliser des boucles.
** - Utiliser des conditions.
** - Le tableau doit être dynamique.
** - La taille doit évoluer pendant l'exécution.
** - Vérifier les erreurs de malloc().
** - Vérifier les erreurs de realloc().
** - Ne pas utiliser de tableau statique pour stocker
**   les nombres.
**
**
** ⚠️ IMPORTANT :
**
** Tu dois bien distinguer :
**
**     size
**
**     = nombre de nombres réellement présents
**
**
**     capacity
**
**     = nombre de nombres que le tableau peut contenir
**       avant de devoir être agrandi.
**
**
** Exemple :
**
**     size = 3
**     capacity = 4
**
**
** Cela signifie :
**
**     3 éléments sont utilisés
**     1 emplacement reste disponible
**
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi avons-nous besoin de size ?
**
** 2. Pourquoi avons-nous besoin de capacity ?
**
** 3. Quand faut-il appeler realloc() ?
**
** 4. Pourquoi ne faut-il pas appeler realloc()
**    après chaque ajout ?
**
** 5. Pourquoi les fonctions reçoivent-elles
**    des pointeurs vers les données ?
**
** 6. Pourquoi une fonction comme sum_array()
**    peut-elle simplement retourner un int ?
**
** 7. Pourquoi faut-il utiliser free() une seule fois
**    pour la mémoire finale du tableau ?
**
** 8. Que doit faire le programme si malloc() échoue ?
**
** 9. Que doit faire le programme si realloc() échoue ?
**
** 10. Que se passe-t-il lorsque size == 0 ?
**
**
**
** BONUS 1 :
**
** Ajouter une option :
**
**     7. Afficher la capacité actuelle
**
**
** Exemple :
**
**     Nombre d'éléments : 5
**     Capacité : 8
**
**
**
** BONUS 2 :
**
** Ajouter une option :
**
**     8. Vider le tableau
**
** Le tableau doit redevenir vide sans arrêter
** le programme.
**
**
**
** BONUS 3 :
**
** Permettre à l'utilisateur de continuer à utiliser
** le programme après avoir supprimé tous les éléments.
**
**
**
** BONUS 4 :
**
** Ajouter une fonction :
**
**     void print_menu(void);
**
** pour afficher le menu.
**
**
**
** OBJECTIF FINAL :
**
** Être capable de construire mentalement
** cette architecture :
**
**
**              main()
**                ↓
**              menu
**                ↓
**       ┌────────┼─────────┐
**       ↓        ↓         ↓
**     ajout   affichage   calcul
**       ↓        ↓         ↓
**    realloc   boucle   somme/max
**       ↓
**    tableau
**       ↓
**   suppression
**       ↓
**    décalage
**       ↓
**    realloc
**       ↓
**      free()
**
**
** Cet exercice est une SYNTHÈSE de l'allocation dynamique.
**
** Il combine :
**
**     malloc
**     realloc
**     free
**     pointeurs
**     tableaux
**     fonctions
**     boucles
**     conditions
**     saisie utilisateur
**     gestion de la mémoire
**
**
** ⚠️ CONSEIL :
**
** Ne cherche pas à écrire tout le programme d'un coup.
**
** Construis-le progressivement :
**
**     1. malloc + affichage
**     2. ajout
**     3. realloc
**     4. somme
**     5. maximum
**     6. suppression
**     7. menu
**     8. gestion des erreurs
**     9. free()
**
**
** Si tu réussis cet exercice sans regarder la correction,
** tu as une très bonne base sur les tableaux dynamiques
** et l'allocation mémoire en C.
*/