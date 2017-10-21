/*
** EPITECH PROJECT, 2017
** my_str_isprintable.c
** File description:
** is printable ? 
*/

int my_str_isprintable(char const *str)
{
	int count = 0;

	while (str[count]) {
		if (str[count] < 33 || str[count] > 126) {
			return (0);
		} else {
			count = count + 1;
		}
	}
	return (1);
}
