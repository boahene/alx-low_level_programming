#include <stdio.h>
#include "main.h"

/**
 * print_sign - funtion begins here
 *@n: carrier variable
 *
 * Return: 1if n>0, 0 if n == 0, -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
