#include "lists.h"
#include <stdio.h>
/**
 * print_listint - main entry point to print linked list
 * @h: get the integers to be printed in the nodes
 * Return: return number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t countn = 0;

	while (h != NULL)
	{
		/*print last node*/
		printf("%d\n", h->n);
		h = h->next;
		/*count no of nodes*/
		countn++;
	}
	return (countn);
}
