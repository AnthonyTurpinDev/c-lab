/*
** EXERCICE : Compter les occurrences
**
** FICHIER : 12_compter_occurrences.c
**
** OBJECTIF :
**
** Apprendre à rechercher une valeur dans un tableau
** et à compter combien de fois elle apparaît.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Crée une fonction :
**
**     int count_value(int tab[], int size, int value)
**
**
** La fonction doit compter combien de fois "value"
** apparaît dans le tableau et retourner ce nombre.
**
**
** ============================================
** EXEMPLE
** ============================================
**
** Tableau :
**
**     int tab[] = {5, 2, 5, 8, 5, 1, 5};
**
**
** Appel :
**
**     count_value(tab, 7, 5);
**
**
** Résultat :
**
**     4
**
**
** Car la valeur 5 apparaît ici :
**
**     5
**     2
**     5
**     8
**     5
**     1
**     5
**
** Il y a donc 4 occurrences de 5.
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - La fonction doit s'appeler count_value().
** - Elle doit retourner un int.
** - Elle reçoit trois paramètres :
**
**       int tab[]
**       int size
**       int value
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise une variable compteur.
** - Compare chaque élément avec "value".
** - Augmente le compteur lorsqu'une correspondance
**   est trouvée.
** - Retourne le compteur avec return.
**
**
** ⚠️ INTERDICTION :
**
** Ne compte pas directement le nombre de 5.
**
** La fonction doit fonctionner avec n'importe quelle
** valeur passée dans "value".
**
**
** ============================================
** DANS main()
** ============================================
**
** Crée le tableau :
**
**     int tab[] = {5, 2, 5, 8, 5, 1, 5};
**
**
** Appelle :
**
**     count_value(tab, 7, 5);
**
**
** Puis affiche le résultat.
**
**
** ============================================
** TESTS
** ============================================
**
** Teste également plusieurs valeurs :
**
**     value = 5 → 4
**     value = 2 → 1
**     value = 8 → 1
**     value = 10 → 0
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Le programme doit parcourir :
**
**     tab[0]
**     tab[1]
**     tab[2]
**     ...
**
**
** Pour chaque élément, pose-toi la question :
**
**     "Est-ce que tab[indice] == value ?"
**
**
** Si oui :
**
**     augmente le compteur.
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle doit être la valeur initiale du compteur ?
**
** 2. Quelle valeur doit avoir l'indice au départ ?
**
** 3. Comment comparer tab[indice] avec value ?
**
** 4. Quand augmenter le compteur ?
**
** 5. Quand arrêter la boucle ?
**
** 6. Que doit retourner la fonction ?
**
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre cette structure :
**
**     int count_value(int tab[], int size, int value)
**
**
** Un tableau peut être envoyé à une fonction avec
** plusieurs paramètres permettant de contrôler
** la recherche.
**
** Tu combines maintenant :
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
**     compteur
**        +
**     return
*/