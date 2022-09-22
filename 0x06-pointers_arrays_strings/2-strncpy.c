#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: a pointer to the string to be copied to
 * @src: a pointer to the string to be copied
 * @n: number of bytes to be used
 * Return: a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';

		i++;
	}

	return (dest);
}
