#include "main.h"

/**
 * print_most_numbers - Prints all numbers from 0 to 9
 *                      but 2 and 4.
 */

void print_most_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		if (num != '2' && num != '4')
			_putchar(num++);
		else
			++num;
	}
	_putchar('\n');
}
