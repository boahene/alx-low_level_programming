#include "main.h"

/**
 * _strncpy - copy the value in src into dest
 * @dest: delete your content
 * @src: copy your files into memory
 * @n: shorten the src value
 * Return: return the value in the memory into dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = sr _len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
