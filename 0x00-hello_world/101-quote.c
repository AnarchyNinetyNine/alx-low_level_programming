#include <stdio.h>

/**
 * main - starting point
 * fprintf - write formatted data to a specified output stream
 * Return: 1
 */

int main(void)
{
	const char *errorMessage = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", errorMessage);
	return (1);
}
