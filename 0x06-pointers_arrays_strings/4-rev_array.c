#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An arrray.
 * @n: The number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	while (n > i)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
		i++;
	}
}
