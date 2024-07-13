#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination string
 * @src: Source string
 * @n: Length of the buffer
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
