#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: # A pointer to a 2 dimensional array of integers on success.
 *         # NULL If width or height is 0 or negative, or on failure.
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	i = 0;
	if ((width <= 0) || (height == 0))
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	while (i < height)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
