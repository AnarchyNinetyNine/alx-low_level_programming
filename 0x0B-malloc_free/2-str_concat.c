#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: # A pointer to a newly allocated space in memory which contains
 *           the contents of s1, followed by the contents of s2,
 *           and null terminated.
 *         # NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ptr;

	size1 = size2 = i = 0;
	while (s1[size1] != '\0')
		++size1;
	while (s2[size2] != '\0')
		++size2;
	ptr = (char *) malloc((sizeof(char) * (size1 + size2)) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
		*ptr++ = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		*ptr++ = s2[i++];
	*ptr = '\0';
	ptr -= (size1 + size2);
	return (ptr);
}
