#include "main.h"
/**
 * _isupper - checks for uppercase character
 * Description: check upper
 * @c: A Value from ASCII table
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
		return (1);
	else
		return (0);
}
