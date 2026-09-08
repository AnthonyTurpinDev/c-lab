/*
** EXERCICE : Recréer strcmp
**
** CONSIGNE :
**
** Crée ta propre fonction :
**
**     int my_strcmp(char *s1, char *s2)
**
** Cette fonction doit comparer deux chaînes de caractères.
**
** EXEMPLES :
**
**     "abc" / "abc" → 0
**     "abc" / "abd" → différent
**     "hello" / "world" → différent
**
** CONTRAINTES :
**
** - La fonction doit s'appeler my_strcmp.
** - Elle doit prendre deux paramètres :
**
**       char *s1
**       char *s2
**
** - Elle doit retourner un int.
** - Parcourir les deux chaînes caractère par caractère.
** - Ne pas utiliser strcmp().
** - Ne pas utiliser de fonction de comparaison de chaînes.
**
** IMPORTANT :
**
** Si les deux chaînes sont exactement identiques,
** la fonction doit retourner :
**
**     0
**
** Si elles sont différentes, la fonction doit retourner
** une valeur différente de 0.
**
** Exemple :
**
**     "abc"
**     "abc"
**
** Les caractères sont identiques jusqu'à '\0' :
**
**     a == a
**     b == b
**     c == c
**
** Donc :
**
**     résultat = 0
**
** Mais :
**
**     "abc"
**     "abd"
**
** À un moment :
**
**     c != d
**
** La fonction doit alors détecter la différence.
**
** OBJECTIFS :
**
** - Parcourir deux chaînes en même temps.
** - Comparer les caractères un par un.
** - Comprendre le rôle de '\0'.
** - Utiliser plusieurs conditions dans une boucle.
** - Comprendre comment une fonction peut retourner
**   une valeur indiquant un résultat.
** - Reproduire le comportement général de strcmp().
**
** QUESTIONS À TE POSER :
**
** - Quand dois-je continuer la boucle ?
** - Que faire si les caractères sont identiques ?
** - Que faire dès qu'ils sont différents ?
** - Que faire si une chaîne se termine avant l'autre ?
** - Comment savoir si les deux chaînes sont identiques
**   jusqu'à '\0' ?
**
** TESTS À EFFECTUER :
**
**     "abc" / "abc"
**     "abc" / "abd"
**     "abd" / "abc"
**     "hello" / "world"
**     "" / ""
**     "" / "abc"
**     "abc" / ""
**
** BONUS :
**
** Essaie de comprendre pourquoi strcmp() ne renvoie
** pas forcément exactement -1 ou 1 lorsqu'il trouve
** une différence.
**
** IMPORTANT POUR LA PISCINE :
**
** Ne cherche pas directement la correction.
** Essaie d'abord de construire l'algorithme :
**
**     1. Comparer les caractères.
**     2. Avancer dans les deux chaînes.
**     3. Détecter une différence ou la fin.
**     4. Retourner le résultat.
*/