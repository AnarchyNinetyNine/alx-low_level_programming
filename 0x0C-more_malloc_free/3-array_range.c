#include "main.h"

/**
 *array_range - Creates an array of integers.
 * @min: Starting value.
 * @max: End value.
 *
 * Return: # A pointer to the newly created array, on Success.
 *         # NULL if min > max, or if malloc fails.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[j++] = i;
	return (arr);
}
