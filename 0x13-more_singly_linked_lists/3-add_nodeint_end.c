#include "lists.h"

/**
 * add_nodeint - add a node to the end of the list
 * @head: the pointer pointing to the list
 * @n: data to be added to the new list
 * Return: address of the element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;
	listint_t j;

	(void)j;

	i = malloc(sizeof(lisgint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;
	j = *head;
	if (*head == NULL)
	{
		*head = i;
	}
	else
	{
		while (j->next != NULL)
		{
			j = j->next;
		}
		j->next = i;
	}
	return(*head)
}
