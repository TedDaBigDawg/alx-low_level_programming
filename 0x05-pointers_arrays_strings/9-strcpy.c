#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: copy destination
 * @src: copy source
 *
 * Return: A char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
