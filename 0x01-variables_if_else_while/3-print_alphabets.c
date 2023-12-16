#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point
 * putchar - Print out a character to stdout
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerCase;
	char upperCase;

	lowerCase = 'a';
	upperCase = 'A';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');
	return (0);
}
