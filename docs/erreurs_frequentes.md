# Erreurs fréquentes

Liste des erreurs qui reviennent plus d'une fois. À consulter avant de demander de l'aide.

---

## Pointeurs

### Confondre une valeur et une adresse

**Erreur** : Penser que `x` et `&x` représentent la même chose.

**Réalité** :

```text
x  → valeur de la variable
&x → adresse mémoire de la variable
```

**Correction** : Toujours identifier si je travaille avec la valeur ou avec l'adresse.

```c
int x = 25;

printf("%d\n", x);          // valeur
printf("%p\n", (void *)&x); // adresse
```

**Réflexe** :

> `&` → je récupère une adresse.

---

### Confondre `p` et `*p`

**Erreur** : Penser que le pointeur contient directement la valeur.

**Réalité** :

```text
p  → contient une adresse
*p → récupère la valeur située à cette adresse
```

**Correction** :

```c
int x = 25;
int *p = &x;

printf("%p\n", (void *)p); // adresse
printf("%d\n", *p);        // valeur
```

**Réflexe** :

> `p` = adresse
> `*p` = valeur à cette adresse

---

### Oublier `&` lors du passage d'une variable à une fonction

**Erreur** : Envoyer `x` alors que la fonction attend un pointeur.

```c
void double_value(int *n)
{
    *n = *n * 2;
}

int main(void)
{
    int x = 25;

    double_value(x); // FAUX
}
```

**Réalité** : La fonction attend une adresse (`int *`).

**Correction** :

```c
double_value(&x);
```

**Réflexe** :

> Si la fonction attend `int *`, je dois généralement lui transmettre une adresse avec `&`.

---

### Oublier `*` dans une fonction qui reçoit une adresse

**Erreur** : Déclarer le paramètre comme une variable normale alors que je veux recevoir une adresse.

```c
// FAUX
void double_value(int n)
{
    *n = *n * 2;
}
```

**Correction** :

```c
void double_value(int *n)
{
    *n = *n * 2;
}
```

**Réalité** : `int *n` indique que `n` est un pointeur vers un `int`.

**Réflexe** :

> Si ma fonction doit travailler avec l'adresse d'un `int`, le paramètre doit être `int *`.

---

### Faire un calcul sur l'adresse au lieu de la valeur

**Erreur** :

```c
void double_value(int *n)
{
    *n = n * 2;
}
```

**Réalité** :

```text
n  → adresse
*n → valeur
```

Je veux multiplier la valeur, pas l'adresse.

**Correction** :

```c
void double_value(int *n)
{
    *n = *n * 2;
}
```

**Réflexe** :

> Avant un calcul, vérifier si je travaille avec `n` ou `*n`.

---

### Confondre `&` et `*`

**Erreur** : Utiliser `&` et `*` au hasard parce que leur rôle n'est pas encore automatique.

**Réalité** :

```text
&x → adresse de x
*p → valeur située à l'adresse contenue dans p
```

**Réflexe** :

```text
& → aller chercher l'adresse

* → aller chercher la valeur à cette adresse
```

---

## Fonctions

### Ne pas suivre correctement le chemin de la donnée

**Erreur** : Se perdre entre `main`, la fonction et le pointeur.

Exemple :

```c
int x = 25;

double_value(&x);
```

Puis :

```c
void double_value(int *n)
{
    *n = *n * 2;
}
```

**Réalité** :

```text
main
 ↓
&x
 ↓
adresse de x
 ↓
n reçoit cette adresse
 ↓
*n permet d'accéder à x
 ↓
x est modifié
```

**Réflexe** :

Toujours suivre le chemin :

```text
VARIABLE
   ↓
ADRESSE
   ↓
POINTEUR
   ↓
VALEUR
```

---

# 📋 Tableau des erreurs à surveiller

| Erreur                                  | Pourquoi elle arrive                                         | Réflexe à prendre                                       |
| --------------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------- |
| Confondre `x` et `&x`                   | Valeur et adresse ne sont pas encore automatiques            | `x = valeur`, `&x = adresse`                            |
| Confondre `p` et `*p`                   | Je mélange le pointeur et la valeur pointée                  | `p = adresse`, `*p = valeur`                            |
| Oublier `&` dans un appel de fonction   | J'oublie que la fonction attend une adresse                  | Vérifier le type du paramètre                           |
| Oublier `*` dans `int *p`               | Syntaxe encore fragile                                       | Si je manipule une adresse d'un `int`, utiliser `int *` |
| Faire un calcul sur `p` au lieu de `*p` | Confusion entre adresse et valeur                            | Faire le calcul sur `*p`                                |
| Confondre `&` et `*`                    | Rôle des opérateurs encore fragile                           | `&` → adresse, `*` → valeur                             |
| Se perdre entre plusieurs fonctions     | Je ne suis pas encore automatique sur le chemin de la donnée | Suivre `variable → adresse → pointeur → valeur`         |

---

# 🧠 Réflexe avant de demander de l'aide

Avant de demander de l'aide sur un exercice avec des pointeurs, je dois vérifier :

```text
[ ] Est-ce que je veux une valeur ou une adresse ?
[ ] Est-ce que j'ai utilisé & au bon endroit ?
[ ] Est-ce que j'ai utilisé * au bon endroit ?
[ ] Est-ce que mon paramètre est bien un pointeur ?
[ ] Est-ce que je fais mon calcul sur la valeur ou sur l'adresse ?
[ ] Est-ce que je peux suivre le chemin de la variable jusqu'à la fonction ?
```

---

## ⚠️ Règle du fichier

Une erreur n'est ajoutée dans ce fichier que si elle **revient plusieurs fois** ou si elle devient un piège important dans mes exercices.

Le but n'est pas de lister toutes mes erreurs.

Le but est de construire progressivement une liste de mes **vrais pièges récurrents**.

---

## 🎯 Objectif

Avec le temps, cette liste doit devenir un réflexe :

> **Avant de demander de l'aide, je consulte mes erreurs fréquentes et je vérifie si je suis déjà tombé dans ce piège.**
