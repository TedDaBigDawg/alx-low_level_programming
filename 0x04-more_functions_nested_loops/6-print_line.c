#include "main.h"

/**
 * print_line - Returns 0 and draws a straight line
 * @n: number of times character _ should be printed
 * Return: 0
 */

void print_line(int n)
{
	int i;

	i = 1;

	while (i <= n)
	{
		_putchar(95);
	}
	_putchar('\n');
}
