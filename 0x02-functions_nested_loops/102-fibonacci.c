#include <stdio.h>

/**
 * main - Starting point, prints the first 50 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success).
 */

int main(void)
{
	long fn_1 = 1, fn_2 = 2, fn;
	int pos = 0;

	printf("%li, ", fn_1);
	printf("%li, ", fn_2);
	while (pos++ < 48)
	{
		fn = fn_1 + fn_2;
		printf("%li", fn);
		if (pos != 48)
			printf(", ");
		fn_1 = fn_2;
		fn_2 = fn;
	}
	putchar('\n');
	return (0);
}
