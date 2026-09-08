/*
** EXERCICE : Agrandir un tableau avec realloc()
**
** CONSIGNE :
**
** Commencer avec un tableau dynamique de 3 entiers :
**
**     10 20 30
**
** Le tableau doit ensuite être agrandi à 6 entiers
** grâce à realloc().
**
**
** Résultat final attendu :
**
**     10 20 30 40 50 60
**
**
** OBJECTIFS :
**
** Apprendre à :
**
**     - utiliser malloc()
**     - utiliser realloc()
**     - conserver les anciennes données
**     - ajouter de nouvelles cases
**     - manipuler un tableau dynamique
**     - vérifier les erreurs d'allocation
**     - utiliser free()
**
**
** ÉTAPES :
**
** 1. Déclarer un pointeur :
**
**        int *tab;
**
**
** 2. Utiliser malloc() pour créer un tableau
**    dynamique de 3 int.
**
**
** 3. Vérifier que malloc() a réussi.
**
**
** 4. Stocker les valeurs :
**
**        10 20 30
**
**
** 5. Afficher le tableau.
**
**    Résultat :
**
**        Avant realloc :
**        10 20 30
**
**
** 6. Utiliser realloc() pour agrandir la zone mémoire
**    afin qu'elle puisse contenir 6 int.
**
**
** 7. Vérifier que realloc() a réussi.
**
**    ⚠️ Attention :
**
**    Ne perds pas l'adresse originale du tableau
**    si realloc() échoue.
**
**
** 8. Conserver les anciennes valeurs :
**
**        10 20 30
**
**    puis remplir les nouvelles cases avec :
**
**        40 50 60
**
**
** 9. Afficher le tableau final.
**
**    Résultat attendu :
**
**        Après realloc :
**        10 20 30 40 50 60
**
**
** 10. Libérer la mémoire avec free().
**
**
** CONTRAINTES :
**
** - Commencer avec malloc() pour 3 int.
** - Utiliser realloc() pour passer à 6 int.
** - Les valeurs 10, 20 et 30 doivent être conservées.
** - Ajouter 40, 50 et 60 après le realloc().
** - Utiliser une boucle pour afficher le tableau.
** - Vérifier les résultats de malloc() et realloc().
** - Ne pas créer un deuxième tableau pour copier
**   manuellement les anciennes valeurs.
** - Utiliser free() à la fin.
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi utiliser malloc() au début ?
**
** 2. Pourquoi utiliser realloc() ensuite ?
**
** 3. Que cherche-t-on à faire lorsque le tableau passe
**    de 3 à 6 éléments ?
**
** 4. Pourquoi ne peut-on pas simplement utiliser malloc()
**    une deuxième fois pour obtenir 6 éléments tout en
**    conservant automatiquement les anciennes données ?
**
** 5. Que fait realloc() avec les anciennes données ?
**
** 6. Que se passe-t-il si realloc() doit déplacer
**    la zone mémoire ?
**
** 7. Pourquoi faut-il vérifier si realloc() retourne NULL ?
**
** 8. Pourquoi est-il dangereux d'écrire directement :
**
**        tab = realloc(tab, ...);
**
**    sans réfléchir à la gestion d'une erreur ?
**
**
** COMPARAISON À COMPRENDRE :
**
**     malloc()
**        ↓
**     nouvelle zone mémoire
**
**
**     realloc()
**        ↓
**     agrandir ou réduire une zone mémoire
**     déjà allouée
**
**
** BONUS :
**
** Commencer avec 3 éléments puis demander à l'utilisateur
** combien d'éléments il souhaite finalement avoir.
**
** Utiliser realloc() pour adapter la taille du tableau.
**
**
** BONUS 2 :
**
** Faire l'inverse :
**
**     10 20 30 40 50 60
**
** puis utiliser realloc() pour réduire le tableau
** à seulement 3 éléments.
**
**
** OBJECTIF FINAL :
**
** Comprendre cette évolution :
**
**        malloc()
**           ↓
**     [10][20][30]
**           ↓
**       realloc()
**           ↓
**     [10][20][30][40][50][60]
**           ↓
**         free()
**
**
** À retenir :
**
** malloc() sert à créer une nouvelle zone mémoire.
**
** realloc() sert à redimensionner une zone mémoire
** déjà allouée tout en essayant de conserver
** son contenu existant.
*/