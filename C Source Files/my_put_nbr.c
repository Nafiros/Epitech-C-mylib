/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** put nbr
*/

int	my_put_nbr(int nb)
{
	int nbr;

	if (nb < 0) {
		my_putchar(45);
		nb = nb * -1;
	}
	if (nb >= 0) {
		if (nb >= 10) {
			nbr = nb % 10;
			nb = nb - nbr;
			nb = nb / 10;
			my_put_nbr(nb);
			my_putchar(nbr + 48);
		} else
			my_putchar(nb + 48);
	}
	return (0);
}
