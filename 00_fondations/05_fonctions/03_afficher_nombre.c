/*
** EXERCICE : Afficher un nombre
**
** FICHIER : 03_afficher_nombre.c
**
** OBJECTIF :
**
** Comprendre le fonctionnement d'un paramètre
** dans une fonction.
**
** CONSIGNE :
**
** Crée une fonction :
**
**     void print_number(int n)
**
** La fonction doit afficher le nombre reçu en paramètre.
**
** EXEMPLE :
**
**     print_number(42);
**
** Résultat attendu :
**
**     42
**
**
** 💡 RÉFLEXION :
**
** Observe le paramètre :
**
**     int n
**
** Le nombre envoyé lors de l'appel de la fonction
** sera reçu dans la variable n.
**
** Par exemple :
**
**     print_number(42);
**
** signifie que n contient 42 à l'intérieur de la fonction.
**
** Pose-toi ces questions :
**
** 1. Où dois-tu déclarer le paramètre ?
**
** 2. Comment afficher la valeur de n ?
** 3. Que se passe-t-il si tu fais :
**
**        print_number(10);
**
**    puis :
**
**        print_number(25);
**
**
** 🎯 OBJECTIFS À VALIDER :
**
** - Comprendre ce qu'est un paramètre.
** - Savoir déclarer un paramètre.
** - Savoir transmettre une valeur à une fonction.
** - Utiliser le paramètre à l'intérieur de la fonction.
** - Appeler plusieurs fois une même fonction avec
**   des valeurs différentes.
*/