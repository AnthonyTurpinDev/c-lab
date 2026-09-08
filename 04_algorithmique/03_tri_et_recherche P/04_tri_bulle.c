/*
** EXERCICE : Tri à bulles (Bubble Sort)
**
** OBJECTIF :
**
** Trier un tableau d'entiers dans l'ordre croissant
** en utilisant l'algorithme du Bubble Sort.
**
** ------------------------------------------------------------
**
** AVANT :
**
** 5 2 8 1 3
**
** APRÈS :
**
** 1 2 3 5 8
**
** ------------------------------------------------------------
**
** 🎯 FONCTION À CRÉER :
**
** void bubble_sort(int *tab, int size);
**
** La fonction doit modifier directement le tableau.
**
** ------------------------------------------------------------
**
** 🧠 PRINCIPE DU BUBBLE SORT :
**
** Compare deux éléments voisins :
**
** tab[i] et tab[i + 1]
**
** Si le premier est PLUS GRAND que le deuxième :
**
** → les échanger.
**
** Exemple :
**
** 5 2 8 1 3
**
** Comparer 5 et 2 :
**
** 5 > 2
**
** → échange
**
** 2 5 8 1 3
**
** Puis comparer 5 et 8 :
**
** 5 < 8
**
** → rien
**
** Puis continuer avec les éléments suivants.
**
** ------------------------------------------------------------
**
** 🔄 UNE PASSE :
**
** Une passe consiste à parcourir le tableau et à comparer
** les éléments voisins.
**
** À la fin d'une passe, le plus grand élément restant
** se retrouve progressivement vers la droite.
**
** Exemple :
**
** 5 2 8 1 3
**
** Après une première passe :
**
** 2 5 1 3 8
**
** Le 8 est maintenant à sa position finale.
**
** ------------------------------------------------------------
**
** 🎯 TON TRAVAIL :
**
** Tu dois utiliser DEUX BOUCLES :
**
** - une boucle extérieure pour les différentes passes ;
** - une boucle intérieure pour comparer les éléments voisins.
**
** ⚠️ Ne copie pas le tableau dans un autre tableau.
**
** Le tri doit être effectué directement dans tab.
**
** ------------------------------------------------------------
**
** 🔁 ÉCHANGE DE DEUX VALEURS :
**
** Pour échanger deux entiers, utilise une variable temporaire.
**
** Exemple de principe :
**
** int temp;
**
** temp = ...;
** ... = ...;
** ... = temp;
**
** À toi de déterminer quelles valeurs échanger.
**
** ------------------------------------------------------------
**
** 🎯 DANS MAIN :
**
** Crée :
**
** int tab[] = {5, 2, 8, 1, 3};
**
** Affiche le tableau AVANT le tri.
**
** Appelle :
**
** bubble_sort(tab, 5);
**
**
** Affiche le tableau APRÈS le tri.
**
** Résultat attendu :
**
** Avant : 5 2 8 1 3
** Après : 1 2 3 5 8
**
** ------------------------------------------------------------
**
** 🧠 QUESTIONS À TE POSER :
**
** 1. Pourquoi faut-il deux boucles ?
**
** 2. Pourquoi comparer tab[i] avec tab[i + 1] ?
**
** 3. Que se passe-t-il si tab[i] > tab[i + 1] ?
**
** 4. Pourquoi faut-il une variable temporaire pour échanger ?
**
** 5. Pourquoi le plus grand élément finit-il progressivement
**    à droite ?
**
** 6. Combien de comparaisons sont effectuées approximativement
**    pour n éléments ?
**
**
** ------------------------------------------------------------
**
** 🎯 COMPLEXITÉ :
**
** Analyse ton algorithme.
**
** Meilleur cas : O(?)
** Pire cas    : O(?)
** Complexité  : O(?)
**
** Explique pourquoi.
**
** ------------------------------------------------------------
**
** ⭐ BONUS 1 :
**
** Ajoute un compteur d'échanges.
**
** Exemple :
**
** Nombre d'échanges : X
**
** ------------------------------------------------------------
**
** ⭐ BONUS 2 :
**
** Optimise le Bubble Sort.
**
** Si pendant une passe AUCUN échange n'a été effectué :
**
** → le tableau est déjà trié.
**
** Tu peux donc arrêter l'algorithme immédiatement.
**
** Teste avec :
**
** {1, 2, 3, 4, 5}
**
** ------------------------------------------------------------
**
** ⭐ BONUS 3 :
**
** Teste avec :
**
** {5, 4, 3, 2, 1}
**
** puis :
**
** {1, 2, 3, 4, 5}
**
** Compare le nombre d'échanges.
**
** ------------------------------------------------------------
**
** 🎯 OBJECTIF PISCINE :
**
** Savoir :
**
** → parcourir un tableau ;
** → comparer deux éléments voisins ;
** → échanger deux valeurs ;
** → utiliser deux boucles imbriquées ;
** → analyser la complexité d'un algorithme de tri.
**
** Réflexe à retenir :
**
** comparer → échanger → recommencer
**
**
** ⚠️ Ne cherche pas seulement à obtenir le tableau trié.
** Tu dois comprendre le mécanisme du Bubble Sort.
*/