/*
** EXERCICE : Rechercher un étudiant
**
** OBJECTIF :
**
** Apprendre à :
** - parcourir un tableau de structures
** - rechercher une chaîne de caractères
** - comparer deux noms
** - utiliser une condition pour détecter une correspondance
** - retourner le résultat d'une recherche
**
** CONSIGNE :
**
** 1. Créer une structure `Etudiant` contenant :
**
**    - nom : tableau de 50 caractères
**    - age : entier
**    - moyenne : float
**
** 2. Dans `main`, créer un tableau de 5 étudiants.
**
**    Exemple :
**
**    Alex   - 18 ans - 14.5
**    Lucas  - 19 ans - 15.2
**    Emma   - 20 ans - 16.5
**    Thomas - 18 ans - 11.5
**    Sarah  - 21 ans - 15.0
**
** 3. Demander à l'utilisateur le nom qu'il souhaite
**    rechercher.
**
**    Exemple :
**
**      Nom à rechercher : Lucas
**
** 4. Parcourir le tableau étudiant par étudiant.
**
** 5. Comparer le nom recherché avec le nom de chaque
**    étudiant.
**
**    ATTENTION :
**
**    Tu travailles avec des chaînes de caractères.
**
**    Tu ne peux donc pas comparer les noms simplement
**    avec `==`.
**
**    Réfléchis à la fonction de la bibliothèque
**    `string.h` qui permet de comparer deux chaînes.
**
** 6. Si le nom est trouvé, afficher :
**
**      Etudiant trouvé !
**      Age : 19
**      Moyenne : 15.2
**
** 7. Si aucun étudiant ne correspond au nom recherché,
**    afficher :
**
**      Etudiant introuvable.
**
** AFFICHAGE ATTENDU :
**
**    Nom à rechercher : Lucas
**
**    Etudiant trouvé !
**    Age : 19
**    Moyenne : 15.2
**
** OU :
**
**    Nom à rechercher : Kevin
**
**    Etudiant introuvable.
**
** CONTRAINTES :
**
** - Utiliser `struct Etudiant`.
** - Utiliser un tableau de 5 étudiants.
** - Utiliser une boucle pour effectuer la recherche.
** - Utiliser `strcmp`.
** - Utiliser `fgets` ou une autre méthode adaptée
**   pour récupérer le nom.
** - Ne pas trier le tableau.
** - Ne pas utiliser de pointeur pour retourner
**   directement l'étudiant.
**
** QUESTIONS À TE POSER :
**
** 1. Comment récupérer le nom demandé par l'utilisateur ?
**
** 2. Pourquoi ne peut-on pas faire :
**
**      etudiants[i].nom == nom_recherche
**
** 3. Quelle fonction permet de comparer deux chaînes ?
**
** 4. Que retourne `strcmp` lorsque les deux chaînes
**    sont identiques ?
**
** 5. Comment savoir si la recherche a réussi ?
**
** 6. Que faire si aucun étudiant n'est trouvé après
**    avoir parcouru tout le tableau ?
**
** 7. Est-ce que tu dois arrêter la boucle dès que
**    tu trouves l'étudiant ?
**
** BONUS :
**
** Créer une fonction :
**
**      int find_student(Etudiant etudiants[], int size,
**                       char nom[]);
**
** Cette fonction doit rechercher le nom et retourner
** l'indice de l'étudiant trouvé.
**
** Si aucun étudiant n'est trouvé, elle peut retourner
** une valeur spéciale permettant de le signaler.
**
** BONUS 2 :
**
** Après avoir trouvé l'étudiant, afficher également
** son nom.
**
** BONUS 3 :
**
** Faire en sorte que la recherche ne soit pas sensible
** à la casse :
**
**    lucas
**    Lucas
**    LUCAS
**
** seraient considérés comme le même nom.
**
** RAPPEL :
**
** Une recherche dans un tableau fonctionne généralement
** comme ceci :
**
**    tableau
**       ↓
**    [0] comparer
**       ↓
**    [1] comparer
**       ↓
**    [2] comparer
**       ↓
**    ...
**       ↓
**    trouvé ?
**      /   \
**    oui   non
**     ↓     ↓
** afficher continuer
**
** MENTAL MODEL :
**
**    nom recherché
**          ↓
**    parcourir le tableau
**          ↓
**    comparer les noms
**          ↓
**    correspondance ?
**       /       \
**     oui       non
**      ↓         ↓
**   afficher   continuer
**
** IMPORTANT :
**
** Cet exercice introduit une idée très importante :
**
**    rechercher une donnée
**          ≠
**    parcourir simplement un tableau
**
** Tu dois savoir :
**
**    1. quoi rechercher
**    2. comment comparer
**    3. comment signaler que tu as trouvé
**    4. quoi faire si tu ne trouves rien
*/