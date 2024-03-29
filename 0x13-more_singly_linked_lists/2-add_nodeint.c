#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - func that adds node at beginning of a listint_t list.
 * @head: double head pointer
 * @n: int-type  add the list
 * Return: NULL for failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *)malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	node->next = *head;

	*head = node;

	return (node);
}
