#include "main.h"
/**
 * _isalpha - show 1 if c is a letter
 * Description: 'prints _putchar stdout'
 * @c: the caracter in ASCII code
 * Return: 1 for lowercase or uppercase letters 0 else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
