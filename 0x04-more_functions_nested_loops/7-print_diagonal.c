#include "main.h"

/**
 * print_diagonal - Returns 0 and prints a diagonal line
 * @n: number of times the character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
