#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13
 * @s: Pointer to an array of words
 *
 * Return: String function
 */

char *rot13(char *s)
{
	int k, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
	for (r = 0; r < 52; r++)
	{
	if (s[k] == data1[r])
	{
	s[k] = datarot[r];
	break;
	}
	}
	}
	return (s);
}

