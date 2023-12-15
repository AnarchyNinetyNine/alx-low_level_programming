#include <stdio.h>

/**
 * main - starting point
 * fprintf - write formatted data to a specified output stream
 * Return: 1
 */

int main(void)
{
	const char *errorMessage_chunk_1 = "and that piece of art is useful\"";
	const char *errorMessage_chunck_2 = " - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s %s", errorMessage_chunk_1, errorMessage_chunck_2);
	return (1);
}
