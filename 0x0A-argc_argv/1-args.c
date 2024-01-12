#include "main.h"

/**
 * main - Starting point -> Prints the number of arguments passed into it.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
