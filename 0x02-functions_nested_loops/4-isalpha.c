#include "main.h"
/**
 * _isalph - check for alphabetic chracter
 * @c: is for the char to be checked
 * Return: 1 if char is lowercase, 0 otherwise
 */

int _lsaplha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
			return (1);
			}
			else
			{
			return (0);
			}

}
