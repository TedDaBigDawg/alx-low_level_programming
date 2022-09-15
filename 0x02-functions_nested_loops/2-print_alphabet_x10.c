#include "main.h"

/**
 * print_alphabet_x10 - Return 0 and print a - z ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');

	}
}