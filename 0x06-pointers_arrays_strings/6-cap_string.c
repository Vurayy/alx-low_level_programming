#include "main.h"
/**
 * cap_string - Capitalizes every first letter of a word in a string.
 * @str: Pointer to a string.
 * Return: str
 *
 */
char *cap_string(char *str)
{
	int count = 0;

	while (str[count])
	{
	while (!(str[count] >= 'a' && str[count] <= 'z'))
		count++;
	if (str[count - 1] == ' ' ||
	str[count - 1] == '\t' ||
	str[count - 1] == '\n' ||
	str[count - 1] == ',' ||
	str[count - 1] == ';' ||
	str[count - 1] == '.' ||
	str[count - 1] == '!' ||
	str[count - 1] == '?' ||
	str[count - 1] == '"' ||
	str[count - 1] == '(' ||
	str[count - 1] == ')' ||
	str[count - 1] == '{' ||
	str[count - 1] == '}' ||
	count == 0)
	str[count] -= 32;
	count++;
	}
	return (str);
}
