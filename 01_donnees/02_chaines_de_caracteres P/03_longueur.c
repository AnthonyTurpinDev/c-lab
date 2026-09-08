/*
** EXERCICE : Compter la longueur d'une chaîne
**
** CONSIGNE :
**
** Demande à l'utilisateur d'entrer une chaîne de caractères.
**
** Puis parcours la chaîne caractère par caractère et compte
** le nombre de caractères qu'elle contient.
**
** Exemple :
**
**     Bonjour
**
** Résultat attendu :
**
**     Longueur = 7
**
** CONTRAINTES :
**
** - Utiliser un tableau de char pour stocker la chaîne.
** - Utiliser une boucle pour parcourir la chaîne.
** - Parcourir la chaîne jusqu'au caractère '\0'.
** - Compter chaque caractère rencontré.
** - Afficher la longueur avec printf.
**
** IMPORTANT :
**
** Le caractère '\0' marque la FIN d'une chaîne de caractères
** en C.
**
** Il ne faut PAS compter '\0' dans la longueur.
**
** Exemple :
**
**     "Bonjour"
**
** En mémoire :
**
**     B o n j o u r \0
**     0 1 2 3 4 5 6  7
**
** La chaîne contient donc 7 caractères, puis '\0'
** indique que la chaîne est terminée.
**
** OBJECTIFS :
**
** - Comprendre '\0'.
** - Comprendre comment une chaîne est terminée en C.
** - Parcourir une chaîne avec une boucle.
** - Compter le nombre de caractères.
** - Comprendre la différence entre un caractère
**   et le caractère spécial '\0'.
**
** QUESTION À TE POSER :
**
** Pourquoi la boucle doit-elle s'arrêter lorsque
** str[i] == '\0' ?
*/