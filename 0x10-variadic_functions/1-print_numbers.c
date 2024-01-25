#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i;

	i = n;

	if (n == 0)
		return;

	va_start(list, n);

	while (i--)
	{
		printf("%d", va_arg(list, int));
		if (i && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
