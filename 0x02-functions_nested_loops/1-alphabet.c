#include "main.h"
/**
 * print_alpahbet - Entry point
 * Description: Aprogram that prints alphabets in lowercase
 * Return: Always 0 (Success)
 */

void print_alpahbet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
