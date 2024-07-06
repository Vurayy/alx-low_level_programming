#include "main.h"

/**
 * char *string_toupper - changes all lower case screens to lower case
 * @x: The pointer to string
 *
 * Return: Pointer to uppercase
 */
char *string_toupper(char *x)
{
	int y;

	y = 0;

	while (x[y] != '\0')
	{
		if (x[y] >= 'a' && x[y] <= 'z')
		{
			x[y] = x[y] - 32;
		}
		y++;
	}
	return (x);
}



