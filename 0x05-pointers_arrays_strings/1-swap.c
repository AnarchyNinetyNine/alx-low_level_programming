#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 * Return: Void.
 */
int swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
