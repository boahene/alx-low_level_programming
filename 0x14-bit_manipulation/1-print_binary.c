#include "main.h"
/**
 * print_binary - Prints the binary representation of numbers
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, bit = 0;
	unsigned long int wise;

	for (i = 63; i >= 0; i--)
	{
		wise = n >> i;

		if (wise & 1)
		{
			putchar('1');
			bit++;
		}
		else if (bit)
			putchar('0');
	}
	if (!bit)
		putchar('0');
}
