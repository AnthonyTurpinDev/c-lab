# C-Lab

Laboratoire personnel de progression en C, organise comme un projet professionnel.
Chaque exercice doit etre compris, teste, relu et documente avant d'etre considere
termine.

## Progression

| Chapitre | Sujet | Etat |
| --- | --- | --- |
| 01 | Variables, types, `printf` | En cours |
| 02 | Conditions, `switch` | A faire |
| 03 | Boucles | A faire |
| 04 | Fonctions, recursion | Batch 6 + S10-S13 ajoutes |
| 05 | Pointeurs | S1-S4 ajoutes |
| 06 | Tableaux | Batch 7 + S6 ajoute |
| 07 | Chaines | Batch 7 + exo 43 ajoutes |
| 08 | Structures | S14-S17 ajoutes |
| 09 | Gestion memoire | Exos 44-45 + S5-S9 ajoutes |
| 10 | Fichiers et descripteurs | S18-S20 ajoutes |

## Regles de travail

1. Lire l'enonce et definir les cas limites avant de coder.
2. Ecrire une solution personnelle dans `exos/`.
3. Compiler avec `-Wall -Wextra -Werror` et tester les erreurs.
4. Comparer avec `solutions/` uniquement apres la tentative.
5. Noter le bilan dans `logs/` et archiver les corrections importantes dans `corrections/`.

## Commandes

```text
mingw32-make       # compilation du programme exemple
mingw32-make clean # suppression des artefacts de build
mingw32-make re    # reconstruction complete
```

Pour compiler un autre fichier :

```text
mingw32-make SRC=src/02_conditions/solutions/example.c
```

Le dossier `playground/` est reserve aux essais locaux et n'est pas versionne.
