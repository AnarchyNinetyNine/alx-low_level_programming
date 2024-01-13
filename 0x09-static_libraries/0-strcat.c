#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: First string.
 * @src: Second string.
 *
 * Return: Pointer to First String.
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (*dest && ++count)
		++dest;
	while (*src && ++count)
		*dest++ = *src++;
	*dest = '\0';
	dest -= count;
	return (dest);
}
