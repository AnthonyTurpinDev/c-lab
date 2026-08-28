# 11 - Parcours Piscine

Parcours progressif pour reprendre le C et combiner les notions avant un projet.
Travaille chaque exercice dans `exos/`, puis place une version relue dans
`solutions/`. Ne consulte pas une correction avant d'avoir compile, teste et
note l'erreur rencontree.

## Regle de travail

Compiler chaque programme avec :

```text
gcc -Wall -Wextra -Werror fichier.c -o programme
```

Pour chaque exercice, noter dans `notes.md` : ce qui etait attendu, les tests
realises, les erreurs du compilateur et ce qui reste a revoir.

## Niveau 0 - Reactivation express

- [ ] 0.1 Afficher `Hello World!`.
- [ ] 0.2 Afficher les trois lignes `Bonjour`, `Je reprends le C`, `Objectif : Piscine`.
- [ ] 0.3 Creer `main.c`, le compiler puis l'executer.
- [ ] 0.4 Provoquer puis corriger une variable non declaree, une `;` manquante, une mauvaise accolade et un mauvais type.

## Notion 1 - Variables et types

- [ ] 1.1 Declarer et afficher un entier.
- [ ] 1.2 Declarer et afficher un `char`.
- [ ] 1.3 Declarer un `float`.
- [ ] 1.4 Declarer un `double`.
- [ ] 1.5 Creer et afficher `age`, `height` et `initial`.
- [ ] 1.6 Echanger deux variables avec une variable temporaire.
- [ ] 1.7 Calculer somme, difference, produit, quotient et reste.
- [ ] 1.8 Convertir des euros en dollars.
- [ ] 1.9 Convertir Celsius en Fahrenheit.
- [ ] 1.10 Calculer la moyenne de trois nombres.

## Notion 2 - Operateurs

- [ ] 2.1 Pair ou impair.
- [ ] 2.2 Positif, negatif ou zero.
- [ ] 2.3 Plus grand de deux nombres.
- [ ] 2.4 Plus petit de trois nombres.
- [ ] 2.5 Divisible par 3.
- [ ] 2.6 Divisible par 3 et 5.
- [ ] 2.7 Divisible par 3 ou 5.
- [ ] 2.8 Nombre compris entre 10 et 20.
- [ ] 2.9 Calculatrice simple pour `10 + 5`.
- [ ] 2.10 Annee bissextile.

## Notions 3 et 4 - Conditions et switch

- [ ] 3.1 Majeur ou mineur.
- [ ] 3.2 Pair ou impair avec `if`.
- [ ] 3.3 Maximum de deux nombres.
- [ ] 3.4 Maximum de trois nombres.
- [ ] 3.5 Minimum de trois nombres.
- [ ] 3.6 Note vers mention : echec, passable, assez bien, bien, tres bien.
- [ ] 3.7 Verifier un mot de passe.
- [ ] 3.8 Verifier un login et un mot de passe.
- [ ] 3.9 Simuler un distributeur.
- [ ] 3.10 Appliquer une reduction de 0 %, 10 %, 20 % ou 30 % selon le prix.
- [ ] 4.1 Afficher le jour correspondant a un nombre avec `switch`.
- [ ] 4.2 Afficher le nombre de jours d'un mois.
- [ ] 4.3 Faire une calculatrice avec `switch`.
- [ ] 4.4 Creer un menu addition, soustraction, multiplication, division, quitter.
- [ ] 4.5 Rendre ce menu interactif avec une boucle.

## Notions 5 et 6 - Boucles

- [ ] 5.1 Afficher 1 a 10.
- [ ] 5.2 Afficher 10 a 1.
- [ ] 5.3 Afficher les pairs de 0 a 100.
- [ ] 5.4 Afficher les multiples de 5.
- [ ] 5.5 Somme de 1 a N.
- [ ] 5.6 Produit de 1 a N.
- [ ] 5.7 Table de multiplication.
- [ ] 5.8 Compter les chiffres d'un entier.
- [ ] 5.9 Inverser un nombre.
- [ ] 5.10 Somme des chiffres.
- [ ] 5.11 Chiffre maximum.
- [ ] 5.12 Chiffre minimum.
- [ ] 5.13 Palindrome numerique.
- [ ] 6.1 a 6.9 Refaire les parcours precedents avec `for`, dont factorielle, puissance et tables.
- [ ] 6.10 Triangle croissant d'etoiles.
- [ ] 6.11 Triangle decroissant d'etoiles.
- [ ] 6.12 Pyramide centree.
- [ ] 6.13 Carre plein.
- [ ] 6.14 Carre creux.

## Notions 7 et 8 - Fonctions et recursion

