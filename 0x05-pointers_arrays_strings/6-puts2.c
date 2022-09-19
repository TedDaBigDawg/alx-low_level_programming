#include "main.h"

/**
 * puts2 - print every other character of a string, starting with the first
 * @str: string to be used
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');

}
