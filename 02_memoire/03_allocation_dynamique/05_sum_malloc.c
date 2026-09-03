/*
** EXERCICE : Somme d'un tableau dynamique
**
** CONSIGNE :
**
** Créer dynamiquement un tableau d'entiers avec malloc().
**
** Créer ensuite la fonction :
**
**     int sum_array(int *tab, int size);
**
**
** Cette fonction doit parcourir le tableau et retourner
** la somme de tous ses éléments.
**
**
** EXEMPLE :
**
**     Tableau : 10 20 30 40
**
**     Somme : 100
**
**
** OBJECTIFS :
**
** Apprendre à combiner :
**
**     - malloc()
**     - tableau dynamique
**     - pointeurs
**     - fonctions
**     - boucle
**     - valeur de retour
**     - free()
**
**
** ÉTAPES :
**
** 1. Créer dynamiquement un tableau de 4 int
**    avec malloc().
**
**
** 2. Vérifier que malloc() a réussi.
**
**
** 3. Remplir le tableau avec :
**
**        10 20 30 40
**
**
** 4. Créer la fonction :
**
**        int sum_array(int *tab, int size)
**
**
** 5. Dans cette fonction, parcourir le tableau
**    avec une boucle.
**
**
** 6. Utiliser une variable d'accumulation pour additionner
**    tous les éléments.
**
**
** 7. Retourner la somme avec return.
**
**
** 8. Dans main(), récupérer le résultat de la fonction
**    et l'afficher.
**
**
** Résultat attendu :
**
**     Tableau : 10 20 30 40
**     Somme : 100
**
**
** 9. Libérer la mémoire avec free().
**
**
** CONTRAINTES :
**
** - Le tableau doit être créé avec malloc().
** - Utiliser un pointeur int *.
** - Utiliser la fonction sum_array().
** - sum_array() doit retourner un int.
** - Utiliser une boucle pour parcourir le tableau.
** - Ne pas modifier le tableau.
** - Ne pas utiliser une fonction toute faite pour calculer
**   la somme.
** - Vérifier que malloc() ne retourne pas NULL.
** - Utiliser free() à la fin.
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi sum_array() reçoit-elle :
**
**        int *tab
**
**    et :
**
**        int size
**
**    ?
**
** 2. Pourquoi la fonction retourne-t-elle un int
**    et non un int * ?
**
** 3. Quelle valeur doit avoir l'accumulateur
**    avant de commencer la boucle ?
**
** 4. Que représente :
**
**        *tab
**
**    lorsque tab pointe vers le premier élément ?
**
** 5. Quelle différence entre :
**
**        tab
**
**    et :
**
**        tab[i]
**
**    ?
**
** 6. Pourquoi la fonction peut-elle lire le tableau
**    créé avec malloc() ?
**
** 7. Pourquoi doit-on appeler free() après avoir calculé
**    la somme ?
**
**
** BONUS :
**
** Modifier le programme pour demander à l'utilisateur
** combien de nombres il souhaite stocker.
**
** Allouer dynamiquement la bonne quantité de mémoire,
** demander les valeurs, puis calculer leur somme avec
** sum_array().
**
**
** Exemple :
**
**     Combien de nombres ? 5
**
**     Entrez les nombres :
**     10
**     20
**     30
**     40
**     50
**
**     Somme : 150
**
**
** OBJECTIF FINAL :
**
** Comprendre cette chaîne :
**
**        malloc()
**           ↓
**       int *tab
**           ↓
**    [10][20][30][40]
**           ↓
**    sum_array(tab, 4)
**           ↓
**         100
**           ↓
**        free(tab)
**
**
** Cet exercice ajoute une notion importante :
**
**     Une fonction peut recevoir une adresse,
**     parcourir les données à cette adresse,
**     puis retourner une valeur calculée.
*/