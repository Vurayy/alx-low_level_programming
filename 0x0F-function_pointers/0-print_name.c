#include "function_pointers.h"

/**
 * print_name - Funtion that prints a name
 *
 * @name: The name to be printed
 * @f: The pointer to a funtion
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		f(name);

}
