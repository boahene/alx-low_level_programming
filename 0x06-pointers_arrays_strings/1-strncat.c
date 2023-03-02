#include "main.h"

/**
 * _strncpy - copy the values in src into dest
 * @dest: delete your content
 * @src: copy your file into  memory
 * @n: shorten the src value
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
