/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** allocate suffisante size of memory for any str
*/

#include <stdlib.h>

int my_strlen(char *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
	int count = my_strlen(src);
	char *dest;

	dest = malloc(sizeof(char) * (count + 1));
	return (my_strcpy(dest, src));
}
