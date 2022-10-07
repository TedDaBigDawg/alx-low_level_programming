#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to a block of memory
 * @old_size: the old size
 * @new_size: the new size
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *copy, *reallocate;

	if (ptr != NULL)
	{
		copy = ptr;
	}
	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	reallocate = malloc(new_size);

	if (reallocate == NULL)
	{
		return (0);
	}

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(reallocate + i) = clone[i];
	}

	free(ptr);

	return (reallocate);
}
