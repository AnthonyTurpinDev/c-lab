/*
** EXERCICE : Min / Max
**
** CONSIGNE :
**
** Créer une fonction :
**
**     void min_max(int a, int b, int *min, int *max)
**
** Cette fonction reçoit deux nombres :
**
**     a
**     b
**
** Elle doit déterminer :
**
**     - le minimum et le placer dans *min
**     - le maximum et le placer dans *max
**
** Exemple :
**
**     a = 15
**     b = 8
**
** Après l'appel de la fonction :
**
**     min = 8
**     max = 15
**
** Dans main(), afficher les résultats.
**
** À TRAVAILLER :
**
** - fonctions
** - paramètres
** - pointeurs
** - opérateur *
** - comparaison
** - plusieurs résultats avec une seule fonction
**
** 🔥 POINT IMPORTANT :
**
** Ici, les pointeurs servent de "sorties"
** supplémentaires pour la fonction.
**
** La fonction ne retourne pas directement min et max
** avec return.
**
** Elle écrit les résultats dans les variables
** grâce aux pointeurs *min et *max.
**
** ⚠️ CONTRAINTE :
**
** La fonction doit avoir exactement cette forme :
**
**     void min_max(int a, int b, int *min, int *max)
**
** OBJECTIF FINAL :
**
** Comprendre comment une fonction peut produire
** plusieurs résultats en utilisant des pointeurs.
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi min et max sont-ils des pointeurs ?
**
** 2. Que signifie *min ?
**
** 3. Que signifie *max ?
**
** 4. Pourquoi la fonction utilise-t-elle les adresses
**    des variables min et max ?
*/