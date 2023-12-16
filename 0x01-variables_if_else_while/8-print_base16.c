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
	int hexLetters;

	digit = 48;
	hexLetters = 97;
	while (digit <= 57)
	{
		putchar((char)digit);
		digit++;
	}
	while (hexLetters <= 102)
	{
		putchar((char)hexLetters);
		hexLetters++;
	}
	putchar('\n');
	return (0);
}
