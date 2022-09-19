#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, size, half;
	char first, last;

	while (s[i] != '\0')
	{
		i++;
	}

	size = i - 1;
	half = size / 2;

	while (half >= 0)
	{
		first = s[size - half];
		last = s[half];
		s[half] = first;
		s[size - half] = last;

		half--;
	}

}
