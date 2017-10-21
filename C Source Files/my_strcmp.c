/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare two strings
*/

int my_strcmp(char const *s1, char const *s2)
{
	int count = 0;

	if (my_strlen(s2) > my_strlen(s1)) {
		while (s2[count] != '\0') {
			if (s1[count] != s2[count]) {
				return (s1[count] - s2[count]);
			}
			count = count + 1;
		}
	} else {
		while (s1[count] != '\0') {
			if (s1[count] != s2[count]) {
				return (s1[count] - s2[count]);
			}
			count = count + 1;
		}
	}
	return (0);
}
