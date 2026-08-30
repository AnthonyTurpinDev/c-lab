# Erreurs fréquentes

Liste des erreurs qui reviennent plus d'une fois. À consulter avant de demander de l'aide.

---

## Pointeurs

### Confusion `*p++` vs `(*p)++`

**Erreur** : Penser que `*p++` incrémente la valeur pointée
**Réalité** : `*p++` incrémente le pointeur lui-même (équivalent à `*(p++)`)
**Correction** : Utiliser `(*p)++` pour incrémenter la valeur pointée

```c
// FAUX
int *p = &x;
*p++;  // incrémente p, pas x !

// BON
int *p = &x;
(*p)++;  // incrémente x
```

---

## Allocation mémoire

### Oublier de vérifier le retour de `malloc`

```c
// FAUX — si malloc échoue, ptr est NULL et le reste du code plante
int *ptr = malloc(sizeof(int) * 10);
ptr[0] = 42;

// BON
int *ptr = malloc(sizeof(int) * 10);
if (ptr == NULL) {
    printf("Erreur: malloc a échoué\n");
    return (1);
}
ptr[0] = 42;
```

### Fuites mémoire (oublier `free`)

```c
// FAUX — mémoire non libérée
void func(void) {
    int *ptr = malloc(10);
    printf("%d\n", *ptr);
}  // ptr n'est jamais freed !

// BON
void func(void) {
    int *ptr = malloc(10);
    printf("%d\n", *ptr);
    free(ptr);
}
```

---

## Boucles

### `j` ne se réinitialise pas dans les boucles imbriquées

```c
// FAUX — j ne revient pas à 0 à chaque ligne
for (int i = 0; i < 5; i++) {
    for (int j = i; j < 5; j++) {  // j part de i, pas 0 !
        printf("*");
    }
    printf("\n");
}

// BON
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i; j++) {  // j se reset bien à 0
        printf("*");
    }
    printf("\n");
}
```

---

## Compilation

### `-Wall -Wextra` non activés

Toujours compiler avec :
```bash
gcc -Wall -Wextra -Werror mon_prog.c -o mon_prog
```

Ignorer les warnings c'est laisser passer des bugs. Activé `-Werror` pour les forcer à disparaître.

---

## Git

### Commits vagues ("update", "fix")

Mauvais message :
```
commit a1b2c3d
Author: moi
Date:   2026-08-30
    update
```

Bon message :
```
commit a1b2c3d
Author: moi
Date:   2026-08-30
    feat(pointeurs): exercice inversion tableau
```

Le log Git est ton journal de travail. Des messages clairs c'est utile dans 6 mois.

---

## À ajouter

D'autres erreurs fréquentes seront ajoutées au fil du temps, au fur et à mesure qu'elles se répètent.

Une erreur n'est ajoutee ici que si elle revient plusieurs fois.

| Erreur | Pourquoi elle arrive | Reflexe a prendre |
| --- | --- | --- |
| Oublier de verifier `malloc` | On suppose que la memoire est toujours disponible | Tester le retour avant toute dereference |
| Confondre `*p++` et `(*p)++` | Priorite des operateurs mal memorisee | Ajouter les parentheses et lire l'expression pas a pas |