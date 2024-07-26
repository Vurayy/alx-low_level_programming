#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameter to calcula sum of f
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
