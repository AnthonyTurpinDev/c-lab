/*
** EXERCICE : Parcourir un tableau avec un pointeur
**
** CONSIGNE :
**
** Déclare le tableau suivant :
**
**     int tab[5] = {10, 20, 30, 40, 50};
**
** Puis crée un pointeur vers le premier élément :
**
**     int *p = tab;
**
** Utilise ensuite uniquement le pointeur `p` pour
** afficher les 5 valeurs du tableau.
**
** RÉSULTAT ATTENDU :
**
**     10
**     20
**     30
**     40
**     50
**
** CONTRAINTES :
**
** - Utiliser `int *p = tab`.
** - Utiliser une boucle.
** - Pour l'affichage, ne pas utiliser `tab[i]`.
** - Utiliser le pointeur pour accéder aux valeurs.
**
** RÉFLEXION :
**
** Au début :
**
**     p
**     ↓
**     [10] [20] [30] [40] [50]
**
** Que donne :
**
**     *p
**
** Comment accéder à l'élément suivant ?
**
**     p++
**
** Après `p++`, que donne :
**
**     *p
**
** OBJECTIFS :
**
** - Comprendre qu'un tableau peut être parcouru avec
**   un pointeur.
** - Comprendre que `tab` représente l'adresse du premier
**   élément.
** - Comprendre `int *p = tab`.
** - Comprendre l'opérateur `*` pour accéder à la valeur.
** - Comprendre l'incrémentation d'un pointeur avec `p++`.
**
** QUESTIONS À TE POSER :
**
** - Que contient `p` ?
** - Que représente `*p` ?
** - Que se passe-t-il lorsque je fais `p++` ?
** - Pourquoi `p++` permet-il de passer à l'élément suivant ?
** - Est-ce que `p++` augmente l'adresse d'un seul octet
**   ou avance-t-il d'un élément du type pointé ?
**
** BONUS :
**
** Affiche également l'adresse contenue dans `p`
** avant chaque affichage.
**
** Observe comment l'adresse évolue lorsque tu fais :
**
**     p++
**
** IMPORTANT :
**
** Pour cet exercice, essaie de raisonner avec :
**
**     p
**     *p
**     p++
**
** plutôt qu'avec les indices du tableau.
*/