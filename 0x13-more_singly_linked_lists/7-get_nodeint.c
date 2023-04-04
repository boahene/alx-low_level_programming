#include "lists.h"

/**
 * get_nodeint_at_index - get element of last node
 * @index: get index value
 * @head: get the node
 * Return: return the value at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);

		head =  head->next;
	}
	return (head);
}


