#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: # the sum of all passed params. (on Success).
 *         # 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum, i;

	sum = 0;
	i = n;

	if (n == 0)
		return (0);

	va_start(list, n);

	while (i--)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
