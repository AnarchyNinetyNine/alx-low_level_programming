#include "main.h"
/**
 * print_sign - show the sign of a number
 * Description: 'prints the sign of a numebr'
 * @c: the caracter in ASCII code
 * Return: 1 for positive numbers, -1 for negative ones, 0 else
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
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
