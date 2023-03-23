#include "main.h"
/**
 * _islower - show 1 if c is lowercase
 * Description: 'prints _putchar stdout'
 * Return: 1 for lower 0 else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
