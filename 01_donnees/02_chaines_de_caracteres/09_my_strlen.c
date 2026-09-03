/*
** EXERCICE : Recréer strlen
**
** CONSIGNE :
**
** Crée ta propre fonction :
**
**     int my_strlen(char *str)
**
** Cette fonction doit parcourir une chaîne de caractères
** et retourner le nombre de caractères qu'elle contient.
**
** Exemple :
**
**     my_strlen("Bonjour") → 7
**
** AUTRES EXEMPLES :
**
**     my_strlen("Hello") → 5
**     my_strlen("ordinateur") → 10
**     my_strlen("") → 0
**
** CONTRAINTES :
**
** - La fonction doit s'appeler my_strlen.
** - Elle doit prendre un char *str en paramètre.
** - Elle doit retourner un int.
** - Parcourir la chaîne avec une boucle.
** - S'arrêter lorsque tu rencontres '\0'.
** - Ne PAS utiliser strlen().
** - Ne pas utiliser de variable globale.
**
** IMPORTANT :
**
** Une chaîne de caractères se termine toujours par :
**
**     '\0'
**
** Tu dois utiliser ce caractère pour savoir quand
** arrêter de parcourir la chaîne.
**
** OBJECTIFS :
**
** - Comprendre char *str.
** - Comprendre comment une chaîne est parcourue.
** - Comprendre '\0'.
** - Utiliser un compteur.
** - Créer une fonction qui retourne une valeur.
** - Reproduire le fonctionnement d'une fonction de la libc.
**
** QUESTIONS À TE POSER :
**
** - Quelle valeur doit avoir mon compteur au début ?
** - Quand dois-je augmenter le compteur ?
** - Quand dois-je arrêter la boucle ?
** - Que dois-je retourner à la fin ?
**
** TEST DANS MAIN :
**
** Teste ta fonction avec plusieurs chaînes :
**
**     "Bonjour"
**     "Hello"
**     "ordinateur"
**     ""
**
** IMPORTANT POUR LA PISCINE :
**
** Tu dois être capable de refaire cette fonction
** sans regarder la correction.
*/