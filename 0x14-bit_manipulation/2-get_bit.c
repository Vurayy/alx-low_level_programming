#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a given index
 * @n: long integer
 * @index: the index starting from 0
 * Return: the value of bit at index otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);

}
