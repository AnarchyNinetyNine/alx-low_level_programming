#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: An array of Integers.
 * @size: The number of elements in the array array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: # The index of the first element for which
 *           the cmp function does not return 0 (on Suceess).
 *         # -1 If no element matches, or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(*(array + i)) != 0)
			return (i);
	return (-1);
}
