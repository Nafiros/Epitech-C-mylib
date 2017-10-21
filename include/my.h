/*
** EPITECH PROJECT, 2017
** libmy.h
** File description:
** my lib
*/

#ifndef MYLIB_H
#define MYLIB_H

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char);

int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_find_prime_sup(int);
int my_isneg(int);
int my_is_prime(int);
int my_put_nbr(int);

int is_a_char(char);

int my_getnbr(char const *);
int my_putstr(char const *);
int my_str_isalpha(char const *);
int my_str_islower(char const *);
int my_str_isnum(char const *);
int my_str_isupper(char const *);
int my_showstr(char const *);
int my_str_isprintable(char const *);

int my_showmem(char const *, int);

int my_strcmp(char const *, char const *);
int check(char const *, char const *);

int my_strncmp(char const *, char const *, int);

int my_strlen(char *);
int word_nbr_finder(char *);

char *my_revstr(char *);
char *my_strlowcase(char *);
char *my_strupcase(char *);
char *my_strcapitalize(char *);

char *my_strdup(char const *);

char *my_strncpy(char *, char const *, int);
char *my_strncat(char *, char const *, int);

char *my_strstr(char const *, char const *);
char *my_strcat(char *, char const *);

char **my_str_to_word_array(char const *)

void *my_strcpy(char *, char const *);
void my_swap(int *, int *);
void my_sort_int_array(int *, int);

#endif
