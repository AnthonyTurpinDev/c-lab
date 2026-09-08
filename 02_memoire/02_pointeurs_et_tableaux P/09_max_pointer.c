/*
** EXERCICE : Trouver le maximum avec un pointeur
**
** CONSIGNE :
**
** Créer la fonction :
**
**     int *find_max(int *tab, int size)
**
** Cette fonction doit parcourir un tableau d'entiers
** et retourner l'adresse de l'élément contenant
** la plus grande valeur.
**
** ⚠️ ATTENTION :
**
** La fonction ne doit PAS retourner la valeur maximale.
** Elle doit retourner l'ADRESSE de l'élément maximal.
**
** Exemple :
**
**     int tab[] = {4, 12, 7, 25, 3};
**
** Le maximum est 25.
**
** find_max(tab, 5) doit donc retourner l'adresse
** de tab[3].
**
**
** Dans main() :
**
**     1. Créer le tableau :
**
**        int tab[] = {4, 12, 7, 25, 3};
**
**     2. Appeler find_max().
**
**     3. Stocker le résultat dans un pointeur :
**
**        int *max = find_max(tab, 5);
**
**     4. Afficher la valeur maximale avec :
**
**        *max
**
** Résultat attendu :
**
**     Maximum = 25
**
**
** CONTRAINTES :
**
** - Utiliser un pointeur.
** - La fonction doit retourner un int *.
** - Ne pas retourner directement la valeur maximale.
** - Ne pas créer de deuxième tableau.
** - Parcourir le tableau avec une boucle.
** - Le pointeur retourné doit pointer directement
**   vers l'élément maximal du tableau.
**
**
** OBJECTIFS :
**
** - Comprendre qu'une fonction peut retourner un pointeur.
** - Comprendre la différence entre :
**
**       int max
**
**   et :
**
**       int *max
**
** - Comprendre qu'un pointeur peut contenir l'adresse
**   d'un élément du tableau.
** - Comprendre comment utiliser * pour récupérer
**   la valeur située à cette adresse.
** - Faire le lien entre :
**
**       tab
**       &tab[i]
**       int *
**       *p
**
**
** QUESTIONS À TE POSER :
**
** 1. Pourquoi la fonction retourne-t-elle int *
**    et non int ?
**
** 2. Si p contient l'adresse de 25, que donne *p ?
**
** 3. Quelle est la différence entre :
**
**       max
**
**   et :
**
**       *max
**
** 4. Si le maximum se trouve à l'indice 3,
**    vers quoi doit pointer le pointeur retourné ?
**
** 5. Pourquoi peut-on utiliser le pointeur retourné
**    directement dans main() ?
**
**
** BONUS :
**
** Afficher également l'adresse du maximum.
**
** Puis vérifier que cette adresse correspond bien
** à l'adresse de l'élément du tableau contenant 25.
*/