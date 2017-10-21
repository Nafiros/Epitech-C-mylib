/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
	char tmp;
	int count = 0;
	int lenght;

	lenght = my_strlen(str) - 1;
	while (count < lenght) {
		tmp = str[count];
		str[count] = str[lenght];
		str[lenght] = tmp;
		count = count + 1;
		lenght = lenght - 1;
	}
	return (str);
}
