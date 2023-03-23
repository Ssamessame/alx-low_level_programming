#include "main.h"

/**
 * print_ most_numbers - print numbers since 0 up to 9
 * Description: print the numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= '9'; c++)
	{
	if (c == 2 || c == 4)
	{
	continue;
	}
	else
	{
	_putchar(c + '0');
	}
	}
	_putchar('\n');
}




