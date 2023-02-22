#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Return: 1 and print + if n is greater than zero
 *         0 and prints 0 if n is zero
 *        -1 and prinys - if n is less than zero
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
