#include <stdio.h>

int main(int argc, char *argv[])
{
 int age = 0;
 printf("Quel age avez-vous ? ");
 scanf("%d", &age);
 printf("Ah ! Vous avez donc %d ans !\n", age);
 return 0;
}