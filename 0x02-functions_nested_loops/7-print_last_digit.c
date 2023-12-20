#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: integer type argument for the function.
 *
 * Return: The last digit of a given number.
 */

int print_last_digit(int n)
{
	int i;

	if (n >= 0)
		i = (n % 10);
	else
		i = (n % 10) * -1;
	_putchar(i + '0');
	return (i);
}
