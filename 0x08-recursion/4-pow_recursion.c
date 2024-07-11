#include "main.h"

/**
 * _pow_recursion - Print the value of x raiseed to the power of y
 * @x: the value to be checked
 * @y: The power of x
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

