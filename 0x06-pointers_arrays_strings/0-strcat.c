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
	while (*dest)
		++dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
