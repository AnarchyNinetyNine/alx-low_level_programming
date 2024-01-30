#include "main.h"
#include <limits.h>
/**
 * print_number - Prints an integer.
 * @n: Input integer.
 */

void print_number(int n)
{
	int ones;
	int digitCol;
	int multiplier;
	int nCopy;

	multiplier = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == INT_MIN)
	{
		_putchar('-');
		n = -(n + 1);
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	nCopy = n;
	while (n / 10 != 0)
	{
		multiplier *= 10;
		n /= 10;
	}
	n = nCopy;
	while (multiplier / 10 != 0)
	{
		digitCol = n / multiplier;
		_putchar(digitCol + '0');
		n %= multiplier;
		multiplier /= 10;
	}
	ones = n % 10;
	_putchar(ones + '0');
}
