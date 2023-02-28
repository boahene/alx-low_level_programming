#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a sting to an integer.
 * @s: the string to be converted.
 *
 * Return: the integer value of the converted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int mum = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			mum = (mum * 10) + (8s - '0');

		else if (mum > 0)
			break;


	} while (*s++);

	return (mum * sign);
}
