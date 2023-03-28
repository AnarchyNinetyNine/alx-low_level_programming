#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 * Return: Always 0.
 */
int swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
