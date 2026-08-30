# 04_algorithmique — Récursivité, complexité, tri et recherche

Algorithmes classiques et analyse de performance.

---

## Progression

| Notion | Statut |
|--------|--------|
| Récursivité | 🟡 |
| Complexité (O(n), O(log n)...) | 🔴 |
| Tri et recherche | 🔴 |

---

## Parcours recommandé

1. **01_recursivite/** — Cas de base, cas récursif, pile d'appels
2. **02_complexite/** — Notation O(n), analyser l'efficacité d'un algorithme
3. **03_tri_et_recherche/** — Recherche linéaire, dichotomique, tri par insertion, quick sort

---

## Points clés

### Récursivité
Toute fonction récursive a besoin :
1. **Cas de base** : quand s'arrêter (sinon boucle infinie)
2. **Cas récursif** : appel à soi-même avec un problème plus petit

```c
int factorial(int n) {
    if (n <= 1)           // cas de base
        return (1);
    return (n * factorial(n - 1));  // cas récursif
}
```

### Complexité
- O(1) : constant
- O(log n) : dichotomie (très efficace)
- O(n) : boucle simple
- O(n²) : boucles imbriquées
- O(n!) : combinaisons (à éviter)

### Tri et recherche
- **Recherche linéaire** : O(n), fonctionne toujours
- **Recherche dichotomique** : O(log n), nécessite un tableau trié
- **Tri par insertion** : O(n²), simple mais lent
- **Quick sort** : O(n log n) en moyenne, rapide

---

## Debugging

- Les récursions font des segfaults si le cas de base est oublié → vérifier avec gdb
- Tester les algo avec des petites entrées avant de les généraliser

---

## Ressources

- [Big O Cheat Sheet](https://www.bigocheatsheet.com/)
- Voir `docs/ressources.md` pour plus de liens
