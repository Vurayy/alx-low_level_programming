#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of elements
 * @...: The variadic number of numbers to be priinted
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int index;

	va_start(i, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(i, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(i);
}
