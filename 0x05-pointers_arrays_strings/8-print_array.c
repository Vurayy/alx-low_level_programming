#include "main.h"
#include "stdio.h"
/**
 * print_array - prints elements of an array of integers
 * followed by a new line
 * @a: array to be inputed
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		printf("%d", a[i]);
		{
			printf("%d", a[i]);
			i++;
		}
	}
	putchar('\n');
}

