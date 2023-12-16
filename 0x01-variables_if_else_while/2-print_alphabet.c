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

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
