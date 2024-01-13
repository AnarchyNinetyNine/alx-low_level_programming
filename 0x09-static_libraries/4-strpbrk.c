#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to be scanned.
 * @accept: Pattern.
 *
 * Return: # A pointer to the byte in s that matches one of the bytes in accept
 *         # NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		count = 0;
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
			count++;
		}
		accept -= count;
		s++;
	}
	return (NULL);
}
