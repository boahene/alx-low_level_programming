#include <stdio.h>
/**
 * main -Program that displays the sie of the various computer types
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("size of a chr: %zu bytes(s)\n", sizeof(char));
	printf("sie of an int: %zu bytes(s)\n", sizeof(int));
	printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);

}
