#include <stdio.h>

/**
 * main - starting point
 * printf - display formatted output to standard output
 * Return: 0
 */

int main(void)
{
	unsigned long int char_size = sizeof(char);
	unsigned long int int_size = sizeof(int);
	unsigned long int long_int_size = sizeof(long int);
	unsigned long int long_long_int_size = sizeof(long long int);
	unsigned long int float_size = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", char_size);
	printf("Size of an int: %lu byte(s)\n", int_size);
	printf("Size of a long int: %lu byte(s)\n", long_int_size);
	printf("Size of a long long int: %lu byte(s)\n", long_long_int_size);
	printf("Size of a float: %lu byte(s)\n", float_size);
	return (0);
}
