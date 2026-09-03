/*
** EXERCICE : Agrandir automatiquement un tableau
**
** CONSIGNE :
**
** Créer un programme qui permet à l'utilisateur
** d'entrer des nombres un par un.
**
** Le tableau doit commencer avec une capacité de 2 éléments.
**
** Exemple :
**
**     Nombre : 10
**     Nombre : 20
**     Nombre : 30
**     Nombre : 40
**     Nombre : 50
**
**
** Lorsque le tableau est plein, il doit être agrandi
** automatiquement avec realloc().
**
**
** OBJECTIF :
**
** Comprendre le principe d'un tableau dynamique :
**
**     - une capacité initiale
**     - des éléments ajoutés progressivement
**     - une détection lorsque le tableau est plein
**     - un agrandissement avec realloc()
**     - la conservation des anciennes valeurs
**
**
** COMPORTEMENT ATTENDU :
**
** Le tableau commence avec une capacité de 2.
**
** Après avoir entré :
**
**     10
**     20
**
** le tableau est plein.
**
** Avant d'ajouter le nombre suivant, agrandir le tableau
** avec realloc().
**
** Par exemple, doubler sa capacité :
**
**     capacité = 2
**          ↓
**     realloc()
**          ↓
**     capacité = 4
**
** Puis :
**
**     10 20 30 40
**
** Le tableau est à nouveau plein.
**
** Agrandir encore :
**
**     capacité = 4
**          ↓
**     realloc()
**          ↓
**     capacité = 8
**
**
** ÉTAPES :
**
** 1. Déclarer un pointeur vers int.
**
**
** 2. Définir une capacité initiale de 2.
**
**
** 3. Allouer dynamiquement la mémoire pour 2 int
**    avec malloc().
**
**
** 4. Vérifier que malloc() a réussi.
**
**
** 5. Demander un nombre à l'utilisateur.
**
**
** 6. Stocker ce nombre dans le tableau.
**
**
** 7. Continuer à demander des nombres un par un.
**
**
** 8. Avant chaque ajout, vérifier si le nombre
**    d'éléments utilisés atteint la capacité.
**
**    Si le tableau est plein :
**
**        - augmenter la capacité
**        - utiliser realloc()
**        - vérifier que realloc() a réussi
**
**
** 9. Continuer jusqu'à ce que l'utilisateur décide
**    d'arrêter la saisie.
**
**    Tu dois choisir une méthode simple pour signaler
**    la fin de la saisie.
**
**    Exemple :
**
**        Entrer -1 pour arrêter.
**
**    ⚠️ Si tu utilises -1 comme signal d'arrêt,
**    précise que -1 ne sera pas enregistré comme
**    un nombre du tableau.
**
**
** 10. Une fois la saisie terminée, afficher tous
**     les nombres enregistrés.
**
**
** 11. Afficher éventuellement le nombre d'éléments
**     réellement stockés.
**
**
** 12. Libérer la mémoire avec free().
**
**
** EXEMPLE DE RÉSULTAT :
**
**     Nombre : 10
**     Nombre : 20
**     Nombre : 30
**     Nombre : 40
**     Nombre : 50
**     Nombre : -1
**
**     Tableau :
**     10 20 30 40 50
**
**     Nombre d'éléments : 5
**
**
** CONTRAINTES :
**
** - La capacité initiale doit être de 2.
** - Utiliser malloc() pour l'allocation initiale.
** - Utiliser realloc() lorsque le tableau est plein.
** - Les anciennes valeurs doivent être conservées.
** - Ajouter les nombres un par un.
** - Utiliser une boucle.
** - Vérifier les erreurs de malloc().
** - Vérifier les erreurs de realloc().
** - Utiliser free() à la fin.
** - Ne pas créer de deuxième tableau pour recopier
**   manuellement les valeurs.
**
**
** ⚠️ IMPORTANT :
**
** Tu dois distinguer deux notions :
**
**     size
**
**     = nombre d'éléments réellement enregistrés
**
**
**     capacity
**
**     = nombre d'éléments que la mémoire peut
**       actuellement contenir
**
**
** Exemple :
**
**     size = 2
**     capacity = 2
**
** Le tableau est plein.
**
** Après realloc() :
**
**     size = 2
**     capacity = 4
**
** Le tableau possède encore seulement 2 nombres,
** mais il peut maintenant en accueillir 4.
**
**
** QUESTIONS À TE POSER :
**
** 1. Quelle différence entre size et capacity ?
**
** 2. Quand dois-tu appeler realloc() ?
**
** 3. Pourquoi ne faut-il pas appeler realloc()
**    après chaque nouveau nombre ?
**
** 4. Pourquoi est-il intéressant de doubler
**    la capacité ?
**
** 5. Que deviennent les anciennes valeurs après realloc() ?
**
** 6. Pourquoi faut-il vérifier le résultat de realloc() ?
**
** 7. Que dois-tu faire si realloc() échoue ?
**
** 8. Pourquoi faut-il finalement utiliser free() ?
**
**
** BONUS :
**
** Afficher la capacité actuelle chaque fois que
** le tableau est agrandi.
**
**
** Exemple :
**
**     Capacité : 2
**
**     Nombre : 10
**     Nombre : 20
**
**     Tableau plein !
**     Nouvelle capacité : 4
**
**     Nombre : 30
**     Nombre : 40
**
**     Tableau plein !
**     Nouvelle capacité : 8
**
**
** BONUS 2 :
**
** Créer une fonction :
**
**     void print_array(int *tab, int size);
**
**
** Cette fonction doit afficher les nombres enregistrés.
**
**
** OBJECTIF FINAL :
**
** Comprendre ce schéma :
**
**        capacité = 2
**             ↓
**          malloc()
**             ↓
**       [10][20]
**             ↓
**        tableau plein
**             ↓
**          realloc()
**             ↓
**    [10][20][30][40]
**             ↓
**        tableau plein
**             ↓
**          realloc()
**             ↓
** [10][20][30][40][50][...]
**             ↓
**           free()
**
**
** À RETENIR :
**
** Un tableau dynamique n'a pas besoin d'avoir
** une taille définitive dès le départ.
**
** On peut commencer petit et augmenter sa capacité
** lorsque cela devient nécessaire grâce à realloc().
*/