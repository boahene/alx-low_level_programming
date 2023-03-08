#include "main.h"

/**
 * _strien_recursion - count the number of strings in s
 * recursively
 * @s: whats your length
 * Return: prtint out the length of strings
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
