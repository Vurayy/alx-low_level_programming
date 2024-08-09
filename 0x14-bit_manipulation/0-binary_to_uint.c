#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that converts binary number to unsigned int
 * @b: A character pointing to the string
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		decimal = decimal << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			decimal = decimal | 1;
		b++;
	}
	return (decimal);
}
