#include "main.h"

/**
 * _islower - checks if a character is lower case or lower case.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lower case, otherwise 0
 *
 */
int _islower(int c)
{
	char(i);
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		lower = 1;
		}
	}
	return (lower);
}
