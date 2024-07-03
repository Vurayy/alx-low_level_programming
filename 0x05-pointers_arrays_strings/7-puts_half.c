#include "main.h"
#include "stdio.h"
/**
 * puts_half - prints second half of a string
 * @str: string to be checked
 *
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (!(i % 2))
		i /= 2;
	else
		i  = (i + 1) / 2;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}

