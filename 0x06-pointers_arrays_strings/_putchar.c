#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charcter to print
 *
 * Return: on success1.
 * on error, -1 is returned, and errno is set appropriatly
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
