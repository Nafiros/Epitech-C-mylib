/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** Display N if the int is Negative or P if he is positive or null
*/

int	my_isneg(int n)
{
	if(n >= 0) {
		my_putchar('P');
	} else {
		my_putchar('N');
	}
	return (0);
}
