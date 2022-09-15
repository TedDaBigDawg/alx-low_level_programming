#include "main.h"

/**
 * print_number - Returns 0 and prints an integer
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int i, j, val;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	val = 1;
	j = i;

	while (j > 9)
	{
		j = j / 10;

		val = val * 10;
	}
	for (; val >= 1; val /= 10)
	{
		_putchar(((i / val) % 10) + 48);
	}
}
