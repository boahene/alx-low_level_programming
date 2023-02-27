#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
 */
int _strlen(char *s)
{
	int count = 0, i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0')
			count += 1;
		else
			break;
	}
	return (count);

}
