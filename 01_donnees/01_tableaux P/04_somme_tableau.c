/*
** EXERCICE : Somme d'un tableau
**
** FICHIER : 04_somme_tableau.c
**
** OBJECTIF :
**
** Apprendre à parcourir un tableau avec une boucle
** et à calculer la somme de tous ses éléments.
**
**
** ============================================
** CONSIGNE
** ============================================
**
** Déclare le tableau suivant :
**
**     int tab[5] = {1, 2, 3, 4, 5};
**
**
** Parcours le tableau avec une boucle et calcule
** la somme de tous ses éléments.
**
**
** RÉSULTAT ATTENDU :
**
**     Somme = 15
**
**
** ============================================
** EXPLICATION
** ============================================
**
** Tu dois additionner progressivement les éléments :
**
**     0 + 1 + 2 + 3 + 4 + 5
**
** Ton programme doit parcourir :
**
**     tab[0]
**     tab[1]
**     tab[2]
**     tab[3]
**     tab[4]
**
**
** ============================================
** CONTRAINTES
** ============================================
**
** - Utilise une boucle while.
** - Utilise une variable d'indice.
** - Utilise une variable somme.
** - La somme doit commencer à 0.
** - Utilise tab[indice] pour accéder aux éléments.
** - Affiche le résultat avec printf().
**
**
** ⚠️ INTERDICTION :
**
** Ne calcule pas directement :
**
**     1 + 2 + 3 + 4 + 5
**
** Tu dois parcourir le tableau avec une boucle.
**
**
** ============================================
** RÉFLEXION
** ============================================
**
** Même principe que l'exercice 07_somme.c :
**
**     une variable somme
**     +
**     une boucle
**     +
**     un accumulateur
**
** Mais cette fois, au lieu d'additionner :
**
**     1, 2, 3, ... N
**
** tu dois additionner :
**
**     tab[0], tab[1], tab[2], ... tab[4]
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle doit être la valeur initiale de somme ?
**
** 2. Quelle valeur doit avoir l'indice au départ ?
**
** 3. Comment ajouter tab[indice] à somme ?
**
** 4. Quand dois-tu arrêter la boucle ?
**
** 5. Comment afficher "Somme = 15" ?
**
**
** 🔥 OBJECTIF PISCINE :
**
** Comprendre le principe d'accumulation dans un tableau :
**
**     somme = somme + tab[indice]
**
**
** Cette logique sera très importante pour les exercices
** plus complexes sur les tableaux.
*/