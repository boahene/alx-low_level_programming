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
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i} = src[i];
		dest[c + i] = '\0';

		return (dest);
}
