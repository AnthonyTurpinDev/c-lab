/*
** EXERCICE : Exercice type Piscine
**
** FICHIER : 15_exercice_type_piscine.c
**
** OBJECTIF :
**
** Combiner trois notions :
**
**     - fonction
**     - boucle while
**     - condition
**
** ============================================
** CONSIGNE
** ============================================
**
** Crée une fonction :
**
**     int is_even(int n)
**
** Cette fonction doit déterminer si un nombre est pair.
**
** Ensuite, dans main() :
**
** 1. Demande un nombre N à l'utilisateur.
**
** 2. Parcours tous les nombres de 0 à N
**    avec une boucle while.
**
** 3. Pour chaque nombre, utilise is_even().
**
** 4. Affiche uniquement les nombres pairs.
**
**
** ============================================
** EXEMPLE
** ============================================
**
** Si l'utilisateur entre :
**
**     10
**
** Le programme doit afficher :
**
**     0
**     2
**     4
**     6
**     8
**     10
**
**
** ============================================
** CONTRAINTES IMPORTANTES
** ============================================
**
** Tu dois avoir une vraie fonction :
**
**     int is_even(int n)
**
** Dans ta boucle, tu dois appeler cette fonction.
**
** Tu ne dois PAS faire toute la logique directement
** dans main().
**
**
** La logique doit être organisée ainsi :
**
**     main
**      |
**      |-- demander N
**      |
**      |-- boucle de 0 à N
**             |
**             |-- appeler is_even()
**             |
**             |-- afficher si le nombre est pair
**
**
** ============================================
** 💡 RÉFLEXION
** ============================================
**
** Avant de coder, demande-toi :
**
** 1. Que doit retourner is_even() si n est pair ?
**
** 2. Comment savoir si un nombre est pair ?
**
** 3. Quelle variable utiliser pour parcourir
**    les nombres de 0 à N ?
**
** 4. Quelle condition utiliser dans la boucle ?
**
** 5. Quand dois-tu appeler is_even() ?
**
** 6. Quand dois-tu afficher le nombre ?
**
**
** ============================================
** 🎯 OBJECTIF PISCINE
** ============================================
**
** Tu dois comprendre le rôle de chaque élément :
**
**     fonction   → détermine si le nombre est pair
**     boucle     → parcourt les nombres
**     condition  → vérifie le résultat
**     printf     → affiche le nombre
**
**
** BONUS :
**
** Modifie ensuite ton programme pour afficher uniquement
** les nombres impairs.
*/