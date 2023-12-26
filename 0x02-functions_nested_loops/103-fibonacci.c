#include <stdio.h>
#define THRESHOLD 4000000
/**
 * main - Starting point, finds and prints the sum of the even-valued terms,
 *        followed by a new line.
 * Return: Always 0 (Success).
 */

int main(void)
{
	long fn_1 = 1, fn_2 = 2, fn, sum = 2;

	while (1)
	{
		fn = fn_1 + fn_2;
		if (fn % 2 == 0 && fn <= THRESHOLD)
			sum += fn;
		fn_1 = fn_2;
		fn_2 = fn;
		if (fn > THRESHOLD)
			break;
	}
	printf("%li", sum);
	putchar('\n');
	return (0);
}
