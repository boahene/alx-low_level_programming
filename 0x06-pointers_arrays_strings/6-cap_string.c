#include "main.h"

/**
 * cap_string - retrun all first letter of the word to capital
 *
 * @str: return the values in capital
 * Return: return the value to the function
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str [index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index
