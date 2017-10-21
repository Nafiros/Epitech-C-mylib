/*
** EPITECH PROJECT, 2017
** my_compute_square_root.c
** File description:
** return the square root of nbr given in args
*/

int	my_compute_power_rec(int nb, int p);

int	my_compute_square_root(int nb)
{
	int count = 0;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else {
		while (count < nb) {
			if (my_compute_power_rec(count, 2) == nb) {
				return (count);
			}
			count = count + 1;
		}
	}
}
