#include "main.h"
/**
 * print_chessboard - Prints the chessboard.
 * @a: A 2D array.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
			_putchar(a[i][j++]);
		_putchar('\n');
		i++;
	}
}
