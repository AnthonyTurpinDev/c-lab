/*
** EXERCICE : Comparaison des éléments d'un tableau
**
** OBJECTIF :
**
** Comparer chaque élément d'un tableau avec tous les autres
** éléments, puis trouver une manière d'éviter les comparaisons
** inutiles.
**
**
** TABLEAU DE TEST :
**
**     [10, 20, 30]
**
**
** COMPARAISONS ATTENDUES :
**
**     10 ↔ 20
**     10 ↔ 30
**     20 ↔ 30
**
**
**
** PARTIE 1 — PREMIÈRE APPROCHE
**
** Écris deux boucles imbriquées permettant de comparer
** les éléments du tableau.
**
**
** Pour chaque élément tab[i], compare-le avec les autres
** éléments du tableau.
**
**
** Exemple de réflexion :
**
**     i = 0 → tab[0]
**     i = 1 → tab[1]
**     i = 2 → tab[2]
**
**
** Puis utilise une deuxième variable j pour effectuer
** les comparaisons.
**
**
**
** ATTENTION :
**
** Une première approche naïve peut produire :
**
**     10 ↔ 20
**     10 ↔ 30
**     20 ↔ 10
**     20 ↔ 30
**     30 ↔ 10
**     30 ↔ 20
**
**
** Mais certaines comparaisons sont inutiles.
**
**
** Pourquoi ?
**
** Parce que :
**
**     10 ↔ 20
**
** et :
**
**     20 ↔ 10
**
** représentent exactement la même comparaison.
**
**
**
** PARTIE 2 — ÉVITER LES DOUBLONS
**
** Modifie tes boucles afin de ne comparer chaque paire
** qu'une seule fois.
**
**
** Tu dois obtenir uniquement :
**
**     10 ↔ 20
**     10 ↔ 30
**     20 ↔ 30
**
**
** et jamais :
**
**     20 ↔ 10
**     30 ↔ 10
**     30 ↔ 20
**
**
**
** INDICE :
**
** Observe attentivement les valeurs de i et de j.
**
**
** Au lieu de faire commencer j à 0 à chaque fois,
** demande-toi :
**
**     "À partir de quel indice dois-je commencer ?"
**
**
** Tu peux faire en sorte que :
**
**     j commence APRÈS i
**
**
** Cela permet d'éviter les comparaisons déjà effectuées.
**
**
**
** MENTAL MODEL :
**
** Tableau :
**
**     [10, 20, 30]
**       0   1   2
**
**
** Comparaisons utiles :
**
**     i = 0
**         j = 1 → 10 ↔ 20
**         j = 2 → 10 ↔ 30
**
**     i = 1
**         j = 2 → 20 ↔ 30
**
**     i = 2
**         → aucune comparaison restante
**
**
**
** PARTIE 3 — COMPTER LES COMPARAISONS
**
** Ajoute une variable :
**
**     int comparisons = 0;
**
**
** Incrémente-la à chaque comparaison effectuée.
**
**
** Pour le tableau :
**
**     [10, 20, 30]
**
** combien de comparaisons obtiens-tu ?
**
**
**
** Puis teste avec :
**
**     [10, 20, 30, 40]
**
**
** Puis :
**
**     [10, 20, 30, 40, 50]
**
**
**
** Note le nombre de comparaisons à chaque fois.
**
**
**
** PARTIE 4 — ANALYSE DE COMPLEXITÉ
**
** Compare maintenant ton algorithme avec l'exercice
** précédent sur les doubles boucles.
**
**
** Question :
**
** Est-ce que tu as toujours deux boucles imbriquées ?
**
**
** Si oui, est-ce forcément exactement n² comparaisons ?
**
**
** Non.
**
** Ici, la deuxième boucle ne parcourt pas toujours
** les n éléments.
**
**
** Le nombre de comparaisons est approximativement :
**
**     n × (n - 1) / 2
**
**
** Mais en notation Big O, on ignore les constantes et
** les termes moins importants.
**
**
** Donc :
**
**     n × (n - 1) / 2
**              ↓
**            O(n²)
**
**
**
** IMPORTANT :
**
** Ton objectif n'est PAS forcément de transformer cet
** algorithme en O(n).
**
**
** L'objectif est d'abord de comprendre que :
**
**     O(n²)
**
** peut contenir beaucoup de travail inutile si on effectue
** deux fois les mêmes comparaisons.
**
**
**
** QUESTION DE RÉFLEXION :
**
** Avec n = 3 :
**
**     approche naïve → combien de comparaisons ?
**     approche optimisée → combien ?
**
**
**
** Avec n = 5 :
**
**     approche naïve → combien ?
**     approche optimisée → combien ?
**
**
**
** BONUS :
**
** Modifie le programme pour rechercher les doublons
** dans un tableau.
**
**
** Exemple :
**
**     [10, 20, 30, 20]
**
**
** Le programme doit détecter que :
**
**     20
**
** apparaît plusieurs fois.
**
**
** Attention :
**
** Une paire ne doit être comparée qu'une seule fois.
**
**
**
** 🎯 OBJECTIF PISCINE :
**
** Ne pas seulement chercher un algorithme qui fonctionne.
**
** Demande-toi toujours :
**
**     "Est-ce que je fais plusieurs fois le même travail ?"
**
**
** Ici :
**
**     Comparaison A ↔ B
**     et
**     Comparaison B ↔ A
**
** sont redondantes.
**
**
** Une bonne solution consiste à ne comparer que :
**
**     i < j
**
**
** afin de parcourir uniquement les paires qui n'ont
** pas encore été comparées.
**
**
** RÉFLEXE :
**
**     Fonctionne ≠ optimisé
**
**
**     Toujours chercher :
**
**     "Quelles opérations puis-je éviter ?"
*/