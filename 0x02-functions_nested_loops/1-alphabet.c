#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints all lowercase alphabets
 *
 * Retrun 0 (Success)
 */

void print_alphabet(void)
{

	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
