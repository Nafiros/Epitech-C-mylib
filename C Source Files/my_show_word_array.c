/*
** EPITECH PROJECT, 2017
** my_show_word_array.c
** File description:
** show array of words
*/

#include <stdlib.h>

void my_putchar(char c);

int	my_show_word_array(char * const *tab)
{
	int x = 0;
	int y = 0;

	while(tab[y] != NULL) {
		my_putchar(tab[y][x]);
		x++;
		if(tab[y][x] == '\0') {
			y++;
			x=0;
			my_putchar('\n');
		}
	}
	return (0);
}
