#include "main.h"

/**
 * _memset - fill memory with a constant byte
 *
 * @s: a pointer to an available memory area
 * @b: constant byte to be used
 * @n: number of bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
