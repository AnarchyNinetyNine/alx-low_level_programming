#include "main.h"

/**
 * _isalpha - Checks for uppercase characters
 * @c: character type argument for _islower()
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
