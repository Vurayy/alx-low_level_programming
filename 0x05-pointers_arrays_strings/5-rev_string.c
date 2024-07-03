#include "main.h"

/**
 * rev_string - print if function reverses string
 * @s: The string to be reversed
 * Return: Anything
 */
void rev_string(char *s)
{
	int i, j, k;
	char tmp

	j = 0;
	k = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	k = j - 1;

	for (i = 0; i < j / 2; i++)

	{
		tmp = s[1];
		s[i] = s[k];
		s[k--] = tmp;
	}
}
