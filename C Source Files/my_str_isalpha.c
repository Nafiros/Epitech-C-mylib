/*
** EPITECH PROJECT, 2017
** my_str_isalpha.c
** File description:
** if string contains only alpha char
*/

int my_str_isalpha(char const *str)
{
	int count = 0;

	while (str[count]) {
		if (str[count] >= 'a' && str[count] <= 'z'
			|| str[count] >= 'A' && str[count] <= 'Z') {
			count = count + 1;
		}
		else
			return (0);
	}
	return (1);
}
