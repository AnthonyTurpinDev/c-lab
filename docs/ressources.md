# 📚 Ressources de référence

Liens, commandes et ressources utiles pour **Lab.C**.

Ce fichier regroupe les ressources que je peux consulter lorsque j'ai besoin de revoir rapidement une notion, de comprendre une erreur ou d'approfondir un sujet.

## 🎯 Objectif principal

Ma préparation pour la Piscine de septembre repose principalement sur :

```text
C
├── Syntaxe
├── Conditions
├── Boucles
├── Fonctions
├── Tableaux
├── Chaînes de caractères
├── Pointeurs
├── Allocation mémoire
└── Structures

Linux / Bash
├── Terminal
├── Navigation
├── Fichiers
├── Permissions
├── Commandes Linux
├── Pipes / redirections
├── Scripts Bash
└── Environnement de travail

Git / GitHub
├── Repository
├── add
├── commit
├── push
├── pull
├── branch
├── merge
└── résolution de conflits
```

---

# 🟢 1. Programmation C

## Documentation C

### C Reference — cppreference

Documentation de référence du langage C.

https://en.cppreference.com/w/c

À utiliser principalement pour :

* vérifier la syntaxe ;
* comprendre une fonction de la bibliothèque standard ;
* vérifier le comportement d'une fonction ;
* approfondir une notion.

⚠️ Je ne dois pas utiliser la documentation pour copier une solution.

Je dois d'abord essayer de comprendre et de résoudre l'exercice seul.

---

## C — The C Programming Language

**Kernighan & Ritchie — The C Programming Language**

https://en.wikipedia.org/wiki/The_C_Programming_Language

Référence historique importante du langage C.

---

# 🟡 2. Linux / Bash

## Terminal Linux

Je dois être capable de travailler confortablement dans un terminal.

### Commandes essentielles

```bash
pwd
ls
cd
mkdir
touch
cp
mv
rm
cat
less
head
tail
grep
find
man
```

### Fichiers et dossiers

```bash
mkdir dossier
touch fichier.c
cp fichier.c copie.c
mv fichier.c dossier/
rm fichier.c
rm -r dossier
```

### Navigation

```bash
pwd
ls
cd dossier
cd ..
cd ~
cd -
```

### Aide

```bash
man commande
```

Exemples :

```bash
man ls
man gcc
man malloc
man printf
```

---

## Permissions

Commandes à connaître :

```bash
chmod
chown
```

Comprendre notamment :

```text
r → read
w → write
x → execute
```

---

## Pipes et redirections

À connaître :

```bash
>
>>
<
|
```

Exemples :

```bash
ls > fichiers.txt
cat fichier.txt | grep "main"
```

Je dois comprendre ce que fait chaque opérateur et pas seulement apprendre les commandes par cœur.

---

# 🟠 3. Bash

Objectif : être capable d'écrire et de comprendre des scripts simples.

Exemple :

```bash
#!/bin/bash

echo "Hello World"
```

Notions à travailler :

* variables ;
* arguments ;
* conditions ;
* boucles ;
* fonctions ;
* exit codes ;
* permissions d'exécution.

Commandes utiles :

```bash
bash script.sh
chmod +x script.sh
./script.sh
```

---

# 🔵 4. Git

## Git Book

https://git-scm.com/book/en/v2

Guide complet et gratuit sur Git.

---

## Commandes essentielles

### Initialiser un repository

```bash
git init
```

### Vérifier l'état

```bash
git status
```

### Ajouter des fichiers

```bash
git add .
```

### Créer un commit

```bash
git commit -m "message"
```

### Voir l'historique

```bash
git log
```

### Envoyer les changements

```bash
git push
```

### Récupérer les changements

```bash
git pull
```

---

# 🟣 5. GitHub

Objectifs :

* comprendre la différence entre Git et GitHub ;
* créer un repository ;
* connecter un repository local à GitHub ;
* push un projet ;
* pull un projet ;
* comprendre les branches ;
* comprendre les conflits.

Commandes importantes :

```bash
git remote -v
git branch
git switch
git merge
git fetch
git pull
git push
```

---

# 🔴 6. Compilation C

## Compilation de base

```bash
gcc mon_programme.c -o mon_programme
```

Puis :

```bash
./mon_programme
```

---

## Compilation stricte

Je dois prendre l'habitude de compiler avec :

```bash
gcc -Wall -Wextra -Werror mon_programme.c -o mon_programme
```

### Signification

```text
-Wall
→ active beaucoup de warnings

-Wextra
→ active des warnings supplémentaires

-Werror
→ transforme les warnings en erreurs
```

