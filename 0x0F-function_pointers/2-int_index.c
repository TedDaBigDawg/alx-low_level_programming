#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: a pointer to an array of integers
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0, if no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
