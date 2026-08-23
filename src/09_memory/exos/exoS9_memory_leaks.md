# Exo S9 - Audit des fuites mémoire

Prendre trois exercices utilisant `malloc`, puis lancer Valgrind sur chacun :

```text
valgrind --leak-check=full --track-origins=yes ./ex
```

Objectif : `0 leak`, `0 error`.

Noter dans `logs/` :

- la commande utilisee ;
- chaque fuite ou erreur trouvee ;
- la correction appliquee ;
- le resultat final de Valgrind.
