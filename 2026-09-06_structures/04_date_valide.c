/*
** EXERCICE : Vérifier une date
**
** Déclarer une structure :
**
**     struct date {
**         int jour;
**         int mois;
**         int annee;
**     };
**
** Écrire une fonction qui vérifie si une date est valide.
**
** PROTOTYPE POSSIBLE :
**
** int date_valide(struct date d);
**
** EXEMPLES :
**
** 25/12/2026 -> valide
** 31/02/2026 -> invalide
** 15/13/2026 -> invalide
**
** CONTRAINTES :
**
** - Vérifier que le mois est compris entre 1 et 12.
** - Vérifier que le jour correspond au mois.
** - Gérer les mois de 30 jours.
** - Gérer les mois de 31 jours.
** - Gérer février.
** - Gérer les années bissextiles.
** - Retourner 1 si la date est valide.
** - Retourner 0 si elle est invalide.
**
** RAPPEL :
**
** Une année est bissextile si :
**
** - elle est divisible par 400 ;
** OU
** - elle est divisible par 4 mais pas par 100.
**
** BONUS :
**
** - Créer une fonction is_leap_year().
** - Séparer la validation du jour, du mois et de l'année.
**
** OBJECTIF :
**
** Apprendre à manipuler plusieurs champs d'une structure
** et combiner structures, fonctions et conditions.
*/