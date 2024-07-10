#include "main.h"
#include "stdio.h"

/**
 * _puts_recursion - The function prints a string
 * @s: The string to be checked
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		putchar ('\n');
}
