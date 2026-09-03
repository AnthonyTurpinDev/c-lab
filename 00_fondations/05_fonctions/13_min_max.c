/*
** EXERCICE : Minimum et maximum
**
** FICHIER : 13_min_max.c
**
** OBJECTIF :
**
** Combiner trois notions importantes :
**
**     - fonction
**     - pointeurs
**     - conditions
**
** CONSIGNE :
**
** Crée une fonction :
**
**     void min_max(int a, int b, int *min, int *max)
**
** La fonction doit comparer les deux nombres a et b.
**
** Elle doit ensuite placer :
**
**     - le plus petit nombre dans *min
**     - le plus grand nombre dans *max
**
**
** EXEMPLE :
**
**     a = 10
**     b = 25
**
** Après l'appel de la fonction :
**
**     min = 10
**     max = 25
**
**
** AUTRE EXEMPLE :
**
**     a = 30
**     b = 12
**
** Résultat :
**
**     min = 12
**     max = 30
**
**
** CONTRAINTES :
**
** - La fonction doit être de type void.
** - Utilise deux paramètres normaux : a et b.
** - Utilise deux paramètres pointeurs : min et max.
** - Utilise if.
** - Le minimum doit être placé dans *min.
** - Le maximum doit être placé dans *max.
** - N'utilise pas de valeur de retour pour transmettre
**   le minimum et le maximum.
**
**
** 💡 RÉFLEXION :
**
** Tu dois comprendre le rôle des quatre paramètres :
**
**     a       → premier nombre
**     b       → deuxième nombre
**     min     → adresse où écrire le minimum
**     max     → adresse où écrire le maximum
**
** Pose-toi ces questions :
**
** 1. Comment comparer a et b ?
**
** 2. Si a est plus petit que b, que dois-tu mettre
**    dans *min ?
**
** 3. Que dois-tu mettre dans *max ?
**
** 4. Que se passe-t-il lorsque b est plus petit que a ?
**
** 5. Pourquoi utilise-t-on *min et *max
**    au lieu de min et max ?
**
** 6. Pourquoi doit-on envoyer &min et &max
**    lors de l'appel de la fonction ?
**
**
** ============================================
** TEST DANS MAIN()
** ============================================
**
** Teste au minimum :
**
**     a = 10, b = 25
**     a = 30, b = 12
**     a = 5,  b = 5
**
** Vérifie à chaque fois que :
**
**     min contient bien le plus petit nombre
**     max contient bien le plus grand nombre
**
**
** 🔥 OBJECTIF PISCINE :
**
** Tu dois être capable d'expliquer cette idée :
**
**     Une fonction void ne retourne pas directement
**     plusieurs valeurs.
**
**     Les pointeurs permettent à la fonction de modifier
**     les variables originales de main().
**
** Ici :
**
**     *min → écrit dans la variable min de main()
**     *max → écrit dans la variable max de main()
*/