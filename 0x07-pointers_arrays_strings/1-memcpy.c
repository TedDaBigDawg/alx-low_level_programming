#include "main.h"

/**
 * _memcpy - copy memory area
 *
 * @dest: a pointer to the destination memory area
 * @src: a pointer to the source memory area which is being copied
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src  + i);

		i++;
	}

	return (dest);
}
