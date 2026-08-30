/*
** EXERCICE : Convertir une chaîne en majuscules et en minuscules
**
** Écrire un programme en langage C qui demande à l'utilisateur
** de saisir une chaîne de caractères.
**
** Le programme doit :
**
** - convertir la chaîne entièrement en majuscules ;
** - convertir la chaîne entièrement en minuscules.
**
** IMPORTANT :
**
** Ne pas utiliser les fonctions toupper() et tolower().
**
** Vous devez recréer vous-même leur fonctionnement.
**
** EXEMPLE :
**
** Entrée :
** Bonjour Tout Le Monde
**
** Sortie :
** MAJUSCULES : BONJOUR TOUT LE MONDE
** MINUSCULES : bonjour tout le monde
**
** RAPPEL :
**
** En ASCII :
**
** - Les lettres majuscules vont de 'A' à 'Z'.
** - Les lettres minuscules vont de 'a' à 'z'.
**
** Pour convertir une lettre minuscule en majuscule,
** il faut modifier sa valeur ASCII.
**
** Pour convertir une lettre majuscule en minuscule,
** il faut également modifier sa valeur ASCII.
**
** CONTRAINTES :
**
** - Déclarer un tableau de caractères pour stocker la chaîne.
** - Demander une chaîne à l'utilisateur.
** - Parcourir la chaîne caractère par caractère.
** - Détecter si un caractère est une lettre minuscule.
** - Détecter si un caractère est une lettre majuscule.
** - Convertir les lettres sans utiliser toupper() ou tolower().
** - Ne pas modifier les espaces, chiffres ou caractères spéciaux.
** - Afficher la chaîne en majuscules.
** - Afficher la chaîne en minuscules.
**
** OBJECTIF :
**
** Comprendre la représentation ASCII des caractères et apprendre
** à manipuler directement les caractères d'une chaîne.
**
** BONUS :
**
** - Créer une fonction my_toupper().
** - Créer une fonction my_tolower().
** - Utiliser ces fonctions pour convertir la chaîne.
** - Tester avec des chiffres, espaces et caractères spéciaux.
*/