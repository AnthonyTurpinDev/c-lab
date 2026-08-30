# 05_outils_dev — Les outils qui distinguent un vrai développeur

Makefile, compilation, debugging, modularisation, Git. Tu apprendras le C à Epitech, mais les outils c'est ici qu'on les maîtrise.

---

## Progression

| Notion | Statut |
|--------|--------|
| Makefile | 🟡 |
| Debugging (gdb/valgrind) | 🔴 |
| Modularisation (.h, .c) | 🔴 |
| Git (commit, push, logs) | 🟡 |

---

## Parcours recommandé

1. **01_makefile/** — Règles, variables, compilation multi-fichiers, `clean`, `re`
2. **02_debugging/** — `gdb` (breakpoints, step, print), `valgrind` (fuites mémoire)
3. **03_modularisation/** — Séparer en `.h` (headers) et `.c` (implémentation), `#include` guards
4. **04_git/** — Initialiser un repo, commits, logs, `.gitignore`, branches

---

## Points clés

### Makefile
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c utils.c
OBJS = $(SRCS:.c=.o)
EXEC = mon_prog

$(EXEC): $(OBJS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

re: clean $(EXEC)
```

### gdb — Debugging interactif
```bash
gcc -g mon_prog.c -o mon_prog
gdb ./mon_prog
(gdb) break 10          # breakpoint à la ligne 10
(gdb) run               # lance le programme
(gdb) step              # pas à pas (entre dans les fonctions)
(gdb) next              # pas à pas (saute par-dessus les fonctions)
(gdb) print x           # affiche la valeur de x
(gdb) continue          # continue l'exécution
```

### valgrind — Détection de fuites mémoire
```bash
valgrind --leak-check=full --show-leak-kinds=all ./mon_prog
```

### Git — Versioning
```bash
git init                              # initialiser le repo
git add .                             # ajouter tous les fichiers
git commit -m "feat: premier exercice" # valider
git log                               # voir l'historique
git status                            # état actuel
```

---

## Conseil principal

**Ces outils sont obligatoires pour Epitech.** Maîtriser un Makefile et gdb te fera gagner des heures en Piscine. Les autres étudiants vont galérer à compiler et déboguer — pas toi.

---

## Ressources

- `man make`, `man gdb`, `man valgrind`
- [GNU Make Manual](https://www.gnu.org/software/make/manual/)
- [Git Book](https://git-scm.com/book/en/v2)