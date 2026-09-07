#include <stdio.h>

/*
** EXERCICE : Nombres pairs
**
** CONSIGNE :
**
** Créer un programme qui affiche uniquement les nombres
** pairs de 0 à 20, un par ligne.
**
** RÉSULTAT ATTENDU :
**
**     0
**     2
**     4
**     6
**     8
**     10
**     12
**     14
**     16
**     18
**     20
**
** CONTRAINTE :
**
** Tu dois utiliser une boucle while.
**
** MÉTHODE À UTILISER :
**
** Pour cet exercice, utilise la méthode la plus simple :
**
** Fais avancer i de 2 en 2.
**
** Ton raisonnement doit être :
**
**     0
**     ↓
**     2
**     ↓
**     4
**     ↓
**     6
**     ↓
**     ...
**     ↓
**     20
**
** AVANT DE CODER, RÉFLÉCHIS À :
**
**     1. Quelle valeur donner à i au départ ?
**
**     2. Quelle condition utiliser dans while ?
**
**     3. Comment afficher i ?
**
**     4. Comment faire avancer i de 2 ?
**
**     5. Quand la boucle doit-elle s'arrêter ?
**
** ⚠️ IMPORTANT :
**
** N'utilise pas le modulo % pour cet exercice.
**
** Le but est uniquement de comprendre comment
** faire évoluer une variable de 2 en 2.
**
** OBJECTIF FINAL :
**
** Savoir construire une boucle while dont la variable
** n'augmente pas forcément de 1 à chaque tour.
**
** QUESTION À TE POSER :
**
** Si i commence à 0 et augmente de 2 à chaque tour,
** quelles seront ses valeurs successives ?
*/


int main (void) {
    int a = 0;
    while (a % 2 == 0 && a <= 20)
    {
        printf("nombre pair :%d\n", a);
        a += 2;
    }
    
};