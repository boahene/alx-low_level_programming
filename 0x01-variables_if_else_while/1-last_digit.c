#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random numner to a value and store
 *
 * Return: Always  0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10)  > 5)
	{
		printf(" Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10)  == 0)
	{
		printf("the last digit of %d is %d and if equal to 0\n", n, n % 10);
	}
	else if ((n % 10)  < 6)
	{
		printf("the last digit of %d is  %d and is less than 6  not 0\n", n, n % 10);
	}
	return (0);
}