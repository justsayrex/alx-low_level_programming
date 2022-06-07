#include <unistd.h>
/**
 * _putchar - writes the charcter c to stdout
 * @c: the character to print
 *
 * Return: Always 1 (Success)
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
