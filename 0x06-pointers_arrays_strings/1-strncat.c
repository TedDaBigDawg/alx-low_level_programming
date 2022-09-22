#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: a pointer to the string to be added to
 * @src: a pointer to the string to be added
 * @n: number of bytes to be used
 * Return: a concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
