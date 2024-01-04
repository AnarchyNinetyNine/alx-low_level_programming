#include "main.h"
#define MARGIN 32
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: A String.
 *
 * Return: A pointer to the resulting str.
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (*str && ++count)
	{
		if (*str >= 97 && *str <= 122)
			*str -= MARGIN;
		++str;
	}
	str -= count;
	return (str);
}
