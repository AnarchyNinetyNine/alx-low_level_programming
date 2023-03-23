#include "main.h"
/**
 * main - A program that Prints alphabet
 * Description: ' print alphabet'
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for ( i = 97; i >= 122; i++)
	{
		_putchar(i);
	}
        _putchar('\n');
}
