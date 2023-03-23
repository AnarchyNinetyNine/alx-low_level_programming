#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet in lower case 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
