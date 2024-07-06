#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 0;

	n -= 1;

	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}

