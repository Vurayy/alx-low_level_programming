#include "main.h"

/**
 * _strncp - Copies at most n characters from src to dest.
 *
 * @dest - Destination buffer.
 *
 * @src - source string
 *
 * @n - Number of bytes to copy
 *
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
