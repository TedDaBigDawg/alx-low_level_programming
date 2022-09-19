#include"main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an arraybof integers
 * @a: array to be used
 * @n: number of integers to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
