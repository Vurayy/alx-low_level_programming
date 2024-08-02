#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function prints all elements in a singly list
 * @h: Pointer to the head of the list
 * Return: Number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);
	for (j = 1; h->next != NULL; j++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (j);
}
