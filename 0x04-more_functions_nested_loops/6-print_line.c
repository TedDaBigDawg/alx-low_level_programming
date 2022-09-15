#include "main.h"

/**
 * print_line - Returns 0 and draws a straight line
 * @n: number of times character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');

	return (0);
}
