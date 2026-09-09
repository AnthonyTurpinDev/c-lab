

/*
** EXERCICE : Boucles imbriquées
**
** FICHIER : 14_boucles_imbriquees.c
**
** OBJECTIF :
**
** Découvrir une notion très importante en programmation :
** une boucle à l'intérieur d'une autre boucle.
**
** ============================================
** PARTIE A — AFFICHER UN CARRÉ
** ============================================
**
** Ton programme doit afficher :
**
**     *****
**     *****
**     *****
**     *****
**     *****
**
** CONTRAINTES :
**
** - Utilise deux boucles while.
** - La boucle extérieure doit gérer les lignes.
** - La boucle intérieure doit gérer les étoiles.
**
** 💡 RÉFLEXION :
**
** Tu dois afficher :
**
**     5 lignes
**
** Et chaque ligne doit contenir :
**
**     5 étoiles
**
** Tu peux donc réfléchir comme ceci :
**
**     boucle extérieure → lignes
**         boucle intérieure → étoiles
**
** Pose-toi ces questions :
**
** 1. Combien de fois la boucle extérieure doit-elle tourner ?
** 2. Combien de fois la boucle intérieure doit-elle tourner
**    pour chaque ligne ?
** 3. Quand dois-tu afficher le retour à la ligne ?
**
** ⚠️ IMPORTANT :
**
** Ne passe pas à la partie B tant que la partie A
** ne fonctionne pas correctement.
**
**
** ============================================
** PARTIE B — AFFICHER UN TRIANGLE
** ============================================
**
** Une fois le carré réussi, modifie ton programme pour afficher :
**
**     *
**     **
**     ***
**     ****
**     *****
**
** CONTRAINTES :
**
** - Utilise toujours deux boucles while.
** - La boucle extérieure gère les lignes.
** - La boucle intérieure affiche les étoiles.
**
** 💡 RÉFLEXION :
**
** Cette fois, le nombre d'étoiles dépend du numéro
** de la ligne :
**
**     ligne 1 → 1 étoile
**     ligne 2 → 2 étoiles
**     ligne 3 → 3 étoiles
**     ligne 4 → 4 étoiles
**     ligne 5 → 5 étoiles
**
** La difficulté est donc de faire comprendre à la boucle
** intérieure combien d'étoiles elle doit afficher.
**
** Pose-toi cette question :
**
**     "Comment faire dépendre le nombre de tours
**      de la boucle intérieure du numéro de la ligne ?"
**
** BONUS :
**
** Essaie de modifier le triangle pour obtenir :
**
**     *
**     ***
**     *****
**     *******
**     *********
**
** Toujours avec deux boucles while.
*/


#include <stdio.h>

int main(void)
{
    int ligne = 1;

    while (ligne <= 5)
    {
        int etoile = 1;

        while (etoile <= ligne)
        {
            printf("*");
            etoile++;
        }

        printf("\n");
        ligne++;
    }

    return 0;
}
