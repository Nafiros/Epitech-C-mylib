/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** return power of number giver (recursive mode)
*/

int	my_compute_power_rec(int nb, int p)
{
	int nbr;

	if (p == 0)
		nbr = 1;
	else if (p < 0)
		nbr = 0;
	else
		nbr = nb * my_compute_power_rec(nb, p - 1);
	if (nb > 0 && nbr < 0)
		return (0);
	else
		return (nbr);
}
