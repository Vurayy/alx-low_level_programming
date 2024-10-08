#include "lists.h"
/**
 * print_listint - print the element of a listint_t list
 *
 * @h: the header pointer to the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
