#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: A string parameter.
 */

void puts_half(char *str)
{
	int count = 0;

	while (*str++)
		++count;
	str--;
	str -= count / 2;
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

