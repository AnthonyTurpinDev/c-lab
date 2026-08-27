# Conventions

## Nommage

- Dossiers de notions : `NN_nom_en_minuscules`.
- Dossiers de seance : `AAAA-MM-JJ_sujet_court`.
- Fichiers source : `snake_case.c` avec un nom explicite.

## Une seance

Une petite seance peut contenir plusieurs fichiers `.c`. Un exercice plus
important contient au minimum `README.md`, `main.c`, `Makefile` et `notes.md`.
Les notes indiquent ce qui a bloque, les tests realises et ce qui est a refaire.

## Code et outils

- Compiler avec `-Wall -Wextra -Werror`.
- Tester les cas limites avant de consulter une correction.
- Utiliser Git des les premiers exercices, avec au moins un commit par seance.
- Avant de demander de l'aide, chercher l'erreur pendant 15 a 20 minutes et
  noter les erreurs recurrentes dans `docs/erreurs_frequentes.md`.

## Organisation actuelle

`src/` conserve les exercices historiques et leur couple `exos/solutions/`.
Les nouveaux travaux suivent l'architecture de `README.md` sans deplacer les
anciens fichiers uniquement pour renommer des dossiers.