#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= i; ++j)
			{
				while (j != i)
				{
					_putchar(' ');
					++j;
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
