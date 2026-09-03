/*
** EXERCICE : Maximum d'un tableau avec une fonction
**
** FICHIER : 11_max_fonction.c
**
** OBJECTIF :
**
** Apprendre à envoyer un tableau à une fonction
** et à retourner le plus grand élément du tableau.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Crée une fonction :
**
**     int max_array(int tab[], int size)
**
**
** Cette fonction doit parcourir le tableau et
** retourner la plus grande valeur qu'il contient.
**
**
** ============================================
** EXEMPLE
** ============================================
**
** Tableau :
**
**     int tab[] = {4, 12, 7, 25, 3};
**
**
** Appel :
**
**     max_array(tab, 5)
**
**
** Résultat :
**
**     25
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - La fonction doit s'appeler max_array().
** - Elle doit retourner un int.
** - Elle doit recevoir deux paramètres :
**
**       int tab[]
**       int size
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise une variable maximum.
** - Compare les éléments du tableau avec le maximum.
** - La fonction doit retourner le maximum avec return.
** - Utilise "size" pour parcourir le tableau.
**
**
** ⚠️ INTERDICTION :
**
** Ne cherche pas directement la valeur 25.
**
** La fonction doit fonctionner même si les valeurs
** du tableau changent.
**
**
** ============================================
** DANS main()
** ============================================
**
** Crée le tableau :
**
**     int tab[] = {4, 12, 7, 25, 3};
**
**
** Appelle ensuite :
**
**     max_array(tab, 5)
**
**
** Affiche le résultat :
**
**     Maximum = 25
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Même logique que l'exercice 05_max_tableau.c,
** mais cette fois toute la recherche du maximum
** doit être réalisée dans une fonction.
**
**
** Observe :
**
**     main()
**        ↓
**     max_array(tab, 5)
**        ↓
**     la fonction reçoit le tableau
**        ↓
**     la boucle parcourt le tableau
**        ↓
**     le maximum est recherché
**        ↓
**     return renvoie le maximum
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle valeur utiliser comme maximum de départ ?
**
** 2. Comment accéder à chaque élément du tableau ?
**
** 3. Comment comparer tab[indice] avec maximum ?
**
** 4. Que dois-tu faire si l'élément est plus grand ?
**
** 5. Que doit retourner la fonction ?
**
**
** ============================================
** TESTS
** ============================================
**
** Teste également :
**
**     {10, 5, 20} → 20
**
**     {3, 8, 2, 15} → 15
**
**     {100, 50, 75} → 100
**
**
** 🔥 OBJECTIF PISCINE :
**
** Tu dois maintenant maîtriser cette structure :
**
**     int max_array(int tab[], int size)
**
**
** Un tableau est envoyé à une fonction,
** la fonction le parcourt et retourne une valeur.
**
** Tu combines :
**
**     tableau
**        +
**     fonction
**        +
**     paramètres
**        +
**     boucle
**        +
**     condition
**        +
**     return
*/