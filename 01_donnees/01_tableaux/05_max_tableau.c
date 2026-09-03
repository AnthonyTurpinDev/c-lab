/*
** EXERCICE : Maximum d'un tableau
**
** FICHIER : 05_max_tableau.c
**
** OBJECTIF :
**
** Apprendre à parcourir un tableau et à trouver
** la plus grande valeur qu'il contient.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Déclare le tableau suivant :
**
**     int tab[5] = {4, 12, 7, 25, 3};
**
**
** Parcours le tableau avec une boucle et trouve
** le plus grand élément.
**
**
** RÉSULTAT ATTENDU :
**
**     Maximum = 25
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise une variable maximum.
** - Parcours tous les éléments du tableau.
** - Compare chaque élément avec le maximum actuel.
** - Affiche le maximum avec printf().
**
**
** ⚠️ INTERDICTION :
**
** Ne cherche pas directement la valeur 25.
**
** Ton programme doit fonctionner même si les valeurs
** du tableau changent.
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Tu dois choisir une première valeur comme
** maximum de départ.
**
** Ensuite, pour chaque élément :
**
**     "Est-ce que cet élément est plus grand
**      que mon maximum actuel ?"
**
** Si oui :
**
**     le nouveau maximum devient cet élément.
**
**
** Exemple :
**
**     {4, 12, 7, 25, 3}
**
** Parcours :
**
**     maximum = 4
**     12 > 4  → nouveau maximum
**     7  > 12 → rien
**     25 > 12 → nouveau maximum
**     3  > 25 → rien
**
** Résultat :
**
**     maximum = 25
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle valeur utiliser comme maximum au départ ?
**
** 2. Quel indice utiliser pour parcourir le tableau ?
**
** 3. Comment comparer tab[indice] avec maximum ?
**
** 4. Que faire si tab[indice] est plus grand ?
**
** 5. Quand la boucle doit-elle s'arrêter ?
**
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre le principe de recherche dans un tableau.
**
** Cette logique pourra ensuite être utilisée pour :
**
**     - trouver le minimum
**     - trouver le maximum
**     - compter certaines valeurs
**     - rechercher une valeur
*/