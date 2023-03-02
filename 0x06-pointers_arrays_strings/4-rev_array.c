#inlcude "main.h"

/**
 * reverse_array - rverse the order of nth array
 * @a: reverse the array
 * @n: this should be the length of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
