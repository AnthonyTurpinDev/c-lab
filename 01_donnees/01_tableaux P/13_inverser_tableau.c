/*
** EXERCICE : Inverser un tableau
**
** FICHIER : 13_inverser_tableau.c
**
** OBJECTIF :
**
** Apprendre à modifier directement les éléments
** d'un tableau en échangeant leurs valeurs.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Déclare le tableau suivant :
**
**     int tab[] = {1, 2, 3, 4, 5};
**
**
** Transforme réellement le tableau pour obtenir :
**
**     5
**     4
**     3
**     2
**     1
**
**
** Puis affiche le tableau après inversion.
**
**
** ============================================
** CONTRAINTE IMPORTANTE
** ============================================
**
** ⚠️ Tu dois réellement modifier le tableau.
**
** Tu ne dois PAS simplement afficher les valeurs
** dans l'ordre inverse.
**
** Après ton traitement, le tableau doit réellement
** contenir :
**
**     {5, 4, 3, 2, 1}
**
**
** ============================================
** MÉTHODE
** ============================================
**
** Utilise deux indices :
**
**     premier
**     dernier
**
**
** Au départ :
**
**     premier → premier élément
**     dernier → dernier élément
**
**
** Tu dois échanger leurs valeurs.
**
** Puis rapprocher les deux indices :
**
**     premier avance
**     dernier recule
**
**
** Continue jusqu'à ce que les deux indices
** se rencontrent ou se dépassent.
**
**
** ============================================
** EXEMPLE
** ============================================
**
** Départ :
**
**     {1, 2, 3, 4, 5}
**
** Premier échange :
**
**     1 ↔ 5
**
** Résultat :
**
**     {5, 2, 3, 4, 1}
**
**
** Deuxième échange :
**
**     2 ↔ 4
**
** Résultat :
**
**     {5, 4, 3, 2, 1}
**
**
** Le tableau est maintenant inversé.
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise deux indices.
** - Utilise une variable temporaire pour effectuer
**   les échanges.
** - Modifie réellement les valeurs du tableau.
** - Affiche le tableau après inversion.
**
**
** ⚠️ INTERDICTION :
**
** Ne crée pas un deuxième tableau contenant
** les valeurs inversées.
**
** L'objectif est de modifier le tableau original.
**
**
** ============================================
** QUESTIONS À TE POSER
** ============================================
**
** 1. Quelle valeur doit avoir "premier" au départ ?
**
** 2. Quelle valeur doit avoir "dernier" au départ ?
**
** 3. Comment échanger deux valeurs sans en perdre une ?
**
** 4. Comment faire avancer "premier" ?
**
** 5. Comment faire reculer "dernier" ?
**
** 6. Quelle condition doit arrêter la boucle ?
**
**
** 💡 RAPPEL :
**
** Pour échanger deux valeurs, réfléchis à l'utilité
** d'une variable temporaire.
**
**
** ============================================
** 🔥 OBJECTIF PISCINE
** ============================================
**
** Comprendre qu'on peut modifier directement
** les éléments d'un tableau :
**
**     tab[indice]
**
**
** et apprendre la logique :
**
**     premier ↔ dernier
**     premier++ 
**     dernier--
**
** Cette logique est très importante pour les algorithmes
** de manipulation de tableaux.
*/