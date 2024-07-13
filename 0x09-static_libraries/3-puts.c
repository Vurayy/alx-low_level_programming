#include "main.h"
#include "stdio.h"

/**
 * _puts - checks if the function prints string
 * @str: The string to be evaluated
 */
void _puts(char *str)
{
	char *s;

	for (s = str; *s != '\0'; s++)
	{
		putchar (*s);
	}
	putchar ('\n');
}
