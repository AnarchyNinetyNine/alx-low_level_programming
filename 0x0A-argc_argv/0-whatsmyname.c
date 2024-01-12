#include "main.h"

/**
 * main - Starting point -> Prints the program name.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
