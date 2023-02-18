#include <stdio.h>
/**
 * main - A program to print numbers with space and comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
