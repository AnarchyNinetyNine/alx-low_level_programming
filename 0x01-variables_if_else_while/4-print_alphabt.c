#include <stdio.h>
/**
 * main - A program that Prints alphabets
 * Return: 0 (Success)
 */
int main(void)
{
	char c[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(c[i]);
	}
	printf("\n");
	return (0);
}
