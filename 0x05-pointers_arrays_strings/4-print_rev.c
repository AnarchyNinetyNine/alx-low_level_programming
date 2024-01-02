#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: A string.
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	while (count > 0)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar('\n');
}
