/*
** EXERCICE : Tableau complet
**
** FICHIER : 15_tableau_complet.c
**
** OBJECTIF :
**
** Réutiliser toutes les notions vues sur les tableaux
** et les fonctions dans un seul exercice.
**
** Tu vas combiner :
**
**     tableau
**        +
**     fonctions
**        +
**     paramètres
**        +
**     boucles
**        +
**     conditions
**        +
**     compteur
**        +
**     return
**
**
** ============================================
** TABLEAU
** ============================================
**
** Utilise le tableau suivant :
**
**     int tab[] = {4, 7, 2, 9, 4, 1, 7, 4, 8, 2};
**
**
** ============================================
** FONCTIONS À CRÉER
** ============================================
**
** Crée les quatre fonctions suivantes :
**
**     void print_array(int tab[], int size);
**
**     int sum_array(int tab[], int size);
**
**     int count_value(int tab[], int size, int value);
**
**     int max_array(int tab[], int size);
**
**
** ============================================
** 1 — AFFICHER LE TABLEAU
** ============================================
**
** Utilise :
**
**     print_array()
**
** pour afficher tous les éléments du tableau.
**
** Résultat attendu :
**
**     Tableau :
**     4 7 2 9 4 1 7 4 8 2
**
**
** ============================================
** 2 — CALCULER LA SOMME
** ============================================
**
** Utilise :
**
**     sum_array()
**
** pour calculer et retourner la somme
** de tous les éléments.
**
** Résultat attendu :
**
**     Somme = 48
**
**
** ============================================
** 3 — RECHERCHER UNE VALEUR
** ============================================
**
** Demande à l'utilisateur de saisir une valeur.
**
** Exemple :
**
**     Valeur à rechercher : 4
**
**
** Utilise ensuite :
**
**     count_value()
**
** pour compter combien de fois cette valeur
** apparaît dans le tableau.
**
**
** Pour la valeur 4 :
**
**     4 apparaît 3 fois.
**
**
** ============================================
** 4 — TROUVER LE MAXIMUM
** ============================================
**
** Utilise :
**
**     max_array()
**
** pour trouver le plus grand élément du tableau.
**
** Résultat attendu :
**
**     Maximum = 9
**
**
** ============================================
** MAIN()
** ============================================
**
** Ton main() doit effectuer les opérations
** dans cet ordre :
**
**     1. Afficher le tableau
**
**     2. Calculer et afficher la somme
**
**     3. Demander une valeur à l'utilisateur
**
**     4. Compter ses occurrences
**
**     5. Afficher le nombre d'occurrences
**
**     6. Calculer et afficher le maximum
**
**
** ============================================
** EXEMPLE COMPLET
** ============================================
**
** Si l'utilisateur saisit :
**
**     4
**
** Le programme doit afficher quelque chose
** comme :
**
**     Tableau :
**     4 7 2 9 4 1 7 4 8 2
**
**     Somme = 48
**     Maximum = 9
**     4 apparaît 3 fois.
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise exactement les quatre fonctions demandées.
** - Ne mets pas toute la logique dans main().
** - Chaque fonction doit avoir son rôle précis.
** - Utilise des boucles while.
** - Utilise "size" pour parcourir le tableau.
** - Ne modifie pas le tableau.
** - Utilise scanf() pour récupérer la valeur recherchée.
**
**
** ⚠️ INTERDICTION :
**
** Ne recode pas les calculs directement dans main().
**
** Par exemple, ne calcule pas la somme dans main().
**
** main() doit utiliser :
**
**     sum_array()
**
** pour obtenir la somme.
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Tu dois maintenant réfléchir à la responsabilité
** de chaque fonction :
**
**     print_array()
**         → affiche
**
**     sum_array()
**         → calcule une somme
**
**     count_value()
**         → compte une valeur
**
**     max_array()
**         → cherche le maximum
**
**
** ============================================
** QUESTIONS À TE POSER
** ============================================
**
** 1. Pourquoi envoyer "tab" à chaque fonction ?
**
** 2. Pourquoi envoyer "size" ?
**
** 3. Quelles fonctions utilisent return ?
**
** 4. Pourquoi print_array() utilise void ?
**
** 5. Comment récupérer le résultat de sum_array() ?
**
** 6. Comment récupérer le résultat de max_array() ?
**
** 7. Comment transmettre la valeur saisie à count_value() ?
**
**
** ============================================
** 🔥 OBJECTIF PISCINE
** ============================================
**
** Cet exercice est une synthèse des exercices précédents.
**
** Essaie de le réaliser sans regarder tes anciens codes.
**
** Tu dois être capable de reconstruire seul :
**
**     void print_array(int tab[], int size)
**
**     int sum_array(int tab[], int size)
**
**     int count_value(int tab[], int size, int value)
**
**     int max_array(int tab[], int size)
**
**
** Si tu réussis cet exercice seul, tu maîtrises
** déjà une bonne partie des bases nécessaires
** pour manipuler les tableaux en C.
*/