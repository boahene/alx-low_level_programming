#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints three digit followed by
 * a comma and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, p, q;

	for (d = '0'; d <= '9'; d++)
	{
		for (p = '0'; p <= '9'; p++)
		{
			for (q = '0'; q <= '9'; q++)
			{
				if (d < p && p < q)
				{
					putchar(d);
					putchar(p);
					putchar(q);

					if (d != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
