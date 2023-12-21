#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: The size of the square.
 */

void print_square(int size)
{
	char charPrinted;
	char endLine;
	int i, j;

	charPrinted = '#';
	endLine = '\n';
	if (size <= 0)
		_putchar(endLine);
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size; ++j)
			{
				while (j <= size)
				{
					_putchar(charPrinted);
					++j;
				}
				_putchar(endLine);
			}
		}
	}
}
