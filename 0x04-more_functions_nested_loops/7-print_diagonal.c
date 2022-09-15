#include "main.h"

/**
 * print_diagonal - Returns 0 and prints a diagonal line
 * @n: number of times the character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	i = 1;

	while (i <= n)
	{
		_putchar(92);

		i++;
	}
	_putchar('\n');
}
