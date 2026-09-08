/*
** EXERCICE : My String Toolkit
**
** OBJECTIF :
**
** Créer plusieurs fonctions personnelles permettant
** de manipuler une chaîne de caractères.
**
** FONCTIONS À CRÉER :
**
**     int my_strlen(char *str);
**
**     int count_char(char *str, char c);
**
**     int is_palindrome(char *str);
**
**     void print_reverse(char *str);
**
** CONSIGNE :
**
** Demande à l'utilisateur d'entrer une chaîne.
**
** Puis utilise tes propres fonctions pour afficher :
**
**     Chaîne : kayak
**
**     Longueur = 5
**     Nombre de 'a' = 2
**     Palindrome = oui
**     Inverse = kayak
**
** --------------------------------------------------
** FONCTION 1 : my_strlen
** --------------------------------------------------
**
**     int my_strlen(char *str);
**
** Retourne le nombre de caractères de la chaîne.
**
** Exemple :
**
**     my_strlen("Bonjour") → 7
**
** Ne pas utiliser strlen().
**
** --------------------------------------------------
** FONCTION 2 : count_char
** --------------------------------------------------
**
**     int count_char(char *str, char c);
**
** Compte combien de fois le caractère `c` apparaît
** dans la chaîne.
**
** Exemple :
**
**     count_char("banana", 'a') → 3
**
** --------------------------------------------------
** FONCTION 3 : is_palindrome
** --------------------------------------------------
**
**     int is_palindrome(char *str);
**
** Vérifie si la chaîne est un palindrome.
**
** La fonction doit retourner :
**
**     1 → si c'est un palindrome
**     0 → sinon
**
** Exemples :
**
**     is_palindrome("kayak") → 1
**     is_palindrome("radar") → 1
**     is_palindrome("bonjour") → 0
**
** --------------------------------------------------
** FONCTION 4 : print_reverse
** --------------------------------------------------
**
**     void print_reverse(char *str);
**
** Affiche la chaîne dans l'ordre inverse.
**
** Exemple :
**
**     print_reverse("Bonjour");
**
** doit afficher :
**
**     ruojnoB
**
** IMPORTANT :
**
** Cette fonction doit réellement parcourir la chaîne
** depuis la fin vers le début.
**
** --------------------------------------------------
** CONTRAINTES GÉNÉRALES :
** --------------------------------------------------
**
** - Utiliser tes propres fonctions.
** - Ne pas utiliser :
**
**       strlen()
**       strcpy()
**       strcmp()
**       strcat()
**
** - Utiliser des boucles.
** - Manipuler les chaînes caractère par caractère.
** - Comprendre et utiliser '\0'.
** - Ne pas recopier le code d'une fonction dans une autre
**   inutilement.
**
** --------------------------------------------------
** PROGRAMME PRINCIPAL :
** --------------------------------------------------
**
** Dans main :
**
** 1. Demande une chaîne à l'utilisateur.
**
** 2. Demande éventuellement le caractère à rechercher.
**
** 3. Appelle my_strlen().
**
** 4. Appelle count_char().
**
** 5. Appelle is_palindrome().
**
** 6. Appelle print_reverse().
**
** 7. Affiche les résultats.
**
** EXEMPLE :
**
**     Chaîne : kayak
**
**     Longueur = 5
**     Nombre de 'a' = 2
**     Palindrome = oui
**     Inverse = kayak
**
** --------------------------------------------------
** QUESTIONS DE RÉFLEXION :
** --------------------------------------------------
**
** - Pourquoi my_strlen retourne-t-elle un int ?
**
** - Pourquoi is_palindrome retourne-t-elle 0 ou 1 ?
**
** - Pourquoi print_reverse est-elle de type void ?
**
** - Quelle fonction peut être réutilisée dans
**   is_palindrome() ?
**
** - Pourquoi '\0' est-il important ?
**
** - Quelle différence y a-t-il entre :
**
**       char c
**
**   et :
**
**       char *str
**
** - Pourquoi doit-on passer la chaîne aux fonctions ?
**
** --------------------------------------------------
** BONUS :
** --------------------------------------------------
**
** Ajoute une fonction :
**
**     int count_vowels(char *str);
**
** qui compte le nombre de voyelles.
**
** Puis affiche :
**
**     Voyelles = 2
**
** pour :
**
**     kayak
**
** --------------------------------------------------
** OBJECTIF PISCINE :
** --------------------------------------------------
**
** Cet exercice doit être réalisé sans regarder
** la correction.
**
** Tu dois être capable de :
**
** - parcourir une chaîne ;
** - utiliser '\0' ;
** - créer une fonction ;
** - passer une chaîne en paramètre ;
** - retourner une valeur ;
** - utiliser void ;
** - combiner plusieurs fonctions ;
** - raisonner sur les indices ;
** - manipuler des caractères.
**
** Si tu bloques, reviens aux exercices précédents
** plutôt que de chercher directement la solution.
*/