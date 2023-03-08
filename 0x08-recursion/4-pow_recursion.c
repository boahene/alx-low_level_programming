#include "main.h"

/**
 * _pow_recursion -  print the power of y to x
 * @x: take base value
 * @y: take the exponential value to the base of x
 * Return: return the results generated recursiveley
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y > 1)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	return (0);
}
