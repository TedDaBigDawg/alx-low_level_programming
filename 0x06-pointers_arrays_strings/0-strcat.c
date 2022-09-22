#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: a pointer to the string to be added to
 * @src: a pointer to the string to be added
 * Return: a concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	i += 1;

	dest[i] = _putchar(' ');

	j = 0;

	while (src[j] != '\0')
	{
		dest[i + 1] = _putchar(src[j]);
		j++;
		i++;
	}
	dest[i + 1] = _putchar('\0');

	return (dest);
}
