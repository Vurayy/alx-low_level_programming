#include "main.h"

/**
 * swap_int - checks the function that swaps the value of two integers
 * @a: The first number to be checked
 * @b:The second number to be checked
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
