# 03_structures_de_donnees — Structs, fichiers et listes chaînées

Organisation de données complexes et structures classiques.

---

## Progression

| Notion | Statut |
|--------|--------|
| Structures (struct) | 🟡 |
| Fichiers (fopen/fread/fwrite) | 🔴 |
| Listes chaînées | 🔴 |
| Structures avancées | 🔴 |

---

## Parcours recommandé

1. **01_structures/** — `struct`, champs, pointeurs vers structs, tableaux de structs
2. **02_fichiers/** — Lire/écrire des fichiers, `fopen()`, `fread()`, `fwrite()`, `fclose()`
3. **03_listes_chainees/** — Nœuds, insertion/suppression, parcours
4. **04_avancees/** — Piles, files, arbres (À ouvrir plus tard, pas de priorité immédiate)

---

## Points clés

### Structures
```c
struct Point {
    int x;
    int y;
};

struct Point p = {10, 20};
struct Point *pp = &p;
printf("%d\n", pp->x);  // -> pour accéder aux champs via pointeur
```

### Listes chaînées
```c
struct Node {
    int data;
    struct Node *next;
};
```

Une liste c'est une succession de nœuds. Chaque nœud pointe sur le suivant.

---

## Debugging

- Listes chaînées peuvent avoir des infinis boucles → utiliser gdb pour tracer
- Fuites mémoire courant → utiliser valgrind

---

## Ressources

- Voir `docs/erreurs_frequentes.md` pour les pièges courants avec les structures
