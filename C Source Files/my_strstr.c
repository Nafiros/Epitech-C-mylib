/*
** EPITECH PROJECT, 2017
** my_strstr.c
** File description:
** a remake of strstr function
*/

#include <stdlib.h>

int	check(char const *str, char const *to_find)
{
	int i = 0;

	while (to_find[i] != '\0') {
		if (str[i] == to_find[i]) {
			i++;
		} else {
			return (0);
		}
	}
	return (1);
}

char	*my_strstr(char const *str, char const *to_find)
{
	if (my_strlen(str) < my_strlen(to_find))
		return (NULL);
	while (str) {
		if (*str == *to_find) {
			if (check(str, to_find)) {
				return (str);
			}
		}
		str++;
	}
	return (NULL);
}
