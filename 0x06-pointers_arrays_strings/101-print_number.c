#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i, j, counter;

	if (n < 0)
	{
		_putchar(45);

		j = n * -1;
	}
	else
	{
		j = n;
	}

	i = j;
	counter = 1;

	while (i > 9)
	{
		i = i / 10;

		counter = counter * 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((j / counter) % 10) + 48);
	}
}
