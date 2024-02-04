#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Ckeck the code.
 * @argc: Argoument counter.
 * @argv: Argument vector.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
