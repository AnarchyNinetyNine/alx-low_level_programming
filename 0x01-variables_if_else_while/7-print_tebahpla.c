#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point
 * putchar - Print out a character to stdout
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
