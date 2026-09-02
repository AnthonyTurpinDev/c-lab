/*
** EXERCICE : Détecter une fuite mémoire avec Valgrind
**
** Écrire un petit programme utilisant malloc().
**
** Dans un premier temps, introduire volontairement
** une fuite mémoire.
**
** EXEMPLE :
**
** - Allouer une zone mémoire avec malloc().
** - Utiliser cette zone.
** - Oublier volontairement d'appeler free().
**
** Compiler le programme puis l'exécuter avec Valgrind.
**
** OBJECTIF :
**
** Identifier la fuite mémoire signalée par Valgrind.
**
** APRÈS L'OBSERVATION :
**
** - Corriger le programme.
** - Ajouter le free() manquant.
** - Relancer Valgrind.
** - Vérifier que la fuite a disparu.
**
** NOTES :
**
** Créer un fichier notes.md dans ce répertoire.
**
** Dans notes.md, expliquer :
**
** 1. Quelle allocation a provoqué la fuite.
** 2. Pourquoi la mémoire n'a pas été libérée.
** 3. Comment Valgrind a signalé le problème.
** 4. Comment tu as corrigé le programme.
** 5. Ce que signifie "definitely lost".
**
** CONTRAINTES :
**
** - Utiliser malloc().
** - Vérifier les allocations.
** - Utiliser Valgrind pour analyser le programme.
** - Corriger ensuite la fuite.
**
** OBJECTIF :
**
** Prendre l'habitude de vérifier la gestion de la mémoire
** et de ne jamais laisser volontairement une allocation
** non libérée dans un programme final.
*/