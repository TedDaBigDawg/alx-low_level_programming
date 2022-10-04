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
 * str_concat - concatenates two strings
 *
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: a concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	size = (_strlen(s1) + _strlen(s2) + 1);

	dest = (char *) malloc(size * sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(dest + i) = *(s1 + i);
	}

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dest + i) = *(s2 + j);

		i++;
	}

	return (dest);
}
