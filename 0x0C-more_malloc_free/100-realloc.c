#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes of the new memory block.
 *
 * Return: NULL If new_size is equal to zero, and ptr is not NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		return ((newPtr == NULL) ? NULL : newPtr);
	}
	if (new_size > old_size)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			((char *)newPtr)[i] = ((char *) ptr)[i];
		free(ptr);
	}
	return (newPtr);
}
