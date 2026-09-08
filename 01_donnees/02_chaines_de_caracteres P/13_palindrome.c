/*
** EXERCICE : Vérifier un palindrome
**
** CONSIGNE :
**
** Demande à l'utilisateur d'entrer une chaîne de caractères.
**
** Puis détermine si cette chaîne est un palindrome.
**
** Un palindrome est une chaîne qui se lit de la même façon
** de gauche à droite et de droite à gauche.
**
** EXEMPLES :
**
**     kayak     → palindrome
**     radar     → palindrome
**     bonjour   → pas palindrome
**
** RÉSULTAT ATTENDU :
**
**     kayak est un palindrome.
**
** Pour une chaîne qui n'est pas un palindrome :
**
**     bonjour n'est pas un palindrome.
**
** RÉFLEXION :
**
** Tu peux comparer les caractères deux par deux :
**
**     premier caractère ↔ dernier caractère
**     deuxième caractère ↔ avant-dernier
**     troisième caractère ↔ troisième en partant de la fin
**     ...
**
** Exemple avec "kayak" :
**
**     k ↔ k
**     a ↔ a
**     y ↔ y
**
** Tous les caractères correspondent :
**
**     "kayak" est un palindrome.
**
** CONTRAINTES :
**
** - Utiliser un tableau de char.
** - Utiliser une boucle.
** - Parcourir la chaîne sans utiliser une fonction
**   toute faite pour vérifier les palindromes.
** - Utiliser '\0' pour déterminer la fin de la chaîne
**   ou utiliser ta propre logique pour trouver sa longueur.
** - Comparer les caractères situés aux deux extrémités.
**
** OBJECTIFS :
**
** - Parcourir une chaîne dans les deux directions.
** - Manipuler les indices d'un tableau.
** - Comparer deux caractères.
** - Utiliser une variable permettant de mémoriser
**   si la chaîne est un palindrome.
** - Améliorer ton raisonnement algorithmique.
**
** QUESTIONS À TE POSER :
**
** - Comment trouver le dernier caractère de la chaîne ?
** - Si j'ai l'indice du premier caractère, quel est
**   l'indice du dernier ?
** - Comment faire pour avancer depuis le début
**   et reculer depuis la fin ?
** - Que dois-je faire dès que deux caractères
**   sont différents ?
** - Jusqu'où dois-je faire mes comparaisons ?
**
** CONTRAINTES SUPPLÉMENTAIRES :
**
** Pour commencer, considère uniquement :
**
** - les lettres minuscules ;
** - aucune espace ;
** - aucun caractère spécial.
**
** BONUS :
**
** Fais en sorte que le programme fonctionne également
** avec des chaînes contenant des majuscules.
**
** BONUS 2 :
**
** Essaie de résoudre l'exercice sans créer
** une deuxième chaîne.
**
** IMPORTANT POUR LA PISCINE :
**
** Ne cherche pas directement la correction.
** Essaie d'abord de construire ton algorithme sur papier.
**
** Exemple :
**
**     "kayak"
**
**     début → k
**     fin   → k
**
**     début → a
**     fin   → a
**
**     début → y
**
** Puis détermine toi-même quand la boucle doit s'arrêter.
*/