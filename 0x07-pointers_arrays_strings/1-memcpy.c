#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Destination memory area.
 * @src: Source memory area.
 * @n: n Bytes of memory to be copied.
 *
 * Return: A pointer to the resulting memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count = 0;

	while (n > 0)
	{
		*dest++ = *src++;
		n--;
		count++;
	}
	dest -= count;
	return (dest);
}
