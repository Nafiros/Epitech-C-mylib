/*
** EPITECH PROJECT, 2017
** my_str_isnum.c
** File description:
** if the string contain only digits
*/

int my_str_isnum(char const *str)
{
	int count = 0;

	while (str[count]) {
		if (str[count] >= '0' && str[count] <= '9') {
			count = count + 1;
		} else {
			return (0);
		}
	}
	return (1);
}
