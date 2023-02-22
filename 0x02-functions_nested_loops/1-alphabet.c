#include <stdio.h>
#include "main.h"
/**
 * print_alpabet - Entry point
 * Description: a function that prints the alphabet,
 * Return: void
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
