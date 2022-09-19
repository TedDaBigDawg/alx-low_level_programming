#include "main.h"

/**
 * print_rev - print a string in reverse, followed by a new line
 * @s: string to be printed in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j > 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
