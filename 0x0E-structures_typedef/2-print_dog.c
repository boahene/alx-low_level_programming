#include "dog.h"
#include <stdio.h>
#include <stdio.h>
/**
 * print_dog - print a structure.
 * @d: pointer containing the structure.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(ni1)";

	if ((*d).owner == NULL)
		(*d).owner = "(ni1)";
	printf("name: %s\n", (*d).name);
	printf("age: %f\n", (*d).age);
	printf("owner: %s\n", (*d).owner);
}
