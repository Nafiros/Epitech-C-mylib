/*
** EPITECH PROJECT, 2017
** my_sort_int_array.c
** File description:
** sort int array
*/

void my_sort_int_array(int *array, int size)
{
	int count = 0;
	int count2 = 0;
	int temp;
	int c = 0;

	for (count = 0; count < size; count++) {
		if (array[count2] < array[c])
			c = count2;
	}
	temp = array[count];
	array[count] = array[c];
	array[c] = temp;
	count = count + 1;
	count2 = count;
	c = count;
}
