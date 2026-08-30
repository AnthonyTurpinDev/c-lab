# 02_memoire — Pointeurs et allocation dynamique

Le domaine qui fait peur mais qui est fondamental en C. Comprendre comment fonctionne la mémoire.

---

## Progression

| Notion | Statut |
|--------|--------|
| Pointeurs (bases) | 🟡 |
| Pointeurs et tableaux | 🟡 |
| Allocation dynamique (malloc/free) | 🟡 |

---

## Parcours recommandé

1. **01_pointeurs/** — `&` (adresse), `*` (déréférence), pointeurs simples
2. **02_pointeurs_et_tableaux/** — Lien pointeur ↔ tableau, arithmétique des pointeurs
3. **03_allocation_dynamique/** — `malloc()`, `free()`, vérifier les erreurs, éviter les fuites mémoire

---

## Point clé

**Pointeurs = adresses en mémoire.** C'est abstrait au début, mais c'est la clé pour comprendre le C. Une fois qu'on a compris, tout devient clair.

Pièges courants :
- `*p++` n'est pas `(*p)++` (attention à la préséance des opérateurs)
- Oublier de vérifier si `malloc()` a échoué (retour NULL)
- Oublier de `free()` → fuites mémoire

---

## Debugging

**gdb** pour tracer l'exécution :
```bash
gcc -g mon_prog.c -o mon_prog   # compiler avec infos de debug
gdb ./mon_prog
(gdb) break main
(gdb) run
(gdb) print ptr                 # affiche l'adresse
(gdb) print *ptr                # affiche la valeur pointée
```

**valgrind** pour détecter les fuites :
```bash
valgrind --leak-check=full ./mon_prog
```

---

## Ressources

- `man malloc`, `man free`, `man gdb`
- Godbolt Compiler Explorer pour expérimenter : https://godbolt.org/
