#include "main.h"

/**
 * swap_int - Swap two variable values
 * @a: a pointer to variable to swap
 * @b: a pointer to variable to swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
