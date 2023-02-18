#include <stdio.h>
/**
 * main - Program this prints alphabets in lower case and in order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lwralph;

	for (lwralph = 'a'; lwralph <= 'z'; lwralph++)
	{
		putchar(lwralph);
	}
	putchar('\n');
	return (0);
}
