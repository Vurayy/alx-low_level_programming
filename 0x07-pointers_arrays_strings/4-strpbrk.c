#include "main.h"

/**
 * _strpbrk - Function that searches for string in any set of bytes
 * @s: The source string
 * @accept: The searching string
 * Return: Always o
 */
char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[k] == accept[j])
			return (s + k);
		}
	}
	return (0);
}

