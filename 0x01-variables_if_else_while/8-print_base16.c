#include <stdio.h>
/**
 * main - Program that prints hexadecimal
 * there should be a next line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
	{
		putchar('0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
