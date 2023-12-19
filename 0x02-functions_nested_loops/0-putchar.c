#include <stdio.h>
#include "main.h"
/**
 * main - Starting point, prints _putchar, followed by a new line.
 * @c: argument for _putchar()
 * Return: 0 Always (Success)
 */

int _putchar(char c);
int iterator;

int main(void)
{

	int strArr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int arrSize = sizeof(strArr) / sizeof(strArr[0]);

	for (iterator = 0; iterator < arrSize; ++iterator)
		_putchar((char) strArr[iterator]);
	_putchar('\n');
	return (0);
}
