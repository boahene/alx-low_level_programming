#include "lists.h"

/**
 * get_nodeint_at_index - get element of last node
 * @index: get index value
 * @head: get the node
 * Return: return the value at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int get_node;

	for (get_count = 0; get_count < index; get_count++)
	{
		if (head == NULL)
			return (NULL);
		head =  head->next;
	}
	return (head);
}


