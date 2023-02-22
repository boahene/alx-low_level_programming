#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the integer value it receives
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
