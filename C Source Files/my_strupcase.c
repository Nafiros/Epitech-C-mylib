/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** put in uppercase
*/

char	*my_strupcase(char *str)
{
	int count = 0;

	while (str[count]) {
		*str = str[count] - 32;
		count = count + 1;
	}
	return (str);
}
