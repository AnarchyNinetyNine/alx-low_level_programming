#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: String from which the integer part will be retrieved.
 *
 * Return: # The retrieved integer. On Success.
 *         # 0 otherwise.
 */

int _atoi(char *s)
{
	int number, numNeg, numPos;

	number = numPos = numNeg = 0;
	while (*s)
	{
		if (*s == '+')
			numPos++;
		if (*s == '-')
			numNeg++;
		if (*s >= 48 && *s <= 57)
		{
			while (*s >= 48 && *s <= 57)
			{
				number = (number * 10) + (*s - '0');
				s++;
			}
			break;
		}
		++s;
	}
	return (number == 0 ? 0 : numPos >= numNeg ? number : number * -1);
}
