/*
** EPITECH PROJECT, 2017
** my_str_isupper.c
** File description:
** if the string contain only uppercase alpha char
*/

int my_str_isupper(char const *str)
{
	int count = 0;

	while (str[count]) {
		if (str[count] >= 'A' && str[count] <= 'Z') {
			count = count + 1;
		} else {
			return (0);
		}
	}
	return (1);
}
