#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begining of list
 *
 * @head: pointer to the header pointer
 * which the head pointer to the first node
 *
 * @n: new int to be created
 * Return: the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}

