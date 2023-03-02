#inlcude "main.h"

/**
 * reverse_array - rverse the order of nth array
 * @a: reverse the array
 * @n: this should be the length of the array
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
