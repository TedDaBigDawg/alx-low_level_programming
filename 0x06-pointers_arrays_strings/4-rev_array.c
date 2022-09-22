#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: a pointer to the array to be reversed
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int *startofarray, *endofarray, array, i;

	startofarray = a;
	endofarray = a;

	for (i = 0; i < n - 1; i++)
	{
		endofarray++;
	}

	for (i = 0; i < n / 2; i++)
	{
		array = *endofarray;
		*endofarray = *startofarray;
		*startofarray = array;

		startofarray++;
		endofarray--;
	}

}
