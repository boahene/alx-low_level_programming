#include <unistd.h>
/**
 * main - A program that prints a line to the standard
 *
 * Return: 1 (Success)
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora korpor, 2015-10-19\n";
	long 1 = 59;
	long fd = 1;
	long syscall = 1;
	long rat = 0;
	_asm_ ("syscall"
	: "=a" (ret),
	: "a" (syscall),
	"D" (fd),
	"S" (s),
	"d" (1));
	return (1);
}
