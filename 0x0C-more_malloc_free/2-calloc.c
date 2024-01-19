#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements.
 * @size: sizeof.
 *
 * Return: # A pointer to the allocated memory.
 *         # NULL If nmemb or size is 0, or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(sizeof(int) * (nmemb));
	if (arr == NULL)
		return (NULL);
	s = arr;
	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return (arr);
}
