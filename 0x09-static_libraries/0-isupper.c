#include "main.h"

/**
 * _isupper - print if the function checks for uppercase
 * @c: The character to be checked
 * Return: i if character is uppercase, otherwise 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
