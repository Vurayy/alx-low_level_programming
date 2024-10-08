#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: parameter to be checked
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}

