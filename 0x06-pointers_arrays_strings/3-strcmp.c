#include "main.h"

/**
 * _strcmp - compare the string difference in the two string
 * @s1: compare the content to s2
 * @s2: compare the content to s1
 * Return: return flag value to function
 */

int_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (s1 == s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