Objectif :

> Ne pas ignorer les warnings. Comprendre pourquoi ils apparaissent.

---

# 🟤 7. Debugging

## GDB

Documentation :

https://sourceware.org/gdb/documentation/

Commandes de base :

```bash
gdb ./mon_programme
```

Puis :

```text
break main
run
next
step
print variable
continue
quit
```

Objectif :

Comprendre ce que fait réellement mon programme lorsqu'il ne fonctionne pas comme prévu.

---

## Valgrind

Commande utile pour la mémoire :

```bash
valgrind --leak-check=full ./mon_programme
```

À utiliser particulièrement lorsque je travaille sur :

* `malloc` ;
* `free` ;
* pointeurs ;
* tableaux dynamiques ;
* structures dynamiques.

---

# 🧠 8. Pointeurs et mémoire

Ressource utile pour tester rapidement du code :

## Compiler Explorer — Godbolt

https://godbolt.org/

Permet de compiler et d'observer le comportement du code.

Je peux l'utiliser pour vérifier une hypothèse, mais je dois d'abord essayer de comprendre le problème moi-même.

---

# 🧰 9. Makefile

## GNU Make Manual

https://www.gnu.org/software/make/manual/

Commandes importantes :

```bash
make
make clean
make re
```

Objectif pour la Piscine :

Comprendre comment automatiser la compilation d'un programme C.

---

# 📖 10. Algorithmes

## Big O Cheat Sheet

https://www.bigocheatsheet.com/

Notions importantes :

```text
O(1)      → constant
O(log n)  → logarithmique
O(n)      → linéaire
O(n²)     → quadratique
O(n!)     → factoriel
```

Pour ma préparation actuelle, la priorité reste cependant :

```text
C + Linux/Bash + Git
```

avant d'approfondir la complexité.

---

# 🧩 11. Ressources Epitech

À consulter lorsque j'y ai accès :

* Intranet Epitech ;
* documentation de la Piscine ;
* consignes des exercices ;
* normes de code ;
* outils utilisés pendant la Piscine ;
* ressources fournies par les intervenants.

⚠️ Les consignes officielles Epitech passent avant les ressources générales trouvées sur Internet.

---

# 📝 12. Mes ressources personnelles

Cette partie sert à ajouter progressivement les ressources qui m'ont réellement aidé.

## C

```text
À compléter au fur et à mesure.
```

## Linux / Bash

```text
À compléter au fur et à mesure.
```

## Git / GitHub

```text
À compléter au fur et à mesure.
```

---

# 🚨 Règle d'utilisation des ressources

Je ne dois pas chercher une solution dès que je bloque.

Mon ordre de travail doit être :

```text
1. Lire l'exercice
       ↓
2. Réfléchir seul
       ↓
3. Essayer
       ↓
4. Identifier précisément mon blocage
       ↓
5. Relire mes check-sheets
       ↓
6. Consulter une ressource si nécessaire
       ↓
7. Réessayer seul
       ↓
8. Demander de l'aide si je reste bloqué
```

L'objectif n'est pas seulement de réussir l'exercice.

L'objectif est de devenir **autonome**.

---

# 🎯 Priorités de préparation — Piscine septembre

## PRIORITÉ 1 — C

```text
[ ] Variables / types / opérateurs
[ ] Conditions
[ ] Boucles
[ ] Fonctions
[ ] Tableaux
[ ] Strings
[ ] Pointeurs
[ ] Structures
[ ] malloc / free
[ ] Compilation
[ ] Debugging
```

## PRIORITÉ 2 — Linux / Bash

```text
[ ] Navigation terminal
[ ] Gestion fichiers
[ ] Permissions
[ ] Commandes essentielles
[ ] Pipes
[ ] Redirections
[ ] grep / find
[ ] man
[ ] Bash basique
```

## PRIORITÉ 3 — Git / GitHub

```text
[ ] git init
[ ] git status
[ ] git add
[ ] git commit
[ ] git log
[ ] git push
[ ] git pull
[ ] branches
[ ] merge
[ ] conflits
```

---

# 🔥 Principe final

Les ressources sont là pour **m'aider à comprendre**, pas pour remplacer la pratique.

> **Je pratique d'abord. Je consulte ensuite. Je comprends. Puis je réessaie seul.**

Mon objectif pour la Piscine est de devenir suffisamment autonome pour pouvoir résoudre un problème, chercher pourquoi mon code ne fonctionne pas et corriger mes erreurs sans dépendre constamment d'une solution toute faite.
