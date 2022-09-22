#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest - a pointer to the string to be added to
 * @src - a pointer to the string to be added
 * Return - a concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
