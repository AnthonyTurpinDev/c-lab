# Ressources de référence

Liens et ressources utiles pour Lab.C. À consulter quand tu as besoin d'une réponse rapide ou d'approfondir une notion.

---

## Programmation C — Bases

- **[C Reference (cppreference.com)](https://en.cppreference.com/w/c)** — Documentation complète du C standard
- **[K&R: The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language)** — La bible du C (si tu as accès à une copie)

---

## Mémoire et Pointeurs

- Tester tes hypothèses avec [Godbolt Compiler Explorer](https://godbolt.org/) (fais tourner du code C interactif)
- **Manual page** : `man malloc`, `man free`, `man gdb` (en terminal)

---

## Outils de debugging

### gdb
```bash
gdb ./mon_prog
(gdb) break main
(gdb) run
(gdb) print variable
(gdb) next / step
```

Ressource : `man gdb` ou [GDB documentation](https://sourceware.org/gdb/documentation/)

### valgrind
```bash
valgrind --leak-check=full ./mon_prog
```

Détecte les fuites mémoire et les accès invalides.

---

## Makefile

- **[GNU Make Manual](https://www.gnu.org/software/make/manual/)** — Documentation officielle (dense mais complète)
- Commandes de base :
  - `make` — compile
  - `make clean` — supprime les fichiers compilés
  - `make re` — reconstruit tout

---

## Git

- **[Git Book](https://git-scm.com/book/en/v2)** — Guide complet et gratuit
- Commandes essentielles :
  ```bash
  git init                    # initialiser un repo
  git add .                   # ajouter des fichiers au staging
  git commit -m "message"     # valider les changements
  git log                     # voir l'historique
  git push                    # envoyer sur GitHub (après config)
  ```

---

## Algorithmes et Complexité

- **[Big O Cheat Sheet](https://www.bigocheatsheet.com/)** — Visualisation des complexités
- Notation O(n) :
  - O(1) = constant (best case)
  - O(log n) = dichotomie, binary search
  - O(n) = boucle simple
  - O(n²) = boucles imbriquées
  - O(n!) = permutations (mauvais)

---

## Structures de données

### Listes chaînées
- Concept : chaque nœud pointe sur le suivant
- Opération recherche : O(n)
- Insertion/suppression au début : O(1)

### Arborescence
- À venir en `03_structures_de_donnees/04_avancees`

---

## Ressources Epitech

- Epitech Intranet (quand tu auras accès)
- Piscine documentation (fournie pendant la piscine)

---

## Notes personnelles

Ajoute ici des liens ou des ressources que tu as trouvées utiles.
