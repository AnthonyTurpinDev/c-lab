/*
** EXERCICE : Comparer deux méthodes de recherche
**
** OBJECTIF :
**
** Implémenter deux algorithmes permettant de rechercher
** une valeur dans un tableau :
**
** 1. Recherche linéaire
** 2. Recherche binaire
**
** Puis comparer leur complexité et comprendre pourquoi
** la recherche binaire nécessite un tableau trié.
**
** ------------------------------------------------------------
**
** 🎯 FONCTIONS À CRÉER :
**
** int linear_search(int *tab, int size, int value);
**
** int binary_search(int *tab, int size, int value);
**
** Les deux fonctions doivent :
**
** - retourner l'indice de la valeur si elle est trouvée ;
** - retourner -1 si la valeur n'existe pas.
**
** ------------------------------------------------------------
**
** 📊 TABLEAU :
**
** Le tableau est déjà trié :
**
** [2, 5, 8, 12, 16, 23, 38, 42]
**
** ⚠️ NE PAS TRIER LE TABLEAU DANS LE PROGRAMME.
**
** ------------------------------------------------------------
**
** 🔎 TESTS :
**
** Tester les deux fonctions avec :
**
** 38
** 2
** 16
** 42
** 100
**
** Pour chaque valeur, afficher par exemple :
**
** Valeur recherchée : 38
** Recherche linéaire : indice 6
** Recherche binaire  : indice 6
**
** ------------------------------------------------------------
**
** 🎯 PARTIE 1 — RECHERCHE LINÉAIRE
**
** Parcourir le tableau élément par élément :
**
** tab[0]
** ↓
** tab[1]
** ↓
** tab[2]
** ↓
** ...
**
** Dès que la valeur est trouvée :
**
** → retourner son indice.
**
** Si la fin du tableau est atteinte :
**
** → retourner -1.
**
** ------------------------------------------------------------
**
** 🎯 PARTIE 2 — RECHERCHE BINAIRE
**
** Utiliser :
**
** int start;
** int end;
** int middle;
**
** Principe :
**
** start = 0
** end = size - 1
**
** Puis :
**
** 1. Calculer middle.
**
** 2. Comparer tab[middle] avec value.
**
** 3. Si égal :
**    → valeur trouvée.
**
** 4. Si value est plus petite :
**    → chercher dans la moitié gauche.
**
** 5. Si value est plus grande :
**    → chercher dans la moitié droite.
**
** 6. Recommencer avec la nouvelle zone.
**
** ------------------------------------------------------------
**
** 🧪 PARTIE 3 — COMPARAISON
**
** Pour chaque algorithme, compléter :
**
** Recherche linéaire : O(?)
** Recherche binaire  : O(?)
**
** Puis répondre :
**
** Meilleur cas de la recherche linéaire : O(?)
** Pire cas de la recherche linéaire    : O(?)
**
** Meilleur cas de la recherche binaire : O(?)
** Pire cas de la recherche binaire     : O(?)
**
** ------------------------------------------------------------
**
** 🧠 PARTIE 4 — COMPRENDRE LA DIFFÉRENCE
**
** Imagine un tableau contenant 1 000 000 d'éléments.
**
** Recherche linéaire :
**
** Elle peut être obligée de parcourir presque tout
** le tableau avant de trouver la valeur.
**
** Recherche binaire :
**
** Elle élimine environ la moitié du tableau à chaque étape.
**
** Pose-toi la question :
**
** Combien reste-t-il après chaque étape ?
**
** 1 000 000
** ↓
** 500 000
** ↓
** 250 000
** ↓
** 125 000
** ↓
** ...
**
** ------------------------------------------------------------
**
** ⚠️ QUESTION FONDAMENTALE :
**
** Pourquoi la recherche binaire nécessite-t-elle
** un tableau trié ?
**
** Explique-le avec tes propres mots.
**
** INDICE :
**
** La recherche binaire décide :
**
** "Je cherche à gauche"
**
** OU
**
** "Je cherche à droite"
**
** Pour prendre cette décision, elle doit savoir que tous
** les éléments d'un côté sont plus petits et ceux de l'autre
** côté sont plus grands.
**
** Que se passerait-il si le tableau n'était PAS trié ?
**
** ------------------------------------------------------------
**
** 🧠 EXEMPLE :
**
** Tableau trié :
**
** [2, 5, 8, 12, 16, 23, 38, 42]
**
** Si :
**
** value > tab[middle]
**
** tu peux éliminer toute la partie gauche.
**
** Pourquoi ?
**
** Parce que le tableau est trié.
**
** ------------------------------------------------------------
**
** ❌ CONTRE-EXEMPLE :
**
** [2, 38, 5, 42, 8, 16, 12, 23]
**
** Le tableau n'est pas trié.
**
** Si le milieu vaut 42 et que tu recherches 38,
** peux-tu conclure que 38 se trouve forcément à gauche ?
**
** Explique pourquoi.
**
** ------------------------------------------------------------
**
** 🎯 TABLEAU À COMPLÉTER :
**
** | Algorithme          | Meilleur | Pire    | Pourquoi ? |
** |---------------------|----------|---------|------------|
** | Recherche linéaire  | O(?)     | O(?)    | ...        |
** | Recherche binaire   | O(?)     | O(?)    | ...        |
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajouter un compteur de comparaisons dans chaque fonction.
**
** Exemple :
**
** Recherche : 38
**
** Linéaire :
** Comparaisons : X
**
** Binaire :
** Comparaisons : X
**
** Compare les résultats.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Tester avec un tableau de 16, puis 32, puis 64 éléments.
**
** Observer comment évolue le nombre de comparaisons
** de chaque méthode.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Écrire une phrase de conclusion dans ton programme :
**
** "La recherche binaire est plus efficace lorsque..."
**
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Être capable de :
**
** - coder une recherche linéaire ;
** - coder une recherche binaire ;
** - connaître leurs complexités ;
** - expliquer O(n) ;
** - expliquer O(log n) ;
** - comprendre l'intérêt d'un tableau trié ;
** - justifier pourquoi on peut éliminer une moitié
**   du tableau à chaque étape.
**
** ------------------------------------------------------------
**
** 🧠 RÉFLEXE À RETENIR :
**
** LINÉAIRE :
**
** début → élément par élément → jusqu'à trouver
**
** O(n)
**
**
** BINAIRE :
**
** début → milieu → comparaison
**                  ↓
**          gauche OU droite
**                  ↓
**             nouvelle zone
**
** O(log n)
**
** ------------------------------------------------------------
**
** 🎯 QUESTION ORALE PISCINE :
**
** "Pourquoi la recherche binaire est-elle plus rapide
** que la recherche linéaire ?"
**
** Tu dois pouvoir répondre sans regarder ton code.
*/