#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @n: Bytes of the memory.
 * @s: A Pointer.
 * @b: Constant byte.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
