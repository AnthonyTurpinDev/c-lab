/*
** EXERCICE : Incrémenter
**
** CONSIGNE :
**
** Créer une fonction :
**
**     void increment(int *n)
**
** Cette fonction doit augmenter la valeur reçue
** de 1 grâce au pointeur.
**
** Dans main(), déclarer :
**
**     int x = 10;
**
** Puis appeler plusieurs fois la fonction :
**
**     increment(&x);
**
** Après chaque appel, afficher la valeur de x.
**
** RÉSULTAT ATTENDU :
**
**     x = 10
**     x = 11
**     x = 12
**     x = 13
**
** Le déroulement doit être :
**
**     x = 10
**
**     increment(&x)
**     → x = 11
**
**     increment(&x)
**     → x = 12
**
**     increment(&x)
**     → x = 13
**
** ⚠️ CONTRAINTE :
**
** La fonction doit modifier x uniquement
** grâce au pointeur n.
**
** Tu ne dois pas modifier directement x
** dans main() entre les appels.
**
** À TRAVAILLER :
**
** - fonctions
** - pointeurs
** - opérateur &
** - opérateur *
** - modification d'une variable via une fonction
** - incrémentation
**
** OBJECTIF FINAL :
**
** Comprendre qu'une fonction peut modifier plusieurs
** fois la même variable grâce à son adresse.
**
** QUESTION À TE POSER :
**
** Si n contient l'adresse de x, que se passe-t-il
** lorsque tu modifies *n de 1 ?
*/