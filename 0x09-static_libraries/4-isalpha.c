#include "main.h"
/**
 *  _isalpha - check if the charater is alphabetic
 *  @c: The character to be checked
 *  Return: 1 if the character is a letter, upper or lower case, otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
