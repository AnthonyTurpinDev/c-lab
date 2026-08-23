#ifndef MY_H
#define MY_H

#include <stddef.h>

void my_putchar(char character);
void my_putstr(const char *string);
size_t my_strlen(const char *string);
void my_putnbr(int number);
void my_isneg(int number);
int my_abs(int number);
int my_sqrt(int number);
int my_is_prime(int number);
void my_putnbr_base(int number, char *base);
void my_sort_int_tab(int *tab, int size);
int my_find_nbr(int *tab, int size, int number);
char *my_strcpy(char *destination, char *source);
int my_strcmp(char *first, char *second);
char *my_strcat(char *destination, char *source);
char *my_revstr(char *string);
int my_str_isalpha(char *string);
char *my_strupcase(char *string);
char *my_strlowcase(char *string);
int my_wordcount(char *string);
char **my_split(char *string, char separator);

#endif
