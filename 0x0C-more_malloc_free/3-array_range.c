#include "main.h"

/**
 * array_range -  creates an array of integers
 *
 * @min: minimum range
 * @max: maximum range
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0, t = min;

	if (min > max)
	{
		return (0);
	}
	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
	{
		return (0);
	}

	while (i <= max - min)
	{
		array[i++] = t++;
	}

	return (array);
}
