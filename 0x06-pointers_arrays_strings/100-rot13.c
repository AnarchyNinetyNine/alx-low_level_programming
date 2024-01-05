#include "main.h"

/**
 * rot13 - Encodes a string usiing rot13..
 * @str: A string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */

char *rot13(char *str)
{
	int count = 0;

	while (*str && ++count)
	{
		char *arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char *equiv = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
		int j = 0;

		while (j < 52)
		{
			if (*str == arr[j])
			{
				*str = equiv[j];
				break;
			}
			j++;
		}
		str++;
	}
	str -= count;
	return (str);
}
