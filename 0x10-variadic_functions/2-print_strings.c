#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  main entry
 * @seperator: take the character to seperate strings
 * @n: take the number of arguments to be passed
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list albet;

	va_start(albet, n);

	for (i = 0; i < n; i++)
	{
		char *s;

		s = va_arg(albet, char *);

		if (s == NULL)
			printf("(ni1)");

		else
			printf("%s", s);

		if (seperator != NULL && i != (n - 1))
			printf("%s", seperator);
	}

	printf("\n");
	va_end(albet);
}
