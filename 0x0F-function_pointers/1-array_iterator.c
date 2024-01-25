#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 *                  on each element of an array.
 * @array: An array of Integers.
 * @size: Size of the array.
 * @action: Callback function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		(*action)(*(array + i));
}
