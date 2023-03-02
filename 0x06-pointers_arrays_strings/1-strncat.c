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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i +j] = src[j];
	}
	dest [i + j] = '\0';
	return (dest);
}
