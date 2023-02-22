#include <stdio.h>
#include "main.h"
/**
 * print_alpabet - A fuction that prints the alphabet
 * 
 * Return: 0 (success)
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
