#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer type argument for _abs().
 * Return: +(n) Always (Success).
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}

