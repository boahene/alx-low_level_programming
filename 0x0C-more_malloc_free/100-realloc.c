#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc -  realloctaes memory block with the help of mallock
 * @ptr: pointer to emory alloctaed with malloc
 * @old_size: size of memory alloctaed
 * @new_size: size of the new allocation
 *
 * Return: return pointer to user
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = oldp[i];

	p[i + i] = '\0';
	free(ptr);
	return (p);
}
