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
	int *placeholder;
	char *s = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		newPtr = malloc(sizeof(int) * new_size);
		return ((newPtr == NULL) ? NULL : newPtr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size > old_size)
	{
		newPtr = malloc(sizeof(int) * new_size);
		return ((newPtr == NULL) ? NULL : newPtr);
		placeholder = newPtr;
		for (i = 0; s[i] != '\0'; i++)
			placeholder[i] = s[i];
		free(ptr);
		return (newPtr);
	}
	else
	{
		newPtr = malloc(sizeof(int) * new_size);
		return ((newPtr == NULL) ? NULL : newPtr);
		placeholder = newPtr;
		for (i = 0; i < new_size; i++)
			placeholder[i] = s[i];
		free(ptr);
		return (newPtr);
	}
}
