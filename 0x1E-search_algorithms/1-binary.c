#include "search_algos.h"

/**
 * binary_search - Finds the index of a value in a sorted array
 *		   using binary search.
 * @array: The array to search.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = size - 1;
	size_t guess;

	if (!array)
		return (-1);

	while (min <= max)
	{
		size_t i;

		printf("Searching in array: ");

		for (i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i < max)
				printf(", ");
		}

		printf("\n");

		guess = (min + max) / 2;

		if (array[guess] == value)
			return (guess);
		else if (array[guess] > value)
			max = guess - 1;
		else
			min = guess + 1;
	}

	return (-1);
}
