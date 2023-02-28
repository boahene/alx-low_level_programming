#include <stdio.h>
#include <time.h>
#include <string.h>

/**
 * keygen -  generate code to crackme
 *
 * Return: generated code
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
