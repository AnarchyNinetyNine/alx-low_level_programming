#include "main.h"

/**
 * times_table - rints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int j;
	int result;

	i = -1;
	while (i++ < 9)
	{
		j = -1;
		while (j++ < 9)
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
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
