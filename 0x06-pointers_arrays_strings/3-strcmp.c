#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: # 0 if s1 and s2 are equal.
 *         # A value > 0 if the first non-matching character in s1
 *           is greater (in ASCII) than that of s2.
 *         # A value < 0 if the first non-matching character in s1
 *           is lower (in ASCII) than that of s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);
	}
	return (0);
}
