# 📚 CHECK-SHEET — RÈGLES DES FICHES DE SYNTHÈSE

## 🎯 Objectif

Les fichiers présents dans ce dossier sont des **fiches de synthèse personnelles**.

Une fiche est créée **après avoir travaillé et compris une notion**.

Elle sert à garder une trace de ce que j'ai appris, de la manière dont je l'ai compris et des erreurs que j'ai rencontrées.

---

## 🧠 Principe

Une fiche doit expliquer une notion **avec mes propres mots**.

Ce n'est pas un simple copier-coller d'un cours ou d'une documentation.

L'objectif est de pouvoir relire la fiche plus tard et me dire :

> **« Oui, je comprends ce que j'ai écrit et je sais pourquoi ça fonctionne. »**

---

# ✍️ Structure d'une fiche

Chaque fiche doit contenir les éléments suivants.

## 1. 🧠 Mes idées

Expliquer simplement :

* ce que j'ai compris ;
* comment fonctionne la notion ;
* à quoi elle sert ;
* comment je dois raisonner pour l'utiliser.

L'explication doit rester proche de **ma manière de parler et de réfléchir**.

---

## 2. 🔑 Syntaxe importante

Noter les syntaxes importantes que je dois connaître.

Exemple :

```c
int *p;
p = &x;
*p = 10;
```

La syntaxe doit être accompagnée d'une explication.

Je ne dois pas seulement apprendre à écrire :

```c
*p
```

Je dois savoir expliquer **ce que cela signifie et pourquoi je l'utilise**.

---

## 3. 💡 Exemples

Ajouter quelques exemples simples permettant de revoir rapidement la notion.

Les exemples doivent être courts et compréhensibles.

Ils doivent montrer **comment la notion fonctionne réellement**.

---

## 4. ⚠️ Mes erreurs classiques

Noter les erreurs que j'ai réellement faites pendant mes exercices.

Exemple :

```text
Je confonds parfois une adresse avec une valeur.

Je dois me rappeler :

x  → valeur
&x → adresse
p  → adresse
*p → valeur située à cette adresse
```

Les erreurs sont importantes.

Elles permettent de savoir **ce que je dois encore travailler**.

---

## 5. 🧩 Ma méthode de raisonnement

Expliquer les questions que je dois me poser pour résoudre un exercice.

Exemple :

```text
1. Qu'est-ce que je dois modifier ?
2. Est-ce que j'ai besoin de la valeur ou de l'adresse ?
3. Est-ce que ma fonction doit recevoir un pointeur ?
4. Où dois-je utiliser & ?
5. Où dois-je utiliser * ?
```

L'objectif est de développer des **automatismes de raisonnement**.

---

## 6. 🧪 Vérification

La fiche doit se terminer par une petite vérification.

Je dois pouvoir vérifier si je maîtrise réellement la notion.

```text
[ ] Je peux expliquer la notion sans regarder la fiche.
[ ] Je connais la syntaxe.
[ ] Je peux écrire un exemple seul.
[ ] Je connais mes erreurs classiques.
[ ] Je peux résoudre un exercice simple.
[ ] Je peux résoudre un exercice sans aide.
```

---

# 🚨 RÈGLE IMPORTANTE

Une fiche de synthèse ne doit **pas être créée avant la pratique**.

Le processus est :

```text
APPRENDRE
    ↓
PRATIQUER
    ↓
FAIRE DES ERREURS
    ↓
COMPRENDRE
    ↓
REFAIRE DES EXERCICES
    ↓
FAIRE LA SYNTHÈSE
    ↓
CRÉER LA CHECK-SHEET
```

La fiche représente donc **ce que j'ai réellement appris**.

Elle ne doit pas simplement représenter ce qu'un cours dit que je dois savoir.

---

# 🤖 RÔLE DE L'IA

Quand je demande de créer une fiche de synthèse, l'IA doit partir de :

* ce que j'ai travaillé ;
* mes exercices ;
* mes réussites ;
* mes difficultés ;
* mes erreurs ;
* mes explications personnelles ;
* mon niveau réel.

Elle doit transformer ces informations en une fiche :

* claire ;
* structurée ;
* simple à relire ;
* adaptée à mon niveau ;
* utile pour mes révisions.

L'IA ne doit **pas inventer** que je maîtrise une notion que je n'ai pas encore comprise.

Si une notion reste fragile, la fiche doit le signaler.

---

# 🧠 PAS DE FAUSSE MAÎTRISE

Une notion peut être :

* 🟢 **Maîtrisée**
* 🟡 **En cours d'acquisition**
* 🔴 **Encore difficile**

La fiche doit refléter mon niveau réel.

Par exemple :

```text
## 📊 Mon niveau

Compréhension : 🟢
Syntaxe        : 🟡
Logique        : 🟡
Automatismes   : 🟡
```

Le but n'est pas d'avoir une fiche parfaite.

Le but est d'avoir une fiche **honnête et utile**.

---

# 🎯 OBJECTIF FINAL

Le dossier `doc/check-sheet/` doit progressivement devenir **ma propre documentation C**.

Au fur et à mesure de ma préparation, chaque notion importante aura sa propre fiche.

Je dois pouvoir ouvrir une fiche quelques jours plus tard et retrouver rapidement :

> **Ce que je sais → comment ça fonctionne → comment l'écrire → mes erreurs → comment éviter de les refaire.**

---

# 📁 Organisation

Les fiches doivent être organisées par notion.

Exemple :

```text
doc/
└── check-sheet/
    ├── 01_variables.md
    ├── 02_conditions.md
    ├── 03_boucles.md
    ├── 04_fonctions.md
    ├── 05_tableaux.md
    ├── 06_pointeurs.md
    ├── 07_strings.md
    ├── 08_structures.md
    └── ...
```

Chaque nouvelle fiche est créée **après avoir suffisamment pratiqué la notion**.

---

# 🔥 RÈGLE FINALE

> **Je ne crée pas une fiche pour apprendre une notion.**
>
> **Je crée une fiche parce que j'ai travaillé, pratiqué, fait des erreurs et compris la notion.**

La fiche sert ensuite à :

**consolider → réviser → mémoriser → devenir autonome.**
