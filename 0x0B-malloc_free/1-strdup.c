#include "main.h"

/**
 * _strlen - check the length of the string
 *
 * @s: a pointer to the string to be checked
 * Return: an integer
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy a string
 *
 * @dest: a pointer to the destination string
 * @src: a pointer to the string to be copied from
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to be copied
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}
	else
	{
		_strcpy(dest, str);

		return (dest);
	}
}
