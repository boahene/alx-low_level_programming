#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + '0');
	}
	_putchar('\n');
}
