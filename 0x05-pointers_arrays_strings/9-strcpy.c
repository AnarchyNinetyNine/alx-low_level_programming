#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src,
 *            including the terminating null byte (\0),
 *            to the buffer pointed to by dest.
 * @dest: Destination.
 * @src: Source.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*src)
		*(dest + count++) = *src++;
	*(dest + count) = '\0';
	return (dest);
}
