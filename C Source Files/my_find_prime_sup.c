/*
** EPITECH PROJECT, 2017
** my_find_prime_sup.c
** File description:
** find the nearly prime nbr >= parameter
*/

int	my_find_prime_sup(int nb)
{
	int verify;
	int prime;

	verify = my_is_prime(nb);
	if (verify == 1)
		prime = nb;
	else {
		while (my_is_prime(nb) != 1)
			nb++;
		prime = nb;
	}
	return (prime);
}
