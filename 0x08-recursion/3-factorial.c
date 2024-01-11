#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: A number.
 *
 * Return: # The factorial of n if n >= 0.
 *         # -1 otherwise.
 */

int factorial(int n)
{
	return ((n < 0) ? -1 : (n == 1 || n == 0) ? 1 : n * factorial(n - 1));
}
