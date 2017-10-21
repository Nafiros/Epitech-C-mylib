/*
** EPITECH PROJECT, 2017
** my_is_prime.c
** File description:
** display if nbr is prime or not
*/

int	my_is_prime(int nb)
{
	int count = 2;
	int prime;

	if (nb <= count)
		prime = 0;
	while (count < nb) {
		if (nb % count == 0)
		{
			prime = 0;
			break;
		}
		else
			prime = 1;
		count++;
	}
	if (nb == 2)
		prime = 1;
	return (prime);
}
