#include "main.h"
#define MARGIN 32

/**
 * cap_string - Capitalizes all words of a string.
 * @str: A string.
 *
 * Return: A pointer to the resulting string.
 */

char *cap_string(char *str)
{
	int count = 0;

	while (*str && ++count)
	{
		if (*str >= 97 && *str <= 122)
		{
			switch (*(str - 1))
			{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case '\t':
			case '\n':
			case ' ':
				*str -= MARGIN;
				break;
			default:
				break;
			}
		}
		str++;
	}
	str -= count;
	return (str);
}
