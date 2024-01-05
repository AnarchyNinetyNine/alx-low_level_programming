#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: A string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */

char *leet(char *str)
{
	int count = 0;

	while (*str && ++count)
	{
		char *arr = "aAeEoOtTlL";
		char *equiv = "4433007711";
		int j = 0;

		while (j < 10)
		{
			if (*str == arr[j])
				*str = equiv[j];
			j++;
		}
		str++;
	}
	str -= count;
	return (str);
}
