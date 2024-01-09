#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: A pointer to a 2D Array.
 * @size: size of the array.
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag1, diag2;

	i = 0, diag1 = diag2 = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				diag1 += *(a + i * size + i);
			j++;
		}
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		j = size - 1;
		while (j >= 0)
		{
			if (i == j)
				diag2 += *(a + i * size + (size - 1 - i));
			j--;
		}
		i--;
	}
	printf("%d, %d\n", diag1, diag2);
}
