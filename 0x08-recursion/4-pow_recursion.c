#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The first integer.
 * @y: The second integer.
 *
 * Return: # x to the power of y if y >= 0.
 *         # -1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	return ((y < 0) ? -1 : (y == 0) ? 1 : x * _pow_recursion(x, y - 1));
}
