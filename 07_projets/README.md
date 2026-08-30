# 07_projets — Vrais petits projets complets

Des petits projets qui assemblent plusieurs notions. À commencer une fois que tu maîtrises les structures de données (03_structures_de_donnees).

---

## Progression

| Projet | Statut | Notions utilisées |
|--------|--------|-------------------|
| — | 🔴 | — |

---

## Exemples de projets

**Mini-shell** : exécution de commandes simples (fork, exec, gestion de signaux — attention, c'est avancé)

**Jeu en terminal** : 2048, morpion, mastermind

**Parser/Calculatrice** : analyser et évaluer des expressions mathématiques

**Gestionnaire de fichiers** : lire, écrire, modifier des fichiers structurés

---

## Structure d'un projet

```
mon_projet/
├── README.md         (description, objectif, how to build)
├── Makefile
├── src/
│   ├── main.c
│   ├── mon_module.c
│   └── mon_module.h
├── tests/           (optionnel mais recommandé)
└── notes.md         (ce que tu as appris, difficultés, pièges)
```

---

## Important

**Ne commence pas avant d'avoir compris** :
- Structures de données (structs, listes chaînées)
- Pointeurs et allocation mémoire
- Modularisation (séparation `.h` / `.c`)
- Makefile et Git

Faire un "projet" sans ces bases, c'est coder par superstition. Attends, maîtrise les fondamentaux, puis reviens ici.

---

## Conseils

1. Commence simple (morpion plutôt que jeu complexe)
2. Fais un Makefile dès le début
3. Commit régulièrement
4. Écris des `notes.md` honnêtes quand tu finaux

