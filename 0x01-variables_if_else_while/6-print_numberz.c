#include <stdio.h>
/**
 * main - Print single digit numbers of base 10 starting from 0
 * followed by a new line using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	putchar(x);
putchar('\n');
return (0);
}
