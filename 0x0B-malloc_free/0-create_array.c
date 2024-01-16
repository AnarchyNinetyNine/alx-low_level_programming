#include "main.h"

/**
 * create_array - Creates an array of chars,
 *                and initializes it with a specific char.
 * @size: Size of the array.
 * @c: A character to initialize the array with.
 *
 * Return: # NULL if size = 0 or if it fails.
 *         # A pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (size--)
		*(ptr + size) = c;
	return (ptr);
}