- [ ] 7.1 a 7.13 Ecrire `add`, `subtract`, `multiply`, `divide`, `max`, `min`, `is_even`, `is_positive`, `factorial`, `power`, `absolute_value`, `square` et `cube`.
- [ ] 7.14 Ecrire `is_prime`.
- [ ] 7.15 Calculer une racine carree sans la bibliotheque.
- [ ] 7.16 Creer une fonction qui affiche un triangle.
- [ ] 8.1 Compte a rebours recursif.
- [ ] 8.2 Afficher 1 a N recursivement.
- [ ] 8.3 Factorielle recursive.
- [ ] 8.4 Puissance recursive.
- [ ] 8.5 Somme de 1 a N recursive.
- [ ] 8.6 Fibonacci.
- [ ] 8.7 Nombre de chiffres.
- [ ] 8.8 Somme des chiffres.
- [ ] 8.9 Inverser une chaine recursivement.
- [ ] 8.10 Verifier un palindrome recursivement.

## Notions 9 et 10 - Tableaux et chaines

- [ ] 9.1 a 9.10 Creer, afficher, sommer, moyenner, rechercher et compter dans un tableau.
- [ ] 9.11 a 9.16 Inverser, copier, comparer et trier un tableau, puis trouver la deuxieme plus grande valeur.
- [ ] 9.17 Supprimer les doublons.
- [ ] 9.18 Fusionner deux tableaux tries.
- [ ] 10.1 a 10.7 Parcourir une chaine et compter longueur, voyelles, consonnes, chiffres, espaces et mots.
- [ ] 10.8 a 10.15 Copier, comparer, concatener, inverser, changer la casse et rechercher un caractere.
- [ ] 10.16 Rechercher une sous-chaine.
- [ ] 10.17 Supprimer les espaces.
- [ ] 10.18 Remplacer un caractere.
- [ ] 10.19 Compresser plusieurs espaces en un seul.
- [ ] 10.20 Reproduire `strlen`, `strcpy`, `strcmp` et `strcat` sans `<string.h>`.

## Notions 11 a 16 - Pointeurs, memoire et structures

- [ ] 11.1 a 11.6 Afficher une adresse et modifier des variables avec des pointeurs, dont `swap`, `increment` et `decrement`.
- [ ] 11.7 a 11.13 Parcourir, copier, comparer et inverser tableaux et chaines avec des pointeurs.
- [ ] 12.1 Refaire `arr[i]` avec `*(arr + i)`.
- [ ] 12.2 a 12.8 Somme, min, max, recherche, inversion, tri et retour de deux resultats via pointeurs.
- [ ] 13.1 a 13.11 Allouer, remplir, copier, afficher, concatener et liberer des donnees dynamiques.
- [ ] 13.12 Implementer `char *duplicate(char *str)`.
- [ ] 13.13 Construire une chaine a partir de plusieurs morceaux.
- [ ] 14.1 a 14.8 Afficher et traiter `argc` et `argv`, dont un comportement type `echo`.
- [ ] 14.9 Creer `./calc 10 + 20` avec validation des arguments.
- [ ] 15.1 a 15.10 Creer, afficher, modifier, rechercher et trier des `Student`, `Book` et `Movie`.
- [ ] 15.11 Creer un systeme de gestion d'etudiants.
- [ ] 16.1 a 16.6 Modifier, allouer et liberer des structures via pointeurs.
- [ ] 16.7 Allouer dynamiquement plusieurs etudiants.

## Notions 17 et 18 - Fichiers et debogage

- [ ] 17.1 a 17.7 Ouvrir, lire, ecrire, copier un fichier et compter lignes, caracteres ou mots.
- [ ] 18.1 Diagnostiquer une segmentation fault.
- [ ] 18.2 Diagnostiquer une boucle infinie, une mauvaise condition et un depassement de tableau.
- [ ] 18.3 Trouver une fuite memoire, un pointeur `NULL`, une mauvaise allocation et un double `free`.
- [ ] 18.4 Verifier les programmes avec `-Wall -Wextra -Werror` et `valgrind` si disponible.

## Semaine 3 - Tests combines

### Test 1 : Easy

Lire des nombres, calculer min, max et moyenne, puis compter les pairs et les
impairs.

### Test 2 : String tool

Creer `./string_tool "Hello World"` et afficher la longueur, le nombre de mots,
la version majuscule, la version minuscule et la version inversee. Interdiction
d'utiliser `<string.h>`.

### Test 3 : Array tool

Creer `./array_tool 10 4 7 2 8 1` et afficher min, max, moyenne et le tableau trie.

### Test 4 : Calculatrice

Creer `./calc 10 + 5`, gerer `+`, `-`, `*`, `/`, la division par zero, les
mauvais nombres d'arguments et les operateurs invalides.

### Test 5 : Master

Creer `./program 5` pour afficher un carre, puis `./program 5 hollow` pour un
carre creux. Ajouter ensuite les modes `triangle` et `pyramid`.

## Boss final : student_manager

Creer `./student_manager` avec ce menu :

```text
1. Add student
2. Remove student
3. Search student
4. Display students
5. Sort students
6. Average grades
7. Best student
8. Quit
```

Contraintes : structures, tableaux dynamiques, pointeurs, fonctions, chaines,
`malloc/free`, validation des entrees, aucun memory leak et compilation avec
`-Wall -Wextra -Werror`.
