#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - main entry
 * @seperator: take the string to seperate the integers
 * @n: take the number of arguments to be passed
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numb;

	va_start(numb, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, const unsigned int));

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(numb);
}
