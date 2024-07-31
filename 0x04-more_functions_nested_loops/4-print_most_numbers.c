#include "main.h"
#include "stdio.h"

/**
 * print_most_numbers - prints numbers without 2 and 4
 *
 * Return: numbers except 2 and 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		if (a != 2 && a != 4)
			putchar(a);
	putchar('\n');
}

