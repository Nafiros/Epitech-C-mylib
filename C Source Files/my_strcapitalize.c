/*
** EPITECH PROJECT, 2017
** my_strcapitalize.c
** File description:
** 
*/

char *my_strcapitalize(char *str)
{
	int count = 0;

	while (str[count]) {
		if (count == 0 && (str[count] >= 'a' && str[count] <= 'z')) {
			str[count] = str[count] - 32;
			count = count + 1;
		} else if (str[count] == ' ') {
			str[count + 1] = str[count + 1] - 32;
			count = count + 1;
		} else {
			count = count + 1;
		}
	}
	return (str);
}
