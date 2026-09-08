/*
** EXERCICE : Rechercher une valeur
**
** FICHIER : 08_rechercher.c
**
** OBJECTIF :
**
** Apprendre à rechercher une valeur dans un tableau
** en utilisant une boucle et une condition.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Déclare le tableau suivant :
**
**     int tab[] = {10, 25, 4, 17, 8, 30};
**
**
** Demande ensuite à l'utilisateur de saisir
** un nombre à rechercher.
**
** Parcours le tableau et vérifie si ce nombre
** existe dans le tableau.
**
**
** ============================================
** EXEMPLE 1
** ============================================
**
** Entrée :
**
**     Nombre à rechercher : 17
**
** Résultat :
**
**     17 existe dans le tableau.
**
**
** ============================================
** EXEMPLE 2
** ============================================
**
** Entrée :
**
**     Nombre à rechercher : 50
**
** Résultat :
**
**     50 n'existe pas dans le tableau.
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise une variable pour stocker le nombre
**   recherché.
** - Utilise une condition pour comparer les valeurs.
** - Utilise scanf() pour demander le nombre.
** - Utilise printf() pour afficher le résultat.
**
**
** ⚠️ Le programme doit fonctionner avec n'importe
** quelle valeur saisie par l'utilisateur.
**
** Ne cherche pas directement 17 ou 50 dans le code.
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Le programme doit comparer le nombre recherché
** avec chaque élément :
**
**     nombre recherché == tab[0] ?
**     nombre recherché == tab[1] ?
**     nombre recherché == tab[2] ?
**     ...
**
**
** Si une valeur correspond :
**
**     le nombre existe dans le tableau.
**
** Si aucune valeur ne correspond :
**
**     le nombre n'existe pas dans le tableau.
**
**
** ============================================
** QUESTIONS À TE POSER
** ============================================
**
** 1. Comment récupérer le nombre saisi par l'utilisateur ?
**
** 2. Quelle valeur doit avoir l'indice au départ ?
**
** 3. Comment comparer le nombre recherché avec
**    tab[indice] ?
**
** 4. Comment mémoriser le fait que la valeur a été trouvée ?
**
** 5. Quand la boucle doit-elle s'arrêter ?
**
** 6. Que dois-tu afficher si aucune correspondance
**    n'a été trouvée ?
**
**
** 💡 INDICE :
**
** Tu peux utiliser une variable qui indique si
** le nombre a été trouvé ou non.
**
** Par exemple, réfléchis à une variable :
**
**     trouve
**
** qui pourrait prendre deux états :
**
**     0 → pas trouvé
**     1 → trouvé
**
**
** 🔥 OBJECTIF PISCINE :
**
** Maîtriser la recherche séquentielle dans un tableau :
**
**     tableau
**        +
**     boucle
**        +
**     comparaison
**        +
**     variable de contrôle
**
** Cette logique sera très importante pour les exercices
** de recherche et d'algorithmes.
*/