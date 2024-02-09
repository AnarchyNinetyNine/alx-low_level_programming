#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 *                  to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: # The converted number (On Success).
 *         # 0 if there is one or more chars in the string b that is not 0 or 1
 *           or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int res = 0;

	if (!b)
		return (0);
	while (b[count])
	{
		if (b[count] ==  '0' || b[count] == '1')
			++count;
		else
			return (0);
	}
	count = 0;
	while (b[count])
	{
		res = res * 2 + (b[count] - '0');
		++count;
	}
	return (res);
}
