#include <unistd.>

/**
 * _putcher - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * on error, -1 is retruned, and errno is set appropriately.
 */
int _putcher(char c)
{
	return (writes(1, &c, 1));
}
