/*
** EXERCICE : Modifier deux variables
**
** CONSIGNE :
**
** Déclarer deux variables entières :
**
**     int a = 10;
**     int b = 20;
**
** Puis créer :
**
**     - un pointeur vers a
**     - un pointeur vers b
**
** À l'aide des pointeurs, modifier les deux variables
** afin d'obtenir :
**
**     a = 100
**     b = 200
**
** À TRAVAILLER :
**
** - créer deux pointeurs
** - utiliser &
** - utiliser *
** - modifier une variable via son pointeur
**
** ⚠️ CONTRAINTE IMPORTANTE :
**
** Tu dois modifier a et b UNIQUEMENT avec les pointeurs.
**
** La modification doit donc être réalisée à travers :
**
**     *p_a
**     *p_b
**
** et non directement avec :
**
**     a = 100;
**     b = 200;
**
** OBJECTIF FINAL :
**
** Comprendre qu'un pointeur permet de modifier
** directement la variable vers laquelle il pointe.
**
** QUESTION À TE POSER :
**
** Si p_a pointe vers a et p_b pointe vers b,
** que modifies-tu lorsque tu écris :
**
**     *p_a = 100;
**     *p_b = 200;
**
*/