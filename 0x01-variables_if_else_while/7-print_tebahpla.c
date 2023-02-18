#include <stdio.h>
/**
 * main - a program that prints lowercase alphabet in rev
 * You can only use putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}

