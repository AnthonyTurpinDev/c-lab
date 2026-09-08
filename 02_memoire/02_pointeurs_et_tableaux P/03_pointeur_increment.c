/*
** EXERCICE : Avancer dans un tableau avec un pointeur
**
** CONSIGNE :
**
** Déclare :
**
**     int tab[] = {10, 20, 30, 40, 50};
**     int *p = tab;
**
** Puis affiche chaque élément du tableau en faisant
** avancer le pointeur.
**
** RÉSULTAT ATTENDU :
**
**     10
**     20
**     30
**     40
**     50
**
** IMPORTANT :
**
** Tu dois comprendre et utiliser le principe :
**
**     *p
**     p++
**     *p
**     p++
**     *p
**     ...
**
** Au départ :
**
**     p → 10
**
**     *p → 10
**
** Après :
**
**     p++
**
** le pointeur doit avancer vers l'élément suivant.
**
** OBJECTIFS :
**
** - Comprendre `int *p = tab`.
** - Comprendre `*p`.
** - Comprendre `p++`.
** - Parcourir un tableau sans utiliser `tab[i]`.
** - Comprendre qu'un pointeur peut se déplacer
**   d'un élément à l'autre.
**
** CONTRAINTES :
**
** - Utiliser le pointeur `p` pour accéder aux valeurs.
** - Utiliser une boucle.
** - Ne pas utiliser `tab[i]` pour l'affichage.
** - Ne pas créer un deuxième tableau.
**
** QUESTIONS À TE POSER :
**
** - Que contient `p` au début ?
** - Que donne `*p` ?
** - Que se passe-t-il après `p++` ?
** - Que donne `*p` après `p++` ?
** - Pourquoi `p++` permet-il de passer de 10 à 20,
**   puis de 20 à 30, etc. ?
**
** BONUS :
**
** Affiche l'adresse contenue dans `p` avant chaque valeur.
**
** Observe les changements d'adresse lorsque tu fais :
**
**     p++
**
** IMPORTANT POUR LA PISCINE :
**
** Essaie de résoudre cet exercice en raisonnant uniquement
** avec :
**
**     p
**     *p
**     p++
**
** Tu dois progressivement être capable de parcourir
** un tableau avec un pointeur sans utiliser les indices.
*/