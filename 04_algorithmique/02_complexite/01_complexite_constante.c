/*
** EXERCICE : Complexité constante
**
** OBJECTIF :
**
** Comprendre ce qu'est une complexité en O(1).
**
** Une opération est en O(1) lorsqu'elle prend un temps
** qui ne dépend pas de la taille des données.
**
**
** CONSIGNE :
**
** Pour chaque morceau de code ci-dessous, indique sa complexité.
**
**
** CAS 1 :
**
**     int x = tab[0];
**
**
** CAS 2 :
**
**     int result = a + b;
**
**
** CAS 3 :
**
**     printf("%d\n", x);
**
**
** Pour chacun, explique pourquoi l'opération est en O(1).
**
**
** QUESTIONS À TE POSER :
**
** 1. Est-ce que l'opération utilise une boucle ?
**
** 2. Est-ce que l'opération parcourt tout le tableau ?
**
** 3. Est-ce que le nombre d'opérations augmente lorsque
**    la taille du tableau augmente ?
**
** 4. Si tab contient 10 éléments, combien d'opérations sont
**    nécessaires pour accéder à tab[0] ?
**
** 5. Si tab contient 1 000 000 d'éléments, combien d'opérations
**    sont nécessaires pour accéder à tab[0] ?
**
**
** À COMPRENDRE :
**
**     tab[0]
**
** permet d'accéder directement au premier élément du tableau.
**
** Que le tableau contienne :
**
**     10 éléments
**     100 éléments
**     1 000 éléments
**     1 000 000 éléments
**
** l'accès à tab[0] reste une opération directe.
**
**
** MENTAL MODEL :
**
**     Taille du tableau
**
**     10          → accès direct
**     100         → accès direct
**     1 000       → accès direct
**     1 000 000   → accès direct
**
**
** Donc :
**
**     tab[0] → O(1)
**
**
** Une addition simple :
**
**     a + b
**
** demande également un nombre fixe d'opérations.
**
** Donc :
**
**     a + b → O(1)
**
**
** De même, afficher une seule valeur :
**
**     printf("%d\n", x);
**
** est considéré ici comme O(1), car on affiche une seule
** valeur et non une quantité de valeurs dépendant de n.
**
**
** RÈGLE À RETENIR :
**
**     O(1) = temps constant
**
**     La taille des données n'a pas d'influence sur le nombre
**     d'opérations effectuées.
**
**
** ATTENTION :
**
** Ne pas confondre :
**
**     "une ligne de code"
**
** avec
**
**     "forcément O(1)"
**
**
** Une seule ligne peut contenir une boucle ou appeler une
** fonction qui parcourt beaucoup de données.
**
**
** BONUS :
**
** Imagine maintenant :
**
**     tab[500];
**
** Quelle est sa complexité ?
**
** Puis :
**
**     tab[n - 1];
**
** Quelle est sa complexité ?
**
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable de reconnaître immédiatement une opération
** en O(1) sans avoir besoin de calculer précisément son temps.
*/