# Erreurs frequentes

Une erreur n'est ajoutee ici que si elle revient plusieurs fois.

| Erreur | Pourquoi elle arrive | Reflexe a prendre |
| --- | --- | --- |
| Oublier de verifier `malloc` | On suppose que la memoire est toujours disponible | Tester le retour avant toute dereference |
| Confondre `*p++` et `(*p)++` | Priorite des operateurs mal memorisee | Ajouter les parentheses et lire l'expression pas a pas |