#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program that prints hexadecimal
 * there should be a next line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
