#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Starting point -> Adds positive numbers and prints the result.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: # 0 if received numbers as arguments.
 *         # 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	argv++;
	while (*argv)
	{
		char *arg = *argv;

		while (*arg)
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(*argv);
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}
