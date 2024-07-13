#include "main.h"

/**
 * _strspn - The function that the length of a prefix substring
 * @s: The source string
 * @accept:
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
