#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int number;
	int ones;
	int tens;
	int iter;

	iter = 1;
	while (iter++ <= 10)
	{
		number = 0;
		while (number <= 14)
		{
			ones = number % 10;
			tens = number / 10;
			if (tens > 0)
				_putchar(tens + '0');
			_putchar(ones + '0');
			number++;
		}
		_putchar('\n');
	}
}
