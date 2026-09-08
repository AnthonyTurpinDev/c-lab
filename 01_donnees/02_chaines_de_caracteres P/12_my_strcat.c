/*
** EXERCICE : Recréer strcat
**
** CONSIGNE :
**
** Crée ta propre fonction :
**
**     char *my_strcat(char *dest, char *src)
**
** Cette fonction doit ajouter le contenu de `src`
** à la fin de la chaîne `dest`.
**
** Exemple :
**
**     dest = "Hello "
**     src  = "World"
**
** Après l'appel de la fonction :
**
**     dest = "Hello World"
**
** RÉSULTAT ATTENDU :
**
**     Hello World
**
** CONTRAINTES :
**
** - La fonction doit s'appeler my_strcat.
** - Elle doit prendre deux paramètres :
**
**       char *dest
**       char *src
**
** - Elle doit retourner un char *.
** - Ne pas utiliser strcat().
** - Ne pas utiliser de fonction de concaténation
**   de chaînes.
** - Parcourir `dest` jusqu'à son '\0'.
** - Puis parcourir `src` et copier ses caractères
**   à la suite de `dest`.
** - Ne pas oublier de terminer `dest` avec '\0'.
**
** IMPORTANT :
**
** Au départ :
**
**     dest = "Hello "
**
**     H e l l o   \0
**
**     src = "World"
**
**     W o r l d \0
**
** Après la concaténation :
**
**     H e l l o   W o r l d \0
**
** Tu dois donc :
**
**     1. Trouver la fin de `dest`.
**     2. Commencer à écrire `src` à cet endroit.
**     3. Copier tous les caractères de `src`.
**     4. Ajouter '\0' à la fin.
**
** OBJECTIFS :
**
** - Parcourir une chaîne.
** - Trouver la position de '\0'.
** - Copier une chaîne à la suite d'une autre.
** - Manipuler plusieurs indices.
** - Comprendre comment modifier un tableau de char.
** - Comprendre le fonctionnement de strcat().
**
** QUESTIONS À TE POSER :
**
** - Comment trouver la fin de `dest` ?
** - À quel indice dois-je commencer à copier `src` ?
** - Comment savoir quand `src` est terminé ?
** - Où dois-je placer le '\0' final ?
** - Pourquoi `dest` doit-il avoir suffisamment de place
**   pour contenir les deux chaînes ?
**
** TESTS À EFFECTUER :
**
**     dest = "Hello "
**     src  = "World"
**
**     dest = "Bonjour "
**     src  = "Anthony"
**
**     dest = "Epitech "
**     src  = "Piscine"
**
** BONUS :
**
** Essaie de réaliser l'exercice avec des pointeurs
** plutôt qu'avec des indices.
**
** IMPORTANT POUR LA PISCINE :
**
** Tu dois être capable de refaire cette fonction
** sans utiliser strcat() et sans regarder la correction.
*/