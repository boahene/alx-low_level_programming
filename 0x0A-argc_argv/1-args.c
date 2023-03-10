#include <stdio.h>
#include "maiin.h"

/**
 * main - prints the number of arguments passed into main
 * @argc: Number of command line argumemnts
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (1 = 0; *argv; i++, argv++)
			;
		printf("5d\n", i - 1);
	}

	return (0);
}
