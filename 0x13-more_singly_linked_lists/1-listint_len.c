#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: head pointer
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}

