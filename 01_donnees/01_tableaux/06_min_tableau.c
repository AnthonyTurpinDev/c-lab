/*
** EXERCICE : Minimum d'un tableau
**
** FICHIER : 06_min_tableau.c
**
** OBJECTIF :
**
** Apprendre à parcourir un tableau et à trouver
** la plus petite valeur qu'il contient.
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
** le plus petit élément.
**
**
** RÉSULTAT ATTENDU :
**
**     Minimum = 3
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise une variable minimum.
** - Parcours tous les éléments du tableau.
** - Compare chaque élément avec le minimum actuel.
** - Affiche le minimum avec printf().
**
**
** ⚠️ INTERDICTION :
**
** Ne cherche pas directement la valeur 3.
**
** Ton programme doit fonctionner même si les valeurs
** du tableau changent.
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Même principe que l'exercice précédent sur le maximum,
** mais cette fois tu recherches la plus petite valeur.
**
** Tu dois choisir une première valeur comme
** minimum de départ.
**
** Ensuite, pour chaque élément :
**
**     "Est-ce que cet élément est plus petit
**      que mon minimum actuel ?"
**
** Si oui :
**
**     le nouveau minimum devient cet élément.
**
**
** Exemple :
**
**     {4, 12, 7, 25, 3}
**
** Parcours :
**
**     minimum = 4
**     12 < 4 → rien
**     7  < 4 → rien
**     25 < 4 → rien
**     3  < 4 → nouveau minimum
**
** Résultat :
**
**     minimum = 3
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle valeur utiliser comme minimum au départ ?
**
** 2. Quel indice utiliser pour parcourir le tableau ?
**
** 3. Comment comparer tab[indice] avec minimum ?
**
** 4. Que faire si tab[indice] est plus petit ?
**
** 5. Quand la boucle doit-elle s'arrêter ?
**
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre que la recherche du minimum fonctionne
** presque exactement comme celle du maximum.
**
** La différence principale se trouve dans la comparaison.
*/