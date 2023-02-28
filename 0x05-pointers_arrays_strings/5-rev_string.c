#inlcude "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string
 * Return: 0
 */

void rev_string(char *s)
{
	char new;
	int i, count1 = 0, count2 = 0;

	while (s[count1] != '\0')
		count1++;
	count2 = count1 - 1;

	for (i = 0; i < count1 / 2; i++)
	{
		new = s[i];
		s[i] = s[count2];
		s[count2--] = new;
	}
}
