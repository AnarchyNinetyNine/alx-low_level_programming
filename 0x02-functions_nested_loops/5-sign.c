#include "main.h"
/**
 * print_sign - show the sign of a number
 * Description: 'prints the sign of a numebr'
 * @n: the input n is an integer
 * Return: 1 for positive numbers, -1 for negative ones, 0 else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
