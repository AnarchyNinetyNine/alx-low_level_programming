#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A string.
 *
 * Return: lenght of a string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
