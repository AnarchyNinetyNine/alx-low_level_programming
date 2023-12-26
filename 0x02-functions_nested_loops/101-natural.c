#include <stdio.h>
#define THRESHOLD 1024

/**
 * main - Starting point, computes and prints the sum of
 *        all the multiples of 3 or 5 below 1024 (excluded),
 *        followed by a new line.
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num = -1;
	long sum = 0;

	while (num++ < THRESHOLD)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}
	printf("%li\n", sum);
	return (0);
}
