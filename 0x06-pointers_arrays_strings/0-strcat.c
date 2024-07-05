#include "main.h"

/**
 * _strcat - print if funtion concatenates two  string
 *
 * @src: This is the concatenation parameter to be checked
 *
 * @dest: this is the concatenatition parameter to be checked
 *
 * Return: return to dest, that concatenates two strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\n')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
