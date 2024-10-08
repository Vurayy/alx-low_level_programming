#include "main.h"

/**
 * _strstr - Function locates a substring
 * @needle: The substring to be checked
 * @haystack: The string to be checked
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *I = haystack;
		char *P = needle;

		while (*I == *P && *P != '\0')
		{
			I++;
			P++;
	}
		if (*P == '\0')
			return (haystack);
	}
	return (0);
}

