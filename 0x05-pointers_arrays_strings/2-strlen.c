#include <main.h>

/**
 *  _sterlen - returns the length of a string
 * @s: the string to get the length of
 * Return: The length of @s
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
