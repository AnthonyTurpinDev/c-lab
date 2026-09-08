/*
** EXERCICE : Modifier un tableau avec un pointeur
**
** CONSIGNE :
**
** Déclare le tableau suivant :
**
**     int tab[] = {1, 2, 3, 4, 5};
**
** Puis utilise uniquement un pointeur pour modifier
** les valeurs du tableau.
**
** Le tableau doit devenir :
**
**     10
**     20
**     30
**     40
**     50
**
** IMPORTANT :
**
** Les valeurs doivent être modifiées directement
** dans le tableau grâce au pointeur.
**
** Tu dois utiliser le principe :
**
**     *p = ...
**     p++
**
** Exemple de réflexion :
**
**     p → 1
**
** Comment modifier la valeur pointée ?
**
**     *p = ...
**
** Puis comment passer à l'élément suivant ?
**
**     p++
**
** CONTRAINTES :
**
** - Déclarer `int *p = tab`.
** - Utiliser une boucle.
** - Modifier les valeurs avec `*p`.
** - Utiliser `p++` pour avancer dans le tableau.
** - Ne pas utiliser `tab[i]` pour modifier les valeurs.
** - Ne pas créer de deuxième tableau.
**
** OBJECTIFS :
**
** - Comprendre comment modifier une valeur avec un pointeur.
** - Comprendre `*p` en lecture et en écriture.
** - Comprendre le déplacement d'un pointeur avec `p++`.
** - Comprendre qu'un pointeur permet de modifier directement
**   les éléments d'un tableau.
**
** QUESTIONS À TE POSER :
**
** - Que représente `*p` au début ?
** - Comment transformer `1` en `10` avec `*p` ?
** - Que représente `*p` après `p++` ?
** - Comment faire pour modifier les 5 éléments
**   sans utiliser les indices ?
**
** BONUS :
**
** Après la modification, affiche le tableau uniquement
** avec le pointeur.
**
** Tu dois donc être capable de :
**
**     modifier → avancer → modifier → avancer → ...
**
** IMPORTANT POUR LA PISCINE :
**
** Ne cherche pas simplement à faire fonctionner le code.
** Comprends pourquoi :
**
**     *p = 10;
**
** modifie réellement `tab[0]`.
*/