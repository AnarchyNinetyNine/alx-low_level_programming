#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i;
	char *placeholder;

	i = n;

	va_start(list, n);

	while (i-- && n)
	{
		placeholder = va_arg(list, char *);
		printf("%s", placeholder ? placeholder : "(nil)");
		if (i && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
