/*
** EPITECH PROJECT, 2017
** my_strncat.c
** File description:
** concatenate n char of src string to dest string
*/

int	my_strlen(char const *str);

char	*my_strncat(char *dest, char const *src, int nb)
{
	int lenght_of_dest = my_strlen(dest);
	int total_lenght = my_strlen(dest) + my_strlen(src);
	int count = 0;

	while (count < nb) {
		dest[lenght_of_dest + count] = src[count];
		count = count + 1;
	}
	return (dest);
}
