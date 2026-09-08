#include <stdio.h>

/*
** EXERCICE : Compter les chiffres
**
** FICHIER : 12_compter_chiffres.c
**
** CONSIGNE :
**
** Demande un nombre entier à l'utilisateur et compte
** combien de chiffres il contient.
**
** EXEMPLES :
**
**     7       → 1 chiffre
**     42      → 2 chiffres
**     125     → 3 chiffres
**     2026    → 4 chiffres
**     123456  → 6 chiffres
**
** RÉSULTAT ATTENDU :
**
** Si l'utilisateur entre :
**
**     2026
**
** Afficher :
**
**     2026 contient 4 chiffres
**
** CONTRAINTES :
**
** - Utilise une boucle while.
** - Demande le nombre avec scanf.
** - Utilise la division entière.
** - Tu dois diviser progressivement le nombre par 10.
**
** 💡 GROS INDICE :
**
** Observe ce qui se passe avec 2026 :
**
**     2026 / 10 = 202
**     202 / 10  = 20
**     20 / 10   = 2
**     2 / 10    = 0
**
** Tu peux donc te demander :
**
**     Combien de fois dois-je diviser le nombre par 10
**     avant qu'il devienne 0 ?
**
** Chaque division permet de supprimer un chiffre.
**
** 💡 RÉFLEXION :
**
** Pose-toi ces questions avant de coder :
**
** 1. Quelle variable dois-tu utiliser pour compter les chiffres ?
** 2. Quelle doit être sa valeur initiale ?
** 3. Quelle condition doit contrôler ta boucle ?
** 4. Comment faire diminuer le nombre à chaque tour ?
** 5. Quand dois-tu augmenter ton compteur ?
**
** ⚠️ CAS PARTICULIER :
**
** Attention au nombre :
**
**     0
**
** Mathématiquement, 0 contient 1 chiffre.
**
** Ton programme doit donc afficher :
**
**     0 contient 1 chiffre
**
** BONUS :
**
** Essaie ensuite de faire fonctionner ton programme
** avec des nombres négatifs.
**
** Exemple :
**
**     -123 → 3 chiffres
*/

int main(void)
{
    int nombre;
    int compteur = 0;

    scanf("%d", &nombre);

    while (nombre != 0)
    {
        nombre = nombre / 10;
        compteur = compteur + 1;
    }

    printf("%d\n", compteur);

    return 0;
}
