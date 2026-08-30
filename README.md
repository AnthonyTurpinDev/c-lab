# Lab.C — Laboratoire d'entraînement C

> Un système d'entraînement focalisé sur les fondamentaux du C, la programmation système et les méthodes de travail (Git, debugging, Makefile).

---

## Philosophie

**Lab.C n'est pas un dossier d'exercices. C'est un système d'entraînement.**

1. **La friction avant la solution** — Chaque exercice est d'abord une lutte. Comprendre pourquoi ça marche vaut mieux que 100 exercices résolus à moitié.
2. **La trace vaut plus que le code** — Ce qui compte : qu'est-ce que j'ai raté avant de réussir, et pourquoi je le ratais.
3. **La progression doit être lisible** — Ouvrir Lab.C dans 6 mois doit te permettre de comprendre en 2 minutes où tu en es.

---

## Navigation

- **[PROGRESS.md](PROGRESS.md)** — Tableau de bord central : statut de chaque notion (🔴 pas vu | 🟡 en cours | 🟢 maîtrisé)
- **[CONVENTIONS.md](CONVENTIONS.md)** — Règles de nommage, structure, Git
- **[docs/](docs/)** — Documentation, cheatsheets, journal d'entraînement

### Structure pédagogique

1. **[00_fondations/](00_fondations/)** — Syntaxe, compilation, types, conditions, boucles, fonctions
2. **[01_donnees/](01_donnees/)** — Tableaux, chaînes de caractères
3. **[02_memoire/](02_memoire/)** — Pointeurs, allocation dynamique
4. **[03_structures_de_donnees/](03_structures_de_donnees/)** — Structs, fichiers, listes chaînées
5. **[04_algorithmique/](04_algorithmique/)** — Récursivité, complexité, tri/recherche
6. **[05_outils_dev/](05_outils_dev/)** — Makefile, debugging (gdb/valgrind), modularisation, Git
7. **[06_epitech_prep/](06_epitech_prep/)** — Simulations piscine et katas chronométrés
8. **[07_projets/](07_projets/)** — Vrais petits projets complets

---

## Comment utiliser Lab.C

### Pour débuter

1. Consulte [PROGRESS.md](PROGRESS.md) pour voir où tu en es
2. Choisis une notion marquée 🔴 ou 🟡 dans l'ordre pédagogique
3. Travaille les exercices du dossier correspondant
4. Écris un `notes.md` honnête : ce qui a coincé, ce que tu as compris
5. Fais un commit Git propre

### Quand tu es bloqué

- Minimum 15-20 minutes de debugging autonome avec `gdb`/`valgrind` avant de demander de l'aide
- Nota l'erreur si elle se répète → elle peut aller dans `docs/erreurs_frequentes.md`

### Quand tu maîtrises une notion

- Marque-la 🟢 dans PROGRESS.md
- Envisage d'écrire une cheatsheet dans `docs/cheatsheets/`

---

## Dernière MAJ

- Créé : 2026-08-30
- Statut : Squelette initial, prêt pour les premiers exercices

Voir [docs/journal/](docs/journal/) pour le log détaillé d'entraînement.

Le dossier `playground/` est reserve aux essais locaux et n'est pas versionne.
