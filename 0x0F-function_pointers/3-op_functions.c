#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integers, and return their sum.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: a + b.
 */
int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - Subtracts two integers, and return their difference.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: a - b.
 */
int op_sub(int a, int b) { return (a - b); }

/**
 * op_mul - Multiplies two integers, and return their product.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: a * b.
 */
int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - Divides two integers, and return their division.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Divides two integers, and return the remainder.
 * @a: First Integer.
 * @b: Second Integer.
 *
 * Return: a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
