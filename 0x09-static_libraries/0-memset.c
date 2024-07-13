#include "main.h"

/**
 * _memset - Function that fills the moemory with a constant style
 * @s: The string to be schecked
 * @b: The constant byte for filling
 * @n: Lenght of the buffer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
}
