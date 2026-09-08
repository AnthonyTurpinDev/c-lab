/*
** EXERCICE : Adresse d'un tableau
**
** CONSIGNE :
**
** Déclare le tableau suivant :
**
**     int tab[5] = {10, 20, 30, 40, 50};
**
** Puis affiche :
**
** - l'adresse de `tab`
** - l'adresse de `tab[0]`
** - la valeur de `tab[0]`
**
** RÉSULTAT ATTENDU :
**
** Les deux adresses suivantes doivent correspondre :
**
**     tab
**     &tab[0]
**
** La valeur affichée doit être :
**
**     10
**
** IMPORTANT :
**
** Pour afficher une adresse avec printf, utilise :
**
**     %p
**
** et le format adapté pour une adresse.
**
** OBJECTIFS :
**
** - Comprendre ce qu'est l'adresse d'un tableau.
** - Comprendre l'opérateur `&`.
** - Comprendre l'adresse du premier élément.
** - Comprendre que :
**
**     tab
**
** représente l'adresse du premier élément du tableau
** dans ce contexte.
**
** - Comprendre que :
**
**     tab == &tab[0]
**
** représente la même adresse de départ.
**
** QUESTIONS À TE POSER :
**
** - Quelle est la différence entre `tab` et `tab[0]` ?
** - Que représente `&tab[0]` ?
** - Pourquoi `tab` et `&tab[0]` affichent-ils la même adresse ?
** - Que représente l'adresse affichée par `%p` ?
**
** BONUS :
**
** Affiche également :
**
**     &tab[1]
**     &tab[2]
**
** Puis observe les différences entre les adresses.
**
** Essaie de comprendre pourquoi les adresses augmentent
** lorsqu'on passe d'un élément à l'autre.
*/