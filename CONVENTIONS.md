# CONVENTIONS.md — Règles du laboratoire

## Nommage

### Dossiers

- **Notion** : `NN_nom_en_minuscules` (ex: `00_fondations`, `01_donnees`)
- **Séance** : `AAAA-MM-JJ_sujet_court` (ex: `2026-09-03_boucles_imbriquees`)
- **Sous-notion** : `NN_domaine` (ex: `01_syntaxe_et_compilation`, `02_pointeurs_et_tableaux`)

### Fichiers source

- Format : `snake_case.c`
- Noms explicites, pas d'abréviations (ex: `inverser_chaine.c`, pas `ex1.c`)
- `README.md` pour chaque notion, `notes.md` pour chaque séance difficile

---

## Structure d'une séance

### Petits exercices (< 50 lignes)

Regroupe plusieurs fichiers `.c` dans un même dossier de séance plutôt qu'un dossier par exercice :

```
00_fondations/01_syntaxe_et_compilation/
├── hello_world.c
├── compilation_flags.c
└── notes.md
```

### Exercices plus importants (> 50 lignes ou structures de données)

Crée un dossier dédié avec :

```
2026-09-10_liste_chainee/
├── README.md      (énoncé, objectif, notions travaillées)
├── main.c
├── liste.c
├── liste.h
├── Makefile
└── notes.md        (ce qui a coincé, score 1-5, à refaire ou non)
```

---

## Code et compilation

**Toujours compiler sans warnings :**

```bash
gcc -Wall -Wextra -Werror mon_fichier.c -o mon_prog
```

- `-Wall` : tous les warnings
- `-Wextra` : warnings supplémentaires
- `-Werror` : traite les warnings comme des erreurs (t'y force)

**À faire avant tout :**
- Tester les cas limites (0, valeurs négatives, tableaux vides, etc.)
- Utiliser `gdb` ou `valgrind` pour déboguer, pas des `printf` partout
- Minimum 15-20 minutes de debugging autonome avant de demander de l'aide

---

## Git

**Un seul dépôt pour tout Lab.C** (pas un repo par exercice).

### Commits

- **Fréquence** : au minimum un commit par séance
- **Message** : `type(domaine): description courte`
  - Ex: `feat(pointeurs): exercice inversion tableau`
  - Ex: `fix(makefile): ajouter flag -Wall`
  - Ex: `docs(recursivite): écrire cheatsheet factorielle`

- **Types** : `feat` (nouvelle notion), `fix` (correctif), `docs` (documentation), `refactor` (restructuration)

### Bénéfice

Ton log Git devient un journal de travail : on voit ta régularité et ta progression. Utile pour un portfolio ou une candidature.

---

## Documentation et cheatsheets

### fichiers `notes.md`

Honnêtes et personnels. Exemple :

```markdown
# Séance 2026-09-03 : Boucles imbriquées

## Objectif
Faire les premiers triangles d'étoiles

## Ce qui a coiné
- J'ai oublié que `j` se reset à 0 dans la boucle interne
- J'ai écrit 3 versions avant de la voir

## Ce que j'ai compris
- L'ordre des boucles : boucle externe = les lignes, boucle interne = les colonnes
- Les accolades ne sont pas optionnelles (j'ai appris à la dure)

## Score (1-5)
3/5 — Je refais ça demain

## À refaire
Oui — triangles rectangles + triangles centrés
```

### Cheatsheets dans `docs/cheatsheets/`

Tu les écris toi-même **après avoir compris une notion**, pas copiées d'Internet. Format court :

```markdown
# Pointeurs — Cheatsheet

## Déclaration
```c
int *p;        // pointeur sur int
int **pp;      // pointeur sur pointeur
int *arr[10];  // tableau de pointeurs
```

## Opérateurs
- `&x` : adresse de x
- `*p` : valeur pointée par p

## Pièges courants
- `*p++ = (*p)++` ? NON, c'est `*(p++)` → incrémente p, pas la valeur pointée
```

---

## Erreurs à noter

Si tu fais la même erreur plus d'une fois → elle va dans `docs/erreurs_frequentes.md` avec un exemple de la correction.

---

## Debugging et tests

### gdb (pas de print debugging!)

```bash
gcc -g mon_fichier.c -o mon_prog    # compile avec symboles de debug
gdb ./mon_prog
(gdb) break main           # point d'arrêt
(gdb) run                  # lance le programme
(gdb) print variable_name  # affiche la valeur
(gdb) next                 # prochaine ligne
(gdb) step                 # entre dans une fonction
```

### valgrind (détecte les fuites mémoire)

```bash
valgrind --leak-check=full ./mon_prog
```

---

## Dernière mise à jour

- 2026-08-30 : Première version complète
