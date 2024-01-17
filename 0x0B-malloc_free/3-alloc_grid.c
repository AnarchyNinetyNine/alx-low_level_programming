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
	int **arr, placeholder, i, j;

	i = 0;
	placeholder = height;
	if ((width <= 0) || (height == 0))
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	while (height--)
		*arr++ = (int *) malloc(sizeof(int) * width);
	arr -= placeholder;
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	height = placeholder;
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
