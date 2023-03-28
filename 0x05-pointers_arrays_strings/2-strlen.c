#include "main.h"

/**
 * _strlen - eturns the length of a string
 * @s: pointer
 * Return: The length of a string.
 */

int _strlen(char *s)
{
	int counter;

	while (*s != '\0')
	{
		counter++;
		*s++;
	}
	return (counter);
}
