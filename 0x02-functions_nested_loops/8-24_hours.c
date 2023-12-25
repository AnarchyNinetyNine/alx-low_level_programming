#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 *              starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int min, hr;

	hr = -1;
	while (hr++ < 23)
	{
		min = -1;
		while (min++ < 59)
		{
			if (hr <= 9)
			{
				_putchar('0');
				_putchar(hr + '0');
			}
			else
			{
				_putchar(hr / 10 + '0');
				_putchar(hr % 10 + '0');
			}
			_putchar(':');
			if (min <= 9)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			else
			{
				_putchar(min / 10 + '0');
				_putchar(min % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
