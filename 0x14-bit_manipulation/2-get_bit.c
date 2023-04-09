#include "main.h"

/**
 * get_bit - get all  bits
 * @n: bits inputted by users
 * @index: get bit index
 * Return: return all bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
