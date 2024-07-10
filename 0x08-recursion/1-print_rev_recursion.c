#include "main.h"
#include "stdio.h"

/**
 * _print_rev_recursion - Function that prints string in reverse
 * @s: The string to be reversed
 *
 * Return: Voidu
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		 _print_rev_recursion(s + 1);
		 putchar (*s);
	}
}
