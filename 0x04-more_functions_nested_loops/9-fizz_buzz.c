#include <stdio.h>

/**
 * main - FizzBuzz interview.
 * Return: Always 0 (Success).
 */

int main(void)
{
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzBuzz[] = "FizzBuzz";
	int number, lastNumber;

	number = 1;
	lastNumber = 100;
	while (number <= lastNumber)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("%s", fizzBuzz);
		else if (number % 3 == 0)
			printf("%s", fizz);
		else if (number % 5 == 0)
			printf("%s", buzz);
		else
			printf("%d", number);
		if (number != lastNumber)
			printf(" ");
		else
			printf("\n");

		++number;
	}
	return (0);
}
