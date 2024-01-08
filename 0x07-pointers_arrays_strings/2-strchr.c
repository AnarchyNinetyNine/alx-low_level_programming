#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: A pointer to the string.
 * @c: The character to be located.
 *
 * Return: # A pointer to the first occurence of the character c.
 *         # NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&(s[i]));
		++i;
	}
	return (NULL);
}
