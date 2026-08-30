/*
** EXERCICE : Redimensionner un tableau dynamique
**
** Créer d'abord un tableau dynamique avec malloc().
**
** Le programme doit ensuite permettre de modifier sa taille
** grâce à realloc().
**
** EXEMPLE :
**
** Taille initiale : 3
** Tableau :
** 10 20 30
**
** Nouvelle taille : 5
**
** Tableau redimensionné :
** 10 20 30 40 50
**
**
** CONTRAINTES :
**
** - Utiliser malloc() pour l'allocation initiale.
** - Vérifier le retour de malloc().
** - Utiliser realloc() pour modifier la taille.
** - Vérifier que realloc() a réussi.
** - Ne pas perdre le pointeur original en cas d'échec.
** - Remplir les nouveaux éléments si le tableau est agrandi.
** - Libérer la mémoire avec free().
**
** IMPORTANT :
**
** Éviter de faire directement :
**
**     tab = realloc(tab, nouvelle_taille);
**
** sans réfléchir au cas où realloc() échoue.
**
** OBJECTIF :
**
** Comprendre comment modifier dynamiquement la taille
** d'une zone mémoire et gérer correctement les erreurs.
*/