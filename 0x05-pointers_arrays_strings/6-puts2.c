#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character, followed by a new line.
 * @str: A string parameter.
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		if (*(str + 1) != '\0')
			str += 2;
		else
			break;
	}
	_putchar('\n');
}
