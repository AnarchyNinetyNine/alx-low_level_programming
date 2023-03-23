#include "main.h"
/**
 * _abs - show the absolute value of a given number
 * Description: 'prints the absolute value of a numebr'
 * @i: the input n is an integer
 * Return: the absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
