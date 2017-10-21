/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** count how many char in your string
*/

int	my_strlen(char const *str)
{
	int count = 0;

	while (str[count] != '\0') {
		count++;
	}
	return (count);
}
