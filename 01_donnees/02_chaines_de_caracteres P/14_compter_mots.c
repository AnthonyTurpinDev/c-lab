/*
** EXERCICE : Compter les mots
**
** CONSIGNE :
**
** Demande à l'utilisateur d'entrer une phrase.
**
** Puis compte le nombre de mots présents dans cette phrase.
**
** Exemple :
**
**     Bonjour tout le monde
**
** Résultat attendu :
**
**     Nombre de mots = 4
**
** IMPORTANT :
**
** Un mot est séparé d'un autre mot par un espace.
**
** Exemple :
**
**     Bonjour tout le monde
**             ↑    ↑   ↑
**          espaces
**
** ATTENTION :
**
** Il peut y avoir plusieurs espaces entre les mots.
**
** Exemple :
**
**     Bonjour   tout   le monde
**
** Le résultat doit toujours être :
**
**     Nombre de mots = 4
**
** Tu ne dois donc PAS simplement compter le nombre
** d'espaces dans la phrase.
**
** CONTRAINTES :
**
** - Utiliser un tableau de char pour stocker la phrase.
** - Utiliser une boucle pour parcourir la chaîne.
** - Utiliser '\0' pour détecter la fin de la chaîne.
** - Les mots sont séparés par des espaces.
** - Gérer plusieurs espaces consécutifs.
** - Ne pas utiliser de fonction toute faite permettant
**   de compter les mots.
**
** OBJECTIFS :
**
** - Parcourir une chaîne caractère par caractère.
** - Comprendre comment détecter le début d'un mot.
** - Utiliser une variable compteur.
** - Utiliser une condition dans une boucle.
** - Réfléchir à l'état précédent d'un caractère.
** - Améliorer ton raisonnement algorithmique.
**
** QUESTIONS À TE POSER :
**
** - Comment savoir qu'un mot commence ?
** - Que se passe-t-il lorsqu'on rencontre un espace ?
** - Si je rencontre trois espaces à la suite,
**   dois-je compter trois mots ?
** - Comment éviter de compter plusieurs fois le même mot ?
** - Que dois-je faire si la phrase commence par des espaces ?
** - Que dois-je faire si la phrase se termine par des espaces ?
**
** EXEMPLES À TESTER :
**
**     "Bonjour tout le monde"
**     → 4 mots
**
**     "Bonjour   tout   le monde"
**     → 4 mots
**
**     "Bonjour"
**     → 1 mot
**
**     "Bonjour tout"
**     → 2 mots
**
**     "   Bonjour   tout   "
**     → 2 mots
**
** BONUS :
**
** Gère également les tabulations '\t' comme séparateurs
** entre les mots.
**
** IMPORTANT POUR LA PISCINE :
**
** Ne cherche pas directement la correction.
**
** Essaie d'abord de réfléchir à cette idée :
**
**     Est-ce que je suis actuellement dans un mot
**     ou en dehors d'un mot ?
**
** Cette réflexion est plus importante que le code lui-même.
*/