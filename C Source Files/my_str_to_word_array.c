/*
** EPITECH PROJECT, 2017
** my_str_to_word_array.c
** File description:
** osef
*/

int is_a_char(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		if (c < '0' || c > '9')
			return (0);
	return (1);
}

int word_nbr_finder(char *str)
{
	int count = 0;
	int word_nbr = 0;

	while (str[count]) {
		if (is_a_char(str[count]) == 1
			&& is_a_char(str[count + 1]) == 0)
			word_nbr = word_nbr + 1;
		count = count + 1;
	}
	return (word_nbr);
}

char **my_str_to_word_array(char *str)
{
	int count = 0;
	int size = 0;
	int y = 0;
	char **array;

	array = malloc(sizeof(char *) * (word_nbr_finder(str) + 1));
	while (str[count]) {
		if (is_a_char(str[count]))
			size = size + 1;
		if (is_a_char(str[count]) == 1 && is_a_char(str[count + 1]) == 0) {
			array[y] = malloc(sizeof(char) * size + 1);
			my_strncpy(array[y], &str[count - size + 1], size);
			size = 0;
			y = y + 1;
		}
		count = count + 1;
	}
	array[y] = malloc(sizeof(char) * 1);
	array[y] = '\0';
	return (array);
}
