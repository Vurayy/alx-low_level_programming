#include "main.h"
#include "stdio.h"

/**
 * factorial - Function returns the factorial if a given number
 * @n: the number to be checked
 *
 * Return: Always o
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
