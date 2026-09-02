/*
** EXERCICE : Observation des adresses d'un tableau
**
** Écrire un programme en langage C qui affiche :
**
** - l'adresse du tableau ;
** - l'adresse de son premier élément ;
** - l'adresse de tableau + 1.
**
** EXEMPLE :
**
** Déclarer un tableau :
**
** int tableau[] = {10, 20, 30, 40};
**
** Le programme doit afficher les adresses correspondantes.
**
** EXEMPLE DE SORTIE :
**
** Adresse du tableau       : 0x7ffe1234
** Adresse du premier élément : 0x7ffe1234
** Adresse de tableau + 1   : 0x7ffe1238
**
** ATTENTION :
**
** Les adresses affichées seront différentes selon la machine
** et l'exécution du programme.
**
** CONTRAINTES :
**
** - Déclarer un tableau d'entiers.
** - Afficher l'adresse du tableau.
** - Afficher l'adresse du premier élément du tableau.
** - Afficher l'adresse obtenue avec tableau + 1.
** - Utiliser %p avec un cast en (void *) pour afficher
**   les adresses.
** - Ne pas modifier les valeurs du tableau.
**
** OBSERVATION À FAIRE :
**
** Comparer :
**
**     tableau
**     &tableau[0]
**     tableau + 1
**
** Observer notamment la différence entre l'adresse du premier
** élément et celle de tableau + 1.
**
** IMPORTANT :
**
** Pour cet exercice, comprendre pourquoi :
**
**     tableau
**
** et
**
**     &tableau[0]
**
** correspondent à la même adresse dans ce contexte.
**
** Puis observer que :
**
**     tableau + 1
**
** ne signifie pas "ajouter 1 octet", mais avancer d'un élément
** du type du tableau.
**
** NOTES :
**
** Après avoir exécuté le programme, créer un fichier notes.md
** dans le répertoire.
**
** Dans notes.md, expliquer avec vos propres mots :
**
** 1. Ce que vous observez entre tableau et &tableau[0].
** 2. Ce que représente tableau + 1.
** 3. Pourquoi l'adresse augmente de plusieurs octets.
** 4. Ce que cela vous apprend sur l'arithmétique des pointeurs.
**
** OBJECTIF :
**
** Comprendre concrètement la relation entre un tableau,
** son premier élément et les pointeurs.
**
** BONUS :
**
** - Afficher également &tableau[1].
** - Afficher tableau + 2.
** - Comparer les différentes adresses.
** - Refaire l'expérience avec un tableau de char et observer
**   la différence.
*/