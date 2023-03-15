#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into main
 * @argc: Number of command line argumemnts
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
