#include "3-calc.h"

/**
 * get_op_func - A function that selects the correct function
 *               to perform the operation asked by the user.
 * @s: The operator passed as argument to the program.
 *
 * Return: # A pointer to the correct function.
 *         # NULL otherwise.
 */

int (*get_op_func(char *s))(int, int)
{
	int i, j;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = j = 0;
	while (s[j])
		j++;
	if (j == 1)
	{
		while (ops[i].op)
		{
			if (*ops[i].op == *s)
				return (ops[i].f);
			i++;
		}
	}
	printf("Error\n");
	exit(99);
}
