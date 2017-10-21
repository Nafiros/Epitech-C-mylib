/*
** EPITECH PROJECT, 2017
** my_strlowcase.c
** File description:
** put lower case
*/

char *my_strlowcase(char *str)
{
	int count = 0;

	while (str[count]) {
		*str = str[count] + 32;
		count = count + 1;
	}
	return (str);
}
