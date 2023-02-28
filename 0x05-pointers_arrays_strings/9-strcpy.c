#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy the content at scrc to best
 * @src: copy this content
 * @dest: paste the content of src here
 * Return: return the value copied to `dest variable
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];

	} while (src[i] != '\0');

	return (dest);
}
