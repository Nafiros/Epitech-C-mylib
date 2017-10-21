/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** transform string into an int
*/

int	my_getnbr(char const *str)
{
	int c = 0;
	int nbr = 0;
	int tmp = 0;

	while (str[c] == '-' || str[c] == '+') {
		if (str[c] == '-')
			tmp++;
		c++;
	}
	while (str[c] <= '9' && str[c] >= '0') {
		nbr = nbr * 10;
		nbr = nbr + str[c] - 48;
		c++;
	}
	if (tmp % 2 != 0)
		nbr = nbr * -1;
	if ((nbr < 0 && tmp % 2 == 0) || (nbr > 0 && tmp % 2 != 0))
		return (0);
	else
		return (nbr);
}
