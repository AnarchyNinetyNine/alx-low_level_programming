#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Length of the line.
 */

void print_line(int n)
{
	int startingPoint;

	startingPoint = 1;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (startingPoint <= n)
		{
			_putchar('_');
			++startingPoint;
		}
		_putchar('\n');
	}
}
