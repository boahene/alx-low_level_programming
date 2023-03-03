#inlcude "main.h"

/**
 * reverse_array - rverse the order of nth array
 * @a: reverse the array
 * @n: this should be the length of the array
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp =  a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
