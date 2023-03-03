#inlcude "main.h"

/**
 * reverse_array - rverse the order of nth array
 * @a: reverse the array
 * @n: this should be the length of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		i = a[count];
		a[count++] = a[n];
		a[n--] = 1;
	}
}
