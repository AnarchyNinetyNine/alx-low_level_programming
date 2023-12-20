#include "main.h"

/**
 * print_alphabet_x10 - Prints x10 alphabets
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	c = 'a';
	i = 1;
	while (i <= 10)
	{
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		++i;
		c = 'a';
	}
}
