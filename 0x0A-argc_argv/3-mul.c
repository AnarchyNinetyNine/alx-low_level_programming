#include "main.h"
#include <stdlib.h>

/**
 * main - Starting point -> Multiplies two numbers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: # 0 if received exactly 2 arguments.
 *         # 1 otherwise.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
