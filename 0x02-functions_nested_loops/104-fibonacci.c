#include <stdio.h>
#include <inttypes.h>
#define THRESHOLD 98

/**
 * main - Starting point, prints the first 98 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success).
 */

int main(void)
{
	uint64_t fn_1 = 1, fn_2 = 2, fn;
	int pos = 0;

	printf("%" PRIu64 ", ", fn_1);
	printf("%" PRIu64 ", ", fn_2);
	while (pos++ < (THRESHOLD - 2))
	{
		fn = fn_1 + fn_2;
		printf("%" PRIu64, fn);
		if (pos != (THRESHOLD - 2))
			printf(", ");
		fn_1 = fn_2;
		fn_2 = fn;
	}
	putchar('\n');
	return (0);
}
