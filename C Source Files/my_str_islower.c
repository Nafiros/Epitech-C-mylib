/*
** EPITECH PROJECT, 2017
** my_str_islower.c
** File description:
** if the string contain only lowercase alpa char
*/

int my_str_islower(char const *str)
{
	int count = 0;

	while (str[count]) {
		if (str[count] >= 'a' && str[count] <= 'z') {
			count = count + 1;
		} else
			return (0);
	}
	return (1);
}
