#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
	char *c = "main\n";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	return (0);
}

