#include <stdio.h>

/**
 * main - FizzBuzz interview.
 * isCommon - Checks for multiples of both three and five.
 * isMulThree - Checks for multiples of three.
 * isMulThree - Checks for multiples of five.
 * Return: Always 0 (Success).
 */

int isMulThree(int n)
{
	if ((n % 3) == 0)
		return (1);
	else
		return (0);
}

int isMulFive(int n)
{
	if ((n % 5) == 0)
		return (1);
	else
		return (0);
}
int isCommon(int n)
{
	if ((n % 3) == 0 && (n % 5) == 0)
		return (1);
	else
		return (0);
}
int main(void)
{
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzBuzz[] = "FizzBuzz";
	int number;

	number = 1;
	while (number <= 100)
	{
		if (isCommon(number))
		{
			printf("%s", fizzBuzz);
			printf(" ");
			++number;
		}
		else if (isMulThree(number))
		{
			printf("%s", fizz);
			printf(" ");
			++number;
		}
		else if (isMulFive(number))
		{
			printf("%s", buzz);
			printf(" ");
			++number;
		}
		else
		{
			printf("%d", number++);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
