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
	int d;
	char ch;

	for (d = '0'; d <= '9'; d++)
	{
		putchar('d');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
