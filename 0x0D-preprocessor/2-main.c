#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the file it was compiled from,
 *        followed by a new line.
 * Return: Always 0 (Success).
 */

int main(void)
{
	printf("%s\n", __FILE__);
	exit(EXIT_SUCCESS);
}
