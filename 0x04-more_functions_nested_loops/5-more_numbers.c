#include "main.h"
#include "stdio.h"

/**
*more_numbers - print 10 times the numbers
*
*
*/
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				putchar((b / 10) + '0');
			putchar((b % 10) + '0');
		}
	putchar('\n');
	}
}

