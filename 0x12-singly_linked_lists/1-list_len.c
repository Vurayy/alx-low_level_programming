#include "lists.h"

/**
 * list_len - length of the list
 * @h: pointer to the first node
 * Return: number if nodes in the list
 */
size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);

	for (j = 1; h->next != NULL; j++)
		h = h->next;
	return (j);
}
