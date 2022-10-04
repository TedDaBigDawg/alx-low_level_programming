#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes it
 * with a specific char
 *
 * @size: size of the array
 * @c: specific character
 * Return: something
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int arraypoint;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(c));

	if (array == 0)
	{
		return (NULL);
	}
	else
	{
		arraypoint = 0;

		while (arraypoint < size)
		{
			*(array + arraypoint) = c;

			arraypoint++;
		}

		return (array);
	}
}
