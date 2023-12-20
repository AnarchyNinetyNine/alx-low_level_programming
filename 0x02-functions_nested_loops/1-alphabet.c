#include <stdio.h>
#include "main.h"

/**
 * main - Starting point.
 * Return: 0 Always (Success)
 */

void print_alphabet(void);
void print_alphabet(void)
{
	int c;

	c = 97;
	while (c <= 122)
		_putchar((char) c++);
	_putchar('\n');
	return;
}
