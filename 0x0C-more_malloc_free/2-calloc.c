#include "main.h"
#include "stdlib.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);

	while (i < (nmemb * size))
		b[i++] = 0;

	return (b);
}
