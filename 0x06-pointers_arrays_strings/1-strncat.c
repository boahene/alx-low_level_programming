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

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}
	return (dest);
}
