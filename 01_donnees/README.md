# 01_donnees — Tableaux et chaînes de caractères

Comment manipuler des collections d'éléments et des chaînes de caractères en C.

---

## Progression

| Notion | Statut |
|--------|--------|
| Tableaux | 🟡 |
| Chaînes de caractères | 🟡 |

---

## Parcours recommandé

1. **01_tableaux/** — Déclaration, indexation, boucles sur tableaux, tableaux 2D
2. **02_chaines_de_caracteres/** — Chaînes, `strlen()`, manipulation, `strcpy()`, `strcat()`

---

## Point clé

Un tableau est un pointeur sur le premier élément. Comprendre cette dualité (tableau ↔ pointeur) est fondamental pour la suite (pointeurs et allocation dynamique).

---

## Conseils

- Toujours initialiser les tableaux ou vérifier les index avant d'accéder
- Les chaînes en C sont des tableaux de `char` terminés par `\0`
- Utiliser `strcpy()` avec prudence (risque de débordement) → préférer des fonctions plus sûres

---

## Ressources

- `man strlen`, `man strcpy`, `man strcat`, etc.
