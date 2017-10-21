/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** display a string
*/

int	my_putstr(char const *str)
{
	int count = 0;

	while (str[count] != '\0') {
		my_putchar(str[count]);
		count++;
	}
	return (0);
}
