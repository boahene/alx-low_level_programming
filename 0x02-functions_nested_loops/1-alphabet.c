#include <stdio.h>
#include "main.h"
/**
 * main - Entry
 * Description: Aprogram than prints alphebet using _putchar
 * Return: Always 0 (Success
 */

void print_alphabet(void)
{

	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
}
