/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** copy a string into another one
*/

void *my_strcpy(char *dest, char const *src)
{
	int count = 0;

	while (src[count] != '\0') {
		dest[count] = src[count];
		count = count + 1;
	}
	return (dest);
}
