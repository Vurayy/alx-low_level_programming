#include "function_pointers.h"

/**
 * array_iterator - function that executes a functionin an array
 * @array: The array to the pointer
 * @action: The pointer to the funtion
 * @size: The size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
	}
}

