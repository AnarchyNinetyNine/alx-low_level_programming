#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point
 * printf - Print out a formatted string to stdout
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
