#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: First string.
 * @src: Second string.
 * @n: nBytes from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;

	while (*dest && ++count)
		++dest;
	while (*src && n-- && ++count)
		*dest++ = *src++;
	*dest = '\0';
	dest -= count;
	return (dest);
}
