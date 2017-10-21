/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** swap between two pointer
*/

void	my_swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
