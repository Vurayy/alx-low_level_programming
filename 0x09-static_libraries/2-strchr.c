#include "main.h"

/**
 * _strchr - Funtion that locates a character in a string
 * @c: The character in the string to be checked
 * @s: The source string
 * Return: Always 0
 *
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (0);
}


