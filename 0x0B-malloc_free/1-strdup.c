#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - main entry
 * @str: point the pointer here
 * Return: return pointer
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(size(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];
	duplicate[len] = '\0';

	return (duplicate);
}
