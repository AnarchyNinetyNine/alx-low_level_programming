#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
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
				if ((i + j) <= size)
					_putchar(' ');
				else
					_putchar(charPrinted);
			}
			_putchar(endLine);
		}
	}
}
