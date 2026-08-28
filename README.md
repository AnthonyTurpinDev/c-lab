# Lab.C

Lab.C est un laboratoire d'entrainement focalise sur le C, les fondamentaux
systeme et les methodes de travail utiles a Epitech. Le but n'est pas
d'accumuler des fichiers : chaque exercice doit etre compris, teste, relu et
documente.

## Parcours

Le parcours pedagogique est organise en blocs :

1. `00_fondations/` : syntaxe, types, conditions, boucles et fonctions.
2. `01_donnees/` : tableaux et chaines de caracteres.
3. `02_memoire/` : pointeurs et allocation dynamique.
4. `03_structures_de_donnees/` : structures, fichiers et listes chainees.
5. `04_algorithmique/` : recursion, complexite, tri et recherche.
6. `05_outils_dev/` : Makefile, debugging, modularisation et Git.
7. `06_epitech_prep/` : simulations et katas chronometres.
8. `07_projets/` : projets complets, ouverts lorsque les bases sont solides.

Les exercices deja realises sont conserves dans `src/`. Ils constituent
l'historique de travail actuel ; les nouvelles seances suivront progressivement
la structure ci-dessus.

## Tableau de bord

Consulter [PROGRESS.md](PROGRESS.md) pour savoir quoi travailler ensuite et
[CONVENTIONS.md](CONVENTIONS.md) pour les regles du laboratoire.

Pour reprendre progressivement et t'entrainer avant la Piscine, suivre le
[parcours d'exercices](src/11_piscine/README.md).

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
