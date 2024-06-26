#include "main.h"

/**
 * 2-print_alphabet_x10 - function prints alphabets x10
 *
 * Description: using _putchar to print
 *
 */
void print_alphabet_x10(void);
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a' <= 'z'; i++)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
				

