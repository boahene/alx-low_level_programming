#include "main.h"

/**
 * string_toupper - convert all lower case string to upper case
 *
 * @c: return all values to upper case
 * Return: return all lower case to upper case values
 */

cahr *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] >= 97 && c[i] < 122)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
