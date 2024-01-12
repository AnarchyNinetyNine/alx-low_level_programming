#include "main.h"

/**
 * main - Starting point -> Prints all arguments it receives.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
