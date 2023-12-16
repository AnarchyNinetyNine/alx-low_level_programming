#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point
 * putchar - Print out a character to stdout
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	digit = 48;
	while (digit <= 57)
	{
		putchar((char)digit);
		if (digit != 57)
		{
			putchar(',');
			putchar((char)32);
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
