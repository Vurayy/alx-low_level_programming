#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to an integer
 * @index: index to set to 1
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int mask;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	mask = 1 << index;

	*n = mask | *n;

	return (1);
}
