#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: A string.
 *
 * Return: # A pointer to the duplicated string on success.
 *         # NULL if str = 0 or if insufficient memory was available.
 */

char *_strdup(char *str)
{
	int i, count;
	char *ptr;

	i = count = 0;
	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	ptr = (char *) malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		++i;
	}
	return (ptr);
}
