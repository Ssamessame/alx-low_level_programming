#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of integers
 * @a: arry of integers
 * @n: number of element of the array to be printed
 * return: void
 */

void print_array(int *a, int n)

{

	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
