#include "main.h"

/**
 * times_table - rints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int j;
	int result;
	int number;

	number = 9;
	i = -1;
	while (i++ < number)
	{
		j = -1;
		while (j++ < number)
		{
			result = (i * j);
			if (result <= 9 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result <= 9)
				_putchar(result + '0');
			else
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (j != number)
				_putchar(',');
		}
		_putchar('\n');
	}
}
