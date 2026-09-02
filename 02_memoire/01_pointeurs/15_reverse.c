/*
** EXERCICE : Inverser un tableau
**
** CONSIGNE :
**
** On te donne le tableau suivant :
**
**     int tab[] = {1, 2, 3, 4, 5};
**
** Tu dois le transformer en :
**
**     {5, 4, 3, 2, 1}
**
** Créer une fonction permettant d'inverser
** le tableau directement en mémoire.
**
** CONTRAINTE IMPORTANTE :
**
** Ta fonction doit utiliser des pointeurs.
**
** Tu dois travailler avec :
**
**     - un pointeur vers le premier élément
**     - un pointeur vers le dernier élément
**
** Principe à comprendre :
**
**     premier élément
**          +
**     dernier élément
**          ↓
**         swap
**          ↓
**     avancer
**          +
**     reculer
**
** Exemple :
**
**     {1, 2, 3, 4, 5}
**      ↑           ↑
**    début       fin
**
** Après le premier échange :
**
**     {5, 2, 3, 4, 1}
**
** Puis tu continues vers le centre du tableau.
**
** À TRAVAILLER :
**
** - tableaux
** - pointeurs
** - parcours d'un tableau
** - échange de valeurs
** - adresse mémoire
** - modification directe du tableau
**
** ⚠️ OBJECTIF :
**
** Ne crée pas un deuxième tableau pour stocker
** la version inversée.
**
** Le tableau doit être inversé directement
** dans le tableau original.
**
** QUESTIONS À TE POSER :
**
** 1. Comment obtenir l'adresse du premier élément ?
**
** 2. Comment obtenir l'adresse du dernier élément ?
**
** 3. Comment échanger les valeurs situées
**    à ces deux adresses ?
**
** 4. Comment faire avancer le pointeur de gauche ?
**
** 5. Comment faire reculer le pointeur de droite ?
**
** 6. À quel moment dois-tu arrêter les échanges ?
**
** OBJECTIF FINAL :
**
** Être capable d'inverser un tableau en utilisant
** deux pointeurs qui se déplacent l'un vers l'autre.
*/