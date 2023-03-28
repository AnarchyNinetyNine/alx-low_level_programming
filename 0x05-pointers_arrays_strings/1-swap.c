#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 * Return: Void.
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
